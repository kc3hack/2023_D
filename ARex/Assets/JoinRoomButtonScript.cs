using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class JoinRoomButtonScript : MonoBehaviour
{
    public void OnClickJoinRoomButton()
    {
        /// ��roomid�����݂���ΕԂ�l������炵��(��
        if (true)
        {
            SceneManager.LoadScene("MenberListScene");
        } else
        {
#pragma warning disable CS0162 // ���B�ł��Ȃ��R�[�h�����o����܂���
            SceneManager.LoadScene("NoMatchScene");
#pragma warning restore CS0162 // ���B�ł��Ȃ��R�[�h�����o����܂���
        }
    }
}
