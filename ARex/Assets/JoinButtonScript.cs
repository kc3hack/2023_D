using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class JoinButtonScript : MonoBehaviour
{
    public void OnClickJoinButton()
    {
        ///uuid���[�h
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        Debug.Log("UUID:" + useruuid);
        SceneManager.LoadScene("RoomJoinScene");
    }
}
