using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class JoinRoomButtonScript : MonoBehaviour
{
    public void OnClickJoinRoomButton()
    {
        /// ↓roomidが存在すれば返り値を見るらしい(未
        if (true)
        {
            SceneManager.LoadScene("MenberListScene");
        } else
        {
#pragma warning disable CS0162 // 到達できないコードが検出されました
            SceneManager.LoadScene("NoMatchScene");
#pragma warning restore CS0162 // 到達できないコードが検出されました
        }
    }
}
