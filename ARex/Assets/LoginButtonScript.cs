using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

// ログインボタンを押したときの処理
public class LoginButtonScript : MonoBehaviour
{
    public TextMeshProUGUI user_name; // Textオブジェクト
    string user_name_str;
    public TextMeshProUGUI user_password; // Textオブジェクト
    string user_password_str;
    public Text error_message; // Textオブジェクト

    public void OnClick()
    {
        // ユーザー名とパスワードを取得
        // ゼロ幅スペースを削除
        user_name = user_name.GetComponent<TextMeshProUGUI>();
        user_name_str = user_name.text;
        // Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        user_name_str = user_name_str.Replace("​", "");
        user_password = user_password.GetComponent<TextMeshProUGUI>();
        user_password_str = user_password.text;
        // Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        user_password_str = user_password_str.Replace("​", "");
        // 空欄チェック。空欄ならエラーを表示
        int user_name_str_length = user_name_str.Length;
        int user_password_str_length = user_password_str.Length;
        if (user_name_str_length <= 1 || user_password_str_length <= 1)
        {
            string error = "ユーザー名とパスワードを入力してください";
            error_message = error_message.GetComponent<Text>();
            error_message.text = error;
            Debug.Log("error:" + error);
            return;
        }
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
            var useruuid = PlayerPrefs.GetString("Useruuid", "");
            var url = "http://itoho.ddns.net:5000/login";
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

        try
        {
            string[] arr = request.downloadHandler.text.Split(',');
            string judge = arr[0];
            if (judge == "True")
            {
                // UUIDセーブ
                PlayerPrefs.SetString("Useruuid", arr[1]);
                useruuid = arr[1];
                Debug.Log("login successful UUID:" + useruuid);
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
        catch
        {
            string error = "サーバーに接続できない";
            error_message = error_message.GetComponent<Text>();
            error_message.text = error;
            Debug.Log("error:" + error);
        }

    }
}
