using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class IconScript : MonoBehaviour
{
    // Start is called before the first frame update

    public GameManager gameManager;
    public Pinscript parentObject;
    private bool panel4open = false;
    public GameObject ok;
    public GameObject no;
    public GameObject unable;
    public GameObject stop;
    void Start()
    {
        parentObject = this.GetComponentInParent<Pinscript>();
        gameManager = GameObject.Find("gamamaster").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public string getparentuuid() {
        return parentObject.pin_uuid;
    }

    public void tap(string type)
    {
        if (type.Equals("open")){
            panel4open= true;
            Debug.Log("open");
        }
        else
        {
            panel4open= false;
            Debug.Log("close");
            gameManager.addreactionfrombutton(parentObject.pin_uuid, type);
        }
        if (panel4open)
        {
            ok.SetActive(true);
            no.SetActive(true);
            unable.SetActive(true);
            stop.SetActive(true);
        }
        else
        {
            ok.SetActive(false);
            no.SetActive(false);
            unable.SetActive(false);
            stop.SetActive(false);
        }
        if (!type.Equals("open"))
        {
            gameManager.addreactionfrombutton(parentObject.pin_uuid, type);
        }
    }








}
