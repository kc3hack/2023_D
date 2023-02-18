using Google.XR.ARCoreExtensions;
using Google.XR.ARCoreExtensions.Samples.Geospatial;
using Mathd;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using System.Runtime.Remoting.Contexts;
using System.Security.Policy;
using System.Text;
using TMPro;
using Unity.VisualScripting;
using Unity.VisualScripting.Antlr3.Runtime.Tree;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.UIElements;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Image = UnityEngine.UI.Image;
using Quaternion = UnityEngine.Quaternion;
using Vector2 = UnityEngine.Vector2;
using Vector3 = UnityEngine.Vector3;
public enum PinType
{
    go=0, enemy=1, item=2, attack=3, go2=4, defend=5, watch=6, trace=7
}

public enum ReactionType
{
    ok=0,no=1,unable=2,stop=3
}

public class GameManager : MonoBehaviour
{
    public AREarthManager EarthManager;
    public ARAnchorManager AnchorManager;
    public List<Marker> markers = new List<Marker>();//マーカー(pin)の場所
    public TextMeshProUGUI error_message; // Textオブジェクト
    public float span = 1f;//polling second
    public FixedJoystick joystick;
    public Image circlemask;
    public Image logocircle;
    public GameObject PinPrefab;
    private int zerocount = 0;
    private int kurukurucount = 0;
    private int lastselectindex = 0;
    private Vector2 lastDirection =new Vector2(0.2f,0.9f);
    private bool counting = false;
    private string[] pintype=new string[8] {"go","enemy","item","attack","go2","defend","watch","trace" };
    private AudioSource audioSource;
    public AudioClip audioClip;
    public AudioClip kurukuru;
    public Scrollbar slider;
    public List<AnchorData> naiteki= new List<AnchorData>();

    [Serializable]
    private sealed class PinData
    {
        public string user_uuid = "none";
        public string room_number = "0";
    }

    

    [Serializable]
    public class AnchorData
    {
        public string pin_uuid = "none";
        public string user_name = "none";
        public double latitude = 0;
        public double longitude = 0;
        public double altitude = 0;
        public PinType pinType = PinType.go;
        public bool spawned = false;
        public ARGeospatialAnchor anchor;
        public GameObject pinprefab;
    }

    [Serializable]
    public class ReactionData
    {
        public string pin_uuid = "none";
        public string user_name = "none";
        public ReactionType reactionType = ReactionType.ok;
        public bool spawned = false;
    }



    [Serializable]
    private sealed class PinAddData
    {
        public string user_uuid = "none";
        public string longuitude = "0";
        public string latitude = "0";
        public string altitude = "0";
        public string pin_type = "go";

    }
    // Start is called before the first frame update
    IEnumerator Start()
    {
        circlemask.color = new Color(0, 0, 0, 0);
        logocircle.color = new Color(0, 0, 0, 0);
        audioSource = GetComponent<AudioSource>();
        error_message = error_message.GetComponent<TextMeshProUGUI>();
        
        //var jikakukarakita100m = calcdimention(34.64910503367887, 135.58416437641043, 90, 100);
        //Debug.Log(jikakukarakita100m.ToString());

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
            var ur2 = "http://itoho.ddns.net:5000/arreactionpolling";
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
            using var request2 = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST)
            {
                uploadHandler = new UploadHandlerRaw(postData),
                downloadHandler = new DownloadHandlerBuffer()
            };

            request2.SetRequestHeader("Content-Type", "application/json");
            request2.timeout = 1;
            yield return request2.SendWebRequest();




            // レスポンス受信
            Debug.Log(request.downloadHandler.text);
            // レスポンスを処理
            try
            {
                // レスポンスをパース
                string[] arr = request.downloadHandler.text.Split(',');
                // True or False を judge に格納
                string judge = arr[0];


                // True or False で処理を分岐
                if (judge == "True")
                {

                    //“True,ピンの数,ピン1の種類,ピン1のUUID,ピン１のユーザー名,ピン1の緯度,ピン1の
                    //経度,ピン1の高さ,ピン2の種類,ピン2のユーザー名,ピン2のUUID,ピン2の緯度,ピン2の経度,ピン2の高さ....

                    // 以下に処理を書く
                    
                    int anchornum = int.Parse(arr[1]);
                    Debug.Log("True,response"+anchornum);
                    if (anchornum == 0) continue;
                    List<AnchorData> responseanchor=new List<AnchorData>();
                    for(int i = 0; i < anchornum; i++)
                    {
                        AnchorData tmp=new AnchorData();
                        tmp.pinType = (PinType)Enum.Parse(typeof(PinType), arr[2 + i * 6]);
                        tmp.pin_uuid = arr[2 + 1 + i * 6];
                        tmp.user_name = arr[2 + 2 + i * 6];
                        tmp.latitude = double.Parse( arr[2 + 3 + i * 6]);
                        tmp.longitude = double.Parse(arr[2 + 4 + i * 6]);
                        tmp.altitude = double.Parse(arr[2 + 5 + i * 6]);
                        tmp.spawned = false;
                        responseanchor.Add(tmp);
                        //naiteki.Add(tmp);
                        Debug.Log(tmp.pinType);
                    }
                    //add
                    foreach (AnchorData anchor in responseanchor)
                    {
                        bool addyotei = true;
                        foreach (AnchorData already in naiteki)
                        {
                            if (already.pin_uuid.Equals(anchor.pin_uuid))
                            {
                                addyotei = false;
                            }
                        }

                        if (addyotei)
                        {
                            naiteki.Add(anchor);
                            
                            
                        }

                    }

                    foreach (AnchorData anchor in naiteki)
                    {
                        bool deleteyotei = true;
                        foreach (AnchorData already in responseanchor)
                        {
                            if (already.pin_uuid.Equals(anchor.pin_uuid))
                            {
                                deleteyotei = false;
                            }
                        }

                        if (deleteyotei)
                        {
                            anchor.anchor.enabled= false;
                            Destroy(anchor.pinprefab);
                            naiteki.Remove(anchor);


                        }

                    }

                }
                else
                {
                    // エラー処理
                    string error = arr[1];
                    error_message.text = error;
                    Debug.Log("error:" + error);
                    // SceneManager.LoadScene("RoomListScene");
                }




                arr = request2.downloadHandler.text.Split(',');
                // True or False を judge に格納
                judge = arr[0];


                if (judge == "True")
                {

                    //“True,リアクションの数,reaction1を発したユーザー名,reaction1の内容(okなど),reaction1の対象(pinuuid),reaction2を発したユーザー名,reaction2の内容(okなど),reaction2の対象(pinuuid),......
                    //前回ポーリングから１秒以内に誰もリアクションしなかった場合、



                    int anchornum = int.Parse(arr[1]);
                    Debug.Log("True,response" + anchornum);
                    if (anchornum == 0) continue;
                    //List<Reac> responseanchor = new List<AnchorData>();
                    for (int i = 0; i < anchornum; i++)
                    {
                        ReactionData tmp = new ReactionData();
                        tmp.user_name = arr[1 + 1 + i * 3];
                        tmp.pin_uuid = arr[2 + 1 + i * 3];
                        tmp.reactionType = (ReactionType)Enum.Parse(typeof(ReactionType), arr[2 + i * 3]);
                        tmp.spawned = false;
                        //responseanchor.Add(tmp);
                        //naiteki.Add(tmp);
                        //Debug.Log(tmp.);
                    }
                }


                }
            catch
            {
                // エラー処理
                string error = "invalid return value";
                //error_message.text = error;
                Debug.Log("error:" + error);
            }


        }
    }


    [System.Obsolete]
    IEnumerator addpin(double latitude,double longitude,double altitude,double houkou,double kyori,int pintypeid)
    {
        var earthTrackingState = EarthManager.EarthTrackingState;
        if (earthTrackingState != TrackingState.Tracking)//位置情報が取得できなかったら
        {
            error_message.text = "not enough GPS accuracy";
            //yield break;
        }
        
        var data = new PinAddData();
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        data.user_uuid = useruuid;
        Vector2d vector2= calcdimention(latitude,longitude,houkou, (int)kyori);
        data.latitude = vector2.x.ToString("f16");
        data.longuitude = vector2.y.ToString("f16");
        data.altitude = altitude.ToString();
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

    public void removeallanchor()
    {
        foreach(AnchorData anchor in naiteki)
        {
            
            anchor.anchor.enabled = false;
            naiteki.Remove(anchor);
        }
    }

    public void OnClickJoinButton()
    {
        // uuidロード
        var useruuid = PlayerPrefs.GetString("Useruuid", "Useruuid is none");
        Debug.Log("UUID:" + useruuid);
        SceneManager.LoadScene("MemberListScene");
    }


    // Update is called once per frame
    void Update()
    {
        if(EarthManager.EarthTrackingState == TrackingState.Tracking)
        {
            foreach (AnchorData anchor in naiteki)
            {
                if (anchor.spawned == false)
                {
                    Quaternion quaternion =
                   Quaternion.AngleAxis(180f - (float)0, UnityEngine.Vector3.up);
                     var tmp=  AnchorManager.AddAnchor(anchor.latitude,anchor.longitude, anchor.altitude, quaternion);
                    //var a = GetComponent<ARGeospatialAnchor>();
                    if (tmp != null)
                    {
                        var pinPrefab = Instantiate(PinPrefab, tmp.transform);
                        anchor.pinprefab= pinPrefab;
                        anchor.anchor = tmp;
                        var pinscript = anchor.pinprefab.GetComponent<Pinscript>();
                        if (pinscript != null)
                        {
                            pinscript.Setpin_uuid(anchor.pin_uuid);
                            pinscript.Setuser_name(anchor.user_name);
                            pinscript.Setpintype(anchor.pinType);
                            pinscript.setup();

                            error_message.text = "add pinscript setup";
                        }
                        else
                        {
                            error_message.text = "error pinscript error";
                        }
                        anchor.spawned = true;
                    }
                    //a.
                    
                    //pinscript.set
                    
                }
            }
        }

        //Debug.Log(zerocount);
        if (joystick.Direction== Vector2.zero) {
            if(counting) zerocount++;

            if (zerocount >= 10)
            {
                zerocount= 0;
                counting = false;
                circlemask.color= new Color(0,0,0,0);
                logocircle.color = new Color(0, 0, 0, 0);

                if (lastDirection.magnitude > 0.6)
                {
                    lastDirection = Vector2.zero;
                    PushPinButton(lastselectindex);
                    return;
                }
                else
                {
                    lastDirection = Vector2.zero;
                    PushPinButton(0);
                    return;
                }

            }
            else
            {
                return;
            }
            return;
        }
        counting = true;
        
        if (joystick.Direction.magnitude>0.6) {
            zerocount = 0;
            lastDirection = joystick.Direction;
            kurukurucount++;
            circlemask.color = new Color(0, 0, 0, 0.5f);
            logocircle.color = new Color(255, 255, 255, 1f);
        }
        var selectradius = Mathf.Atan2( joystick.Direction.x,joystick.Direction.y) * Mathf.Rad2Deg + 22.5;
        //Debug.Log(selectradius.ToString());
        int selectindex = (int)((Math.Floor(selectradius / 45) + 8) % 8);
        Debug.Log(selectindex);
        if(lastselectindex!=selectindex && joystick.Direction.magnitude > 0.6) audioSource.PlayOneShot(kurukuru);
        if(joystick.Direction.magnitude > 0.6) lastselectindex= selectindex;
        circlemask.transform.rotation= Quaternion.Euler(0,0, -45 * selectindex + 22.5f);
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


    

    private double ToRadian(double angle)
    {
        return (double)(angle * Math.PI / 180);
    }

    private double ToDegree(double radian)
    {
        return (double)(radian * 180 / Math.PI);
    }


    public Vector2d calcdimention(double latitude,double longitude,double houkou,int distance)
    {
        double a = 6378137.0;//長軸半径
        double f = 1 / 298.257223563;//扁平率
        double b = (1 - f) * a;
        double c1 = ToRadian(latitude);
        double c2= ToRadian(longitude);
        double c3= ToRadian(houkou);
        double sina1= Math.Sin(c3);
        double cosa1= Math.Cos(c3);
        // 更成緯度(補助球上の緯度)
        double U1 = Math.Atan((1 - f) * Math.Tan(c1));
        double sinU1=Math.Sin(U1);
        double cosU1 = Math.Cos(U1);
        double tanU1 = Math.Tan(U1);
        double a1 = Math.Atan2(tanU1, cosa1);
        double sina = cosU1 * sina1;
        double cos2a = 1 - sina * sina;
        double u2 = cos2a * (a * a - b * b) / (b * b);
        double A = 1 + u2 / 12384 * (4096 + u2 * (-768 + u2 * (320 - 175 * u2)));
        double B = u2 / 1024 * (256 + u2 * (-128 + u2 * (74 - 47 * u2)));

        double alpha = distance / (b * A);

        double cos2σm=0 ;
        double sinσ=0;
        double cosσ =0;
        double Δσ=0;
        double σʹ=0;

        for (int i = 0; i < 1000; i++)
        {
            cos2σm = Math.Cos(2 * a1 + alpha);
            sinσ = Math.Sin(alpha);
            cosσ = Math.Cos(alpha);
            Δσ = B * sinσ * (cos2σm + B / 4 * (cosσ * (-1 + 2 * cos2σm * cos2σm) - B / 6 * cos2σm * (-3 + 4 * sinσ * sinσ) * (-3 + 4 * cos2σm * cos2σm)));
            σʹ = alpha;
            alpha = distance / (b * A) + Δσ;
            if (Math.Abs(alpha - σʹ) <= 1e-12) { 
            break;
            }
        }

            double x = sinU1 * sinσ - cosU1 * cosσ * cosa1;
            double φ2 = Math.Atan2(sinU1 * cosσ + cosU1 * sinσ * cosa1, (1 - f) * Math.Sqrt(sina * sina  + x *x));
            double λ = Math.Atan2(sinσ* sina1, cosU1* cosσ - sinU1* sinσ * cosa1);
            double C = f / 16 * cos2a* (4 + f* (4 - 3 * cos2a));
            double L = λ - (1 - C) * f* sina * (alpha + C* sinσ * (cos2σm + C* cosσ * (-1 + 2 * cos2σm* cos2σm)));
            double λ2 = L + c2;

            double α2 = Math.Atan2(sina, -x) + Math.PI;
        return new Vector2d(ToDegree(φ2), ToDegree(λ2));

        }

    [Obsolete]
    public void PushPinButton(int index)
    {
        Debug.Log("index" + index);
        var latitude = EarthManager.CameraGeospatialPose.Latitude;
        var altitude = EarthManager.CameraGeospatialPose.Altitude;
        var longitude = EarthManager.CameraGeospatialPose.Longitude;
        var kyori = (int)(slider.value * 300);
        Debug.Log(kyori.ToString() + "kyori");
        double hougaku = EarthManager.CameraGeospatialPose.Heading;
        StartCoroutine(addpin(latitude, longitude, altitude, hougaku, kyori, index));
        audioSource.PlayOneShot(audioClip);
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
