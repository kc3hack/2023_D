using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CreateButtonScript : MonoBehaviour
{
    public void OnClickCreateButton()
    {
        ///uuidÉçÅ[Éh
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        Debug.Log(useruuid);
        SceneManager.LoadScene("RoomCreateScene");
    }
}
