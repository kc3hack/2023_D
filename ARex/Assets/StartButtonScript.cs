using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// title -> login
public class StartButtonScript : MonoBehaviour
{
    public void OnClickStartButton()
    {
        // roomid load
        var roomnumber = PlayerPrefs.GetString("Roomnumber", "");
        // uuid load
        var useruuid = PlayerPrefs.GetString("Useruuid", "");
        if (useruuid != "")
        {
            if (roomnumber != "")
            {
                SceneManager.LoadScene("MemberListScene");
            }
            else
            {
                // uuidを削除する
                // PlayerPrefs.DeleteAll();
                // Debug.Log("del all PlayerPrefs");
                // RoomListSceneに遷移
                SceneManager.LoadScene("RoomListScene");
            }
        }
        else
        {
            // LoginSceneに遷移
            SceneManager.LoadScene("LoginScene");
        }
    }
}
