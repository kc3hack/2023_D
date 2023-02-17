using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

// Join Room Script
public class JoinRoomButtonScript : MonoBehaviour
{
    public TextMeshProUGUI room_number; // Textオブジェクト
    string room_number_str;

    public void Start()
    {

    }


    public void OnClickJoinRoomButton()
    {
        // ルーム番号を取得
        // ゼロ幅スペースを削除
        room_number = room_number.GetComponent<TextMeshProUGUI>();
        room_number_str = room_number.text;
        // Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        room_number_str = room_number_str.Replace("​", "");
        StartCoroutine(Upload());
    }


    // json data
    [Serializable]
    private sealed class Data
    {
        public string user_uuid = "none";
        public string room_number = "none";
    }

    IEnumerator Upload()
    {
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        var url = "http://itoho.ddns.net:5000/roomexist";
        var data = new Data();
        data.user_uuid = useruuid;
        data.room_number = room_number_str;
        var json = JsonUtility.ToJson(data);
        var postData = Encoding.UTF8.GetBytes(json);

        using var request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST)
        {
            uploadHandler = new UploadHandlerRaw(postData),
            downloadHandler = new DownloadHandlerBuffer()
        };

        request.SetRequestHeader("Content-Type", "application/json");

        // リクエスト送信
        yield return request.SendWebRequest();

        // レスポンス取得
        Debug.Log(request.downloadHandler.text);
        string[] arr = request.downloadHandler.text.Split(',');
        // True or False を judge に格納
        string judge = arr[0];
        // True or False で処理を分岐
        if (judge == "True")
        {
            Debug.Log("Match!!");
            SceneManager.LoadScene("MemberListScene");
        }
        else
        {
            Debug.Log("NoMatch ; ;");
            Debug.Log(request.downloadHandler.text.IndexOf("YOU ARE OWNER"));
            if (request.downloadHandler.text.IndexOf("YOU ARE OWNER") != -1)
            {
                Debug.Log("You can login");
                SceneManager.LoadScene("MemberListScene");
            }
            else
            {
                SceneManager.LoadScene("NoMatchScene");
            }
            
        }

    }
}
