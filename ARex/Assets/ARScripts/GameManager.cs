using Google.XR.ARCoreExtensions;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Remoting.Contexts;
using System.Security.Policy;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class GameManager : MonoBehaviour
{
    public AREarthManager EarthManager;
    public ARAnchorManager AnchorManager;
    public List<Marker> markers = new List<Marker>();//マーカー(pin)の場所
    public TextMeshProUGUI error_message; // Textオブジェクト
    public float span = 1f;//polling second
    public FixedJoystick joystick;
    public Image circlemask;
    private int zerocount = 0;
    private int kurukurucount = 0;
    private int lastselectindex = 0;
    private Vector2 lastDirection=new Vector2(0.2f,0.9f);
    private bool counting = false;
    private string[] pintype=new string[8];
    [Serializable]
    private sealed class PinData
    {
        public string user_uuid = "none";
        public string room_number = "0";
    }

    


    [Serializable]
    private sealed class PinAddData
    {
        public string useruuid = "none";
        public double longuitude = 0;
        public double latitude = 0;
        public double altitude = 0;
        public string pin_type = "go";

    }
    // Start is called before the first frame update
    IEnumerator Start()
    {
        error_message = error_message.GetComponent<TextMeshProUGUI>();
        // 1秒おきにループ
        while (true)
        {
            // ループ処理
            yield return new WaitForSeconds(span);
            Debug.LogFormat("{0}秒経過", span);
            Debug.Log("api開始");

            // リクエスト作成
            // uuidロード
            var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
            var roomnumber = PlayerPrefs.GetString("Roomnumber", "");
            var url = "http://itoho.ddns.net:5000/arpinpolling";
            var data = new PinData();
            data.user_uuid = useruuid;
            data.room_number = roomnumber;
            var json = JsonUtility.ToJson(data);
            Debug.Log(json);
            var postData = Encoding.UTF8.GetBytes(json);

            using var request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST)
            {
                uploadHandler = new UploadHandlerRaw(postData),
                downloadHandler = new DownloadHandlerBuffer()
            };

            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 1;

            // リクエスト送信
            yield return request.SendWebRequest();

            // レスポンス受信
            Debug.Log(request.downloadHandler.text);
            // レスポンスを処理
            try
            {
                // レスポンスをパース
                string[] arr = request.downloadHandler.text.Split(',');
                // True or False を judge に格納
                string judge = arr[0];

                // “True,部屋番号,メンバーの数,メンバー1(ホスト),メンバー2(メンバー)”（True時部屋参加）
                // “False,エラーメッセージ”（False時部屋退出）??

                // True or False で処理を分岐
                if (judge == "True")
                {
                    // arr[1] = room_number
                    // arr[2] = メンバーの数
                    // arr[3] = メンバー1(ホスト)
                    // arr[4] = メンバー2(メンバー)
                    // (ry
                    Debug.Log("connecting!");
                    Debug.Log("UUID:" + useruuid);
                    // 以下にメンバー表示処理を書く
                    int mom = Convert.ToInt32(arr[2]);

                    string[] namelist = new string[mom];
                    for (int i = 0; i < mom; i++)
                    {
                        namelist[i] = arr[i + 3];
                    }
                    // Contentの子要素を全削除

                   
                }
                else
                {
                    // エラー処理
                    string error = arr[1];
                    error_message.text = error;
                    Debug.Log("error:" + error);
                    // SceneManager.LoadScene("RoomListScene");
                }
            }
            catch
            {
                // エラー処理
                string error = "invalid return value";
                error_message.text = error;
                Debug.Log("error:" + error);
            }


        }
    }


    [System.Obsolete]
    IEnumerator addpin(double latitude,double longitude,double altitude,int pintypeid)
    {
        var earthTrackingState = EarthManager.EarthTrackingState;
        if (earthTrackingState != TrackingState.Tracking)//位置情報が取得できなかったら
        {
            error_message.text = "not enough GPS accuracy";
        }
       
        var data = new PinAddData();
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        data.useruuid = useruuid;
        data.latitude = latitude;
        data.longuitude = longitude;
        data.altitude = altitude;
        data.pin_type = pintype[pintypeid];
        
        var json = JsonUtility.ToJson(data);
        Debug.Log(json);
        var postData = Encoding.UTF8.GetBytes(json);

        using var request = new UnityWebRequest("http://itoho.ddns.net:5000/pinadd", UnityWebRequest.kHttpVerbPOST)
        {
            uploadHandler = new UploadHandlerRaw(postData),
            downloadHandler = new DownloadHandlerBuffer()
        };

        request.SetRequestHeader("Content-Type", "application/json");
        request.timeout = 1;

        // リクエスト送信
        yield return request.SendWebRequest();

        // レスポンス受信
        Debug.Log(request.downloadHandler.text);
        if (request.isNetworkError || request.isHttpError)
        {
            Debug.Log(request.error);
            error_message.text = request.error;
        }
        else if (request.responseCode == 200)
        {
            Debug.Log(request.downloadHandler.text);
            var tmp = request.downloadHandler.text;
            var lines = tmp.Split(",");
            foreach (var line in lines)
            {
                var contents = line.Split(",");
                //var mark=new Marker("")
                //var mark = new Marker(int.Parse(contents[0]),new GeospatialPose_ double.Parse(contents[1]), double.Parse(contents[2]), double.Parse(contents[3]));
                //markers.Add(mark);

                Debug.Log(line);

            }
            error_message.text = tmp;

        }
    }


    // Update is called once per frame
    void Update()
    {
        
        if(joystick.Direction== Vector2.zero) {
            if(counting) zerocount++;

            if (zerocount >= 10)
            {
                zerocount= 0;
                counting = false;
                circlemask.color= new Color(0,0,0,0);
                if(lastDirection.magnitude > 0.6)
                {
                    PushPinButton(lastselectindex);
                }
                else
                {
                    PushPinButton(0);
                }
                
            }
            return;
        }
        counting = true;
        if (joystick.Direction.magnitude>0.6) {
            lastDirection = joystick.Direction;
            kurukurucount++;
            circlemask.color = new Color(0, 0, 0, 0.5f);
        }
        var selectradius = Mathf.Atan2( joystick.Direction.x,joystick.Direction.y) * Mathf.Rad2Deg;
        //Debug.Log(selectradius.ToString());
        int selectindex = (int)((Math.Floor(selectradius / 45) + 8) % 8);
        Debug.Log(selectindex);
        lastselectindex= selectindex;
        circlemask.transform.rotation= Quaternion.Euler(0,0, -45 * selectindex);
        var earthTrackingState = EarthManager.EarthTrackingState;
        if (earthTrackingState == TrackingState.Tracking)
        {
            
            for (int i = 0; i < markers.Count; i++)
            {
                if (markers[i].spawned == false)
                {
                }
            }
        }
    }


    public void PushPinButton()
    {
        var earthTrackingState = EarthManager.EarthTrackingState;
        if (earthTrackingState == TrackingState.Tracking)
        {
            Quaternion quaternion =
                   Quaternion.AngleAxis(180f - (float)0, Vector3.up);
            var pose = EarthManager.EarthState == EarthState.Enabled &&
                EarthManager.EarthTrackingState == TrackingState.Tracking ?
                EarthManager.CameraGeospatialPose : new GeospatialPose();
            var anchor = AnchorManager.AddAnchor(pose.Latitude, pose.Longitude, pose.Altitude, quaternion);

            if (anchor != null)
            {
                Debug.Log("add anchor");
            }
        }
    }

    [Obsolete]
    public void PushPinButton(int index)
    {
        Debug.Log("index" +index);
        var latitude = EarthManager.CameraGeospatialPose.Latitude;
        var altitude = EarthManager.CameraGeospatialPose.Altitude;
        var longitude = EarthManager.CameraGeospatialPose.Longitude;
        StartCoroutine(addpin(latitude,longitude,altitude,index));

    }
}




public class Marker
{
    public double id;
    public GeospatialPose pose;
    public bool allive;//生きているか
    public bool spawned;//生成したか
    public GameObject pinpref;
    public string pinuuid;
    public string type;
    public Marker(double id, GeospatialPose pose, string pinuuid, string type)
    {
        this.id = id;
        this.pose = pose;
        this.allive = true;
        this.spawned = false;
    }
}
