using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    private GraphicRaycaster _raycaster;
    PointerEventData pData;
    EventSystem eventSystem;

    public Transform selectionPoint;

    private static UIManager instance;
    public static UIManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<UIManager>();
            }
            return instance;
        }
        
    }

    // Start is called before the first frame update
    void Start()
    {
        _raycaster = GetComponent<GraphicRaycaster>();   
        eventSystem = GetComponent<EventSystem>();
        pData = new PointerEventData(eventSystem);
        pData.position = selectionPoint.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public bool OnEntered(GameObject button)
    {
        //Create a list of Raycast Results
        List<RaycastResult> results = new List<RaycastResult>();
     
        //Raycast using the Graphics Raycaster and mouse click position
        _raycaster.Raycast(pData, results);

        //For every result returned, output the name of the GameObject on the Canvas hit by the Ray
        foreach (RaycastResult result in results)
        {
            if (result.gameObject == button)
            {
                return true;
            }
        }
        return false;
    }
}
