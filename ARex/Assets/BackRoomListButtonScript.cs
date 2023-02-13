using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackRoomListButtonScript : MonoBehaviour
{
    public void OnClickBackRoomListButton()
    {
        SceneManager.LoadScene("RoomListScene");
    }
}
