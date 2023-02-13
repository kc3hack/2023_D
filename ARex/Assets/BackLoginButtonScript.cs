using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackLoginButtonScript : MonoBehaviour
{
    public void OnClickBackLoginButton()
    {
        SceneManager.LoadScene("LoginScene");
    }
}
