using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class LoginButtonScript : MonoBehaviour
{


    [Serializable]
    private sealed class Data
    {
        public string name = "hitto";
        public string password = "apexaa";
    }

    public void OnClick()
    {
        StartCoroutine(Upload());
    }

    IEnumerator Upload()
    {
        var url = "http://4.241.111.128:3000/api";
        var data = new Data();
        var json = JsonUtility.ToJson(data);
        var postData = Encoding.UTF8.GetBytes(json);

        using var request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST)
        {
            uploadHandler = new UploadHandlerRaw(postData),
            downloadHandler = new DownloadHandlerBuffer()
        };

        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        Debug.Log(request.downloadHandler.text);

        string[] arr = request.downloadHandler.text.Split(',');
        string judge = arr[0];
        if (judge == "True")
        {
            string UUID = arr[1];
            SceneManager.LoadScene("RoomListScene");
        }
        else
        {
            string error = arr[1];
            Debug.Log(error);
        }

    }
}