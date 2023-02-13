using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RegisterButtonScript : MonoBehaviour
{
    public void OnClickRegisterButton()
    {
        SceneManager.LoadScene("RegisterScene");
    }
}
