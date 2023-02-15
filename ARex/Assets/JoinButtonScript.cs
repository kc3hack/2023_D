using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// RoomJoinSceneに移行する
public class JoinButtonScript : MonoBehaviour
{
    public void OnClickJoinButton()
    {
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        Debug.Log("UUID:" + useruuid);
        SceneManager.LoadScene("RoomJoinScene");
    }
}
