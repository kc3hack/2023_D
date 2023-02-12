using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class JoinButtonScript : MonoBehaviour
{
    public void OnClickJoinButton()
    {
        SceneManager.LoadScene("RoomJoinScene");
    }
}
