using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

// RoomDelete時の処理(ホスト限定)
public class RoomDeleteButtonScript : MonoBehaviour
{
    public Text error_message; // Textオブジェクト

    public void OnClickRoomDeleteButton()
    {
        StartCoroutine(Upload());
    }

    // json data
    [Serializable]
    private sealed class Data
    {
        public string user_uuid = "none";
    }

    IEnumerator Upload()
    {
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        var url = "http://itoho.ddns.net:5000/roomdelete";
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

        // 送信
        yield return request.SendWebRequest();

        Debug.Log(request.downloadHandler.text);

        string[] arr = request.downloadHandler.text.Split(',');
        string judge = arr[0];
        if (judge == "True")
        {
            Debug.Log("room del success!");
            Debug.Log("UUID:" + useruuid);
            SceneManager.LoadScene("RoomListScene");
        }
        else
        {
            string error = arr[1];
            error_message = error_message.GetComponent<Text>();
            error_message.text = error;
            Debug.Log("error:" + error);
        }

    }
}
