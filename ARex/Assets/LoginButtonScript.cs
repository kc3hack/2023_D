using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoginButtonScript : MonoBehaviour
{
    public void OnClickLoginButton()
    {
        SceneManager.LoadScene("RoomListScene");
    }
}
