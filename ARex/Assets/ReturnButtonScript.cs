using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ReturnButtonScript : MonoBehaviour
{
    public void OnClickReturnButton()
    {
        SceneManager.LoadScene("RoomListScene");
    }
}
