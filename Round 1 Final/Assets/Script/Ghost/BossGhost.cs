using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossGhost : Ghost
{
    // Start is called before the first frame update
    void Start()
    {
        findGridsName = "BossNode";
        Initialization();
    }

    // Update is called once per frame
    void Update()
    {
        if (canMove) { Move(); }
    }

    public void OnCollisionEnter(Collision collision)
    {
        if(collision.transform.tag == "House")
        {
            print("撞房子");
            Destroy(collision.gameObject);
           
            //shake plane

        }
        TouchKid(collision);
    }
    
}
