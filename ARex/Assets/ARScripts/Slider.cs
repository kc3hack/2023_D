using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Slider : MonoBehaviour
{
    private Scrollbar scrollbar;
    public TextMeshProUGUI metor;
    public int value;
    // Start is called before the first frame update
    void Start()
    {
        scrollbar= GetComponent<Scrollbar>();
    }

    // Update is called once per frame
    void Update()
    {
        metor.text = (scrollbar.value*300).ToString()+" m";
    }
}
