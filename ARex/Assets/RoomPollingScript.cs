using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

public class RoomPollingScript : MonoBehaviour
{
    public float span = 1f;
    public TextMeshProUGUI room_number; // Textオブジェクト

    [Serializable]
    private sealed class Data
    {
        public string user_uuid = "none";
    }

    // Start is called before the first frame update
    IEnumerator Start()
    {
        while (true)
        {
            yield return new WaitForSeconds(span);
            Debug.LogFormat("{0}秒経過", span);
            Debug.Log("api開始");

            /// uuidロード
            var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
            var url = "http://itoho.ddns.net:5000/roompolling";
            var data = new Data();
            data.user_uuid = useruuid;
            var json = JsonUtility.ToJson(data);
            var postData = Encoding.UTF8.GetBytes(json);

            using var request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST)
            {
                uploadHandler = new UploadHandlerRaw(postData),
                downloadHandler = new DownloadHandlerBuffer()
            };

            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 1;

            yield return request.SendWebRequest();

            Debug.Log(request.downloadHandler.text);
            try
            {
                string[] arr = request.downloadHandler.text.Split(',');
                string judge = arr[0];
                ///“True,Room_number,メンバーの数,メンバー1の名前,メンバー2の名前......(ホストが1番上になるよう並び替える)
                ///“False,エラーメッセージ”（False時部屋退出）

                if (judge == "True")
                {
                    ///arr[1] = room_number
                    ///arr[2] = メンバーの数
                    ///arr[3] = メンバー1(ホスト)
                    ///arr[4] = メンバー2(メンバー)
                    ///(ry
                    Debug.Log("connecting!");
                    Debug.Log("UUID:" + useruuid);
                    room_number = room_number.GetComponent<TextMeshProUGUI>();
                    room_number.text = arr[1];
                    ///以下にメンバー表示処理を書く
                }
                else
                {
                    string error = arr[1];
                    Debug.Log("error:" + error);
                    SceneManager.LoadScene("RoomListScene");
                }
            }
            catch
            {
                Debug.Log("error");
            }


        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
