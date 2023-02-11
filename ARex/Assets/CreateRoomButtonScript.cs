using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CreateRoomButtonScript : MonoBehaviour
{
    public void OnClickCreateRoomButton()
    {
        SceneManager.LoadScene("MenberListScene");
    }
}
