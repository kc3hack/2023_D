using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LogoutButtonScript : MonoBehaviour
{
    public void OnClickLogoutButton()
    {
        ///Useruuid del
        PlayerPrefs.DeleteKey("Useruuid");
        ///ÉçÅ[Éh
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        Debug.Log(useruuid);
        SceneManager.LoadScene("TitleScene");
    }
}
