using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// RoomCreateSceneに遷移するスクリプト
public class CreateButtonScript : MonoBehaviour
{
    public void OnClickCreateButton()
    {
        SceneManager.LoadScene("RoomCreateScene");
    }
}
