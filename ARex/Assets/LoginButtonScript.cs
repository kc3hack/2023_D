using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

public class LoginButtonScript : MonoBehaviour
{
    public TextMeshProUGUI user_name; // Textオブジェクト
    string user_name_str;
    public TextMeshProUGUI user_password; // Textオブジェクト
    string user_password_str;
    public TextMeshProUGUI error_message; // Textオブジェクト

    public void Start()
    {

    }


    public void OnClick()
    {
        user_name = user_name.GetComponent<TextMeshProUGUI>();
        user_name_str = user_name.text;
        ///Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        user_name_str = user_name_str.Replace("​", "");
        user_password = user_password.GetComponent<TextMeshProUGUI>();
        user_password_str = user_password.text;
        ///Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        user_password_str = user_password_str.Replace("​", "");
        ///Debug.Log(user_name_str);
        ///Debug.Log(user_password_str);
        StartCoroutine(Upload());
    }

    [Serializable]
    private sealed class Data
    {
        public string name = "hitto";
        public string password = "apex";
    }

    IEnumerator Upload()
    {
        var url = "http://4.241.111.128:3000/api";
        var data = new Data();
        data.name = user_name_str;
        data.password = user_password_str;
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
            Debug.Log("login successful UUID:" + UUID);
            SceneManager.LoadScene("RoomListScene");
        }
        else
        {
            string error = arr[1];
            error_message = error_message.GetComponent<TextMeshProUGUI>();
            error_message.text = error;
            Debug.Log("error:" + error);
        }

    }
}
