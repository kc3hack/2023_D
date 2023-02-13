using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

public class LeaveButtonScript : MonoBehaviour
{

    public void Start()
    {

    }


    public void OnClickLeaveButton()
    {
        StartCoroutine(Upload());
    }






    [Serializable]
    private sealed class Data
    {
        public string user_uuid = "none";
    }

    IEnumerator Upload()
    {
        /// uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        var url = "http://4.241.111.128:3000/roomleave";
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

        yield return request.SendWebRequest();

        SceneManager.LoadScene("RoomListScene");
    }
}
