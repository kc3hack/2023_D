using System;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;

public class RoomPollingScript : MonoBehaviour
{
    public float span = 1f;
    public TextMeshProUGUI room_number; // Text�I�u�W�F�N�g

    [Serializable]
    private sealed class Data
    {
        public string user_uuid = "none";
    }

    // Start is called before the first frame update
    IEnumerator Start()
    {
        while (true)
        {
            yield return new WaitForSeconds(span);
            Debug.LogFormat("{0}�b�o��", span);
            Debug.Log("api�J�n");

            /// uuid���[�h
            var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
            var url = "http://itoho.ddns.net:5000/roompolling";
            var data = new Data();
            data.user_uuid = useruuid;
            var json = JsonUtility.ToJson(data);
            var postData = Encoding.UTF8.GetBytes(json);

            using var request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST)
            {
                uploadHandler = new UploadHandlerRaw(postData),
                downloadHandler = new DownloadHandlerBuffer()
            };

            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 1;

            yield return request.SendWebRequest();

            Debug.Log(request.downloadHandler.text);
            try
            {
                string[] arr = request.downloadHandler.text.Split(',');
                string judge = arr[0];
                ///�gTrue,Room_number,�����o�[�̐�,�����o�[1�̖��O,�����o�[2�̖��O......(�z�X�g��1�ԏ�ɂȂ�悤���ёւ���)
                ///�gFalse,�G���[���b�Z�[�W�h�iFalse�������ޏo�j

                if (judge == "True")
                {
                    ///arr[1] = room_number
                    ///arr[2] = �����o�[�̐�
                    ///arr[3] = �����o�[1(�z�X�g)
                    ///arr[4] = �����o�[2(�����o�[)
                    ///(ry
                    Debug.Log("connecting!");
                    Debug.Log("UUID:" + useruuid);
                    room_number = room_number.GetComponent<TextMeshProUGUI>();
                    room_number.text = arr[1];
                    ///�ȉ��Ƀ����o�[�\������������
                }
                else
                {
                    string error = arr[1];
                    Debug.Log("error:" + error);
                    SceneManager.LoadScene("RoomListScene");
                }
            }
            catch
            {
                Debug.Log("error");
            }


        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
