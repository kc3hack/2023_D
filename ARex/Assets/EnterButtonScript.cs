using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// ARSceneに遷移するスクリプト
public class EnterButtonScript : MonoBehaviour
{
    public void OnClickJoinButton()
    {
        SceneManager.LoadScene("ARScene");
    }
}
