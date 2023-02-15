using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// title -> login
public class StartButtonScript : MonoBehaviour
{
    public void OnClickStartButton()
    {
        // uuidを削除する
        PlayerPrefs.DeleteAll();
        Debug.Log("del all PlayerPrefs");
        // LoginSceneに遷移
        SceneManager.LoadScene("LoginScene");
    }
}
