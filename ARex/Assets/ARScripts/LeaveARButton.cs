using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// ARSceneに遷移するスクリプト
public class LeaveARButton : MonoBehaviour
{
    public void OnClickJoinButton()
    {
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        Debug.Log("UUID:" + useruuid);
        SceneManager.LoadScene("MemberListScene");
    }
}
