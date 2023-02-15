using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

// ユーザー登録Script
public class RegisterRoomButtonScript : MonoBehaviour
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
        // Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        user_name_str = user_name_str.Replace("​", "");
        user_password = user_password.GetComponent<TextMeshProUGUI>();
        user_password_str = user_password.text;
        // Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        user_password_str = user_password_str.Replace("​", "");
        StartCoroutine(Upload());
    }

    // json data
    [Serializable]
    private sealed class Data
    {
        public string name = "none";
        public string password = "none";
    }

    IEnumerator Upload()
    {
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        var url = "http://itoho.ddns.net:5000/register";
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
            // 登録時にuuidがいるのか？
            PlayerPrefs.SetString("Useruuid", arr[1]);
            useruuid = arr[1];
            Debug.Log("login successful UUID:" + useruuid);
            SceneManager.LoadScene("LoginScene");
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
