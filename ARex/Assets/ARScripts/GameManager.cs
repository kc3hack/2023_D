using Google.XR.ARCoreExtensions;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class GameManager : MonoBehaviour
{
    public AREarthManager EarthManager;
    public ARAnchorManager AnchorManager;
    public List<Marker> markers = new List<Marker>();//マーカー(pin)の場所
    // Start is called before the first frame update
    void Start()
    {
        
    }

    [System.Obsolete]
    IEnumerator GetData()
    {
        UnityWebRequest req = UnityWebRequest.Get("https://itoho.wjg.jp/test/arpinpolling/");
        yield return req.SendWebRequest();

        if (req.isNetworkError || req.isHttpError)
        {
            Debug.Log(req.error);
        }
        else if (req.responseCode == 200)
        {
            Debug.Log(req.downloadHandler.text);
            var tmp = req.downloadHandler.text;
            var lines = tmp.Split(",");
            foreach (var line in lines)
            {
                var contents = line.Split(",");
                //var mark=new Marker("")
                //var mark = new Marker(int.Parse(contents[0]),new GeospatialPose_ double.Parse(contents[1]), double.Parse(contents[2]), double.Parse(contents[3]));
                //markers.Add(mark);

                Debug.Log(line);

            }

        }
    }


    // Update is called once per frame
    void Update()
    {
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
