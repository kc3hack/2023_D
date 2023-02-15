using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// RoomCreateSceneに遷移するスクリプト
public class CreateButtonScript : MonoBehaviour
{
    public void OnClickCreateButton()
    {
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        Debug.Log(useruuid);

        SceneManager.LoadScene("RoomCreateScene");
    }
}
