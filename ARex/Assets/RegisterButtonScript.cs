using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// RegisterSceneに移行する
public class RegisterButtonScript : MonoBehaviour
{
    public void OnClickRegisterButton()
    {
        SceneManager.LoadScene("RegisterScene");
    }
}
