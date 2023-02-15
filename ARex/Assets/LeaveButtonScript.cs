using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

// 待機画面を抜ける(離れる)
public class LeaveButtonScript : MonoBehaviour
{

    public void Start()
    {

    }

    public void OnClickLeaveButton()
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
        var url = "http://itoho.ddns.net:5000/roomleave";
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
        // 送信(レスポンスなし)
        yield return request.SendWebRequest();

        // RoomlistSceneに戻る
        SceneManager.LoadScene("RoomListScene");
    }
}
