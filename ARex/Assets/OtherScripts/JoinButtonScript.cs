using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// RoomJoinSceneに移行する
public class JoinButtonScript : MonoBehaviour
{
    public void OnClickJoinButton()
    {
        SceneManager.LoadScene("RoomJoinScene");
    }
}
