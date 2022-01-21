using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyContollor : MonoBehaviour
{
   
    public GameObject Candy;
    public bool hasCandy=false;
    
    public int maxCandyNum = 10;
    private int currentCandyNum;

    void Start()
    {
       
    }

    void Update()
    {
        
    }

    public void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Child")
        {
            AddCandy();
            UICandy.instance.SetValue(currentCandyNum / (float)maxCandyNum);
        }
    }
    public void AddCandy()
    {
        currentCandyNum = Mathf.Clamp(currentCandyNum + 1, 0, maxCandyNum);
       
    }




}
