﻿using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

// Create Room Script
public class CreateRoomButtonScript : MonoBehaviour
{
    public TextMeshProUGUI room_number; // Textオブジェクト
    string room_number_str;
    public Text error_message; // Textオブジェクト

    public void Start()
    {

    }

    public void OnClickCreateRoomButton()
    {
        // ルーム番号取得
        // ゼロ幅スペースを削除
        room_number = room_number.GetComponent<TextMeshProUGUI>();
        room_number_str = room_number.text;
        // Replace("​", "")の一つ目の""内にはゼロ幅スペース"%E2%80%8B"が入っています。
        room_number_str = room_number_str.Replace("​", "");
        // Debug.Log(room_number_str);
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
        // リクエスト作成
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        var url = "http://itoho.ddns.net:5000/roomcreate";
        var data = new Data();
        data.room_number = room_number_str;
        data.user_uuid = useruuid;
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

        // レスポンス受信
        Debug.Log(request.downloadHandler.text);
        try
        {
            // レスポンスを処理
            // レスポンスを配列に格納
            string[] arr = request.downloadHandler.text.Split(',');
            string judge = arr[0];
        
            if (judge == "True")
            {
                // 待機画面へ
                Debug.Log("Create!!");
                SceneManager.LoadScene("MemberListScene");
            }
            else
            {   
                // エラーメッセージ表示
                string error = arr[1];
                error_message = error_message.GetComponent<Text>();
                error_message.text = error;
                Debug.Log("error:" + error);
                Debug.Log("useruuid:" + useruuid);
            }
        }
        catch
        {
            string error = "サーバーに接続できない";
            error_message = error_message.GetComponent<Text>();
            error_message.text = error;
            Debug.Log("error:" + error);
            Debug.Log("useruuid:" + useruuid);
        }

    }
}

