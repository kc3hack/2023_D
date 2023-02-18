using System.Collections;
using System.Collections.Generic;
using System.Security.Policy;
using UnityEngine;


public class Pinscript : MonoBehaviour
{
    public GameObject camera;
    public GameObject plane;
    public string pin_uuid = "";
    public TextMesh textMesh;
    public Material[] materials=new Material[8];
    private string user_name = "";
    public MeshRenderer iconplane;
    private TextMesh reactiontext;
    private PinType pinType = PinType.go;

    // Start is called before the first frame update
    void Start()
    {
        camera = GameObject.Find("AR Camera");
        setup();
    }

    public void Setpintype(PinType pin)
    {
        this.pinType= pin;
    }

    public void Setuser_name(string user_name)
    {
        this.user_name = user_name;
    }

    public void Setpin_uuid(string pin_uuid)
    {
        this.pin_uuid = pin_uuid;
    }

    public void setup()
    {
        textMesh.text = user_name;
        var enumValue = pinType;
        var intValue = (int)enumValue;
        iconplane.material = materials[intValue];
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 p = camera.transform.position;
        //p.y = transform.position.y;
        transform.LookAt(p);
        float bairitu = (float)(Vector3.Distance(p, plane.transform.position) * 0.005);
        plane.transform.localScale =  Vector3.one * bairitu;
    }
}
