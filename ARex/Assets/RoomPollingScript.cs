using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using System.Linq;

// pollingスクリプト
public class RoomPollingScript : MonoBehaviour
{
    public float span = 1f; // 何秒おきに実行するか
    public TextMeshProUGUI room_number; // Textオブジェクト
    public Text error_message; // Textオブジェクト
    // メンバー表示用
    public RectTransform content_;
    public GameObject item_prefab_;

    // json data
    [Serializable]
    private sealed class Data
    {
        public string user_uuid = "none";
    }

    // Start is called before the first frame update
    IEnumerator Start()
    {
        error_message = error_message.GetComponent<Text>();
        // 1秒おきにループ
        while (true)
        {
            // ループ処理
            yield return new WaitForSeconds(span);
            // Debug.LogFormat("{0}秒経過", span);
            // Debug.Log("api開始");
            
            // リクエスト作成
            // uuidロード
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
            
            // リクエスト送信
            yield return request.SendWebRequest();

            // レスポンス受信
            Debug.Log(request.downloadHandler.text);
            // レスポンスを処理
            try
            {
                // レスポンスをパース
                string[] arr = request.downloadHandler.text.Split(',');
                // True or False を judge に格納
                string judge = arr[0];

                // “True,部屋番号,メンバーの数,メンバー1(ホスト),メンバー2(メンバー)”（True時部屋参加）
                // “False,エラーメッセージ”（False時部屋退出）??

                // True or False で処理を分岐
                if (judge == "True")
                {
                    // arr[1] = room_number
                    // arr[2] = メンバーの数
                    // arr[3] = メンバー1(ホスト)
                    // arr[4] = メンバー2(メンバー)
                    // (ry
                    // Debug.Log("connecting!");
                    // Debug.Log("UUID:" + useruuid);
                    room_number = room_number.GetComponent<TextMeshProUGUI>();
                    room_number.text = "id:" + arr[1];
                    PlayerPrefs.SetString("Roomnumber", arr[1]);
                    // 以下にメンバー表示処理を書く
                    int mom = Convert.ToInt32(arr[2]);

                    string[] namelist = new string[mom];
                    for (int i = 0; i < mom; i++)
                    {
                        namelist[i] = arr[i + 3];
                    }
                    // Contentの子要素を全削除
                    foreach (Transform child in content_)
                    {
                        Destroy(child.gameObject);
                    }
                    // リストの要素数分Itemを生成
                    for (int i = 0; i < mom; i++)
                    {
                        // content_にitem_prefab_をインスタンス化
                        var item = Instantiate(item_prefab_, content_);
                        // item_objの子要素のTextを取得
                        var item_text = item.GetComponentInChildren<Text>();
                        item_text.text = namelist[i];
                    }
                }
                else
                {
                    // エラー処理
                    string error = arr[1];
                    error_message.text = error;
                    Debug.Log("error:" + error);
                    // SceneManager.LoadScene("RoomListScene");
                }
            }
            catch
            {
                // エラー処理
                string error = "invalid return value";
                error_message.text = error;
                Debug.Log("error:" + error);
            }

        }
    }
}
