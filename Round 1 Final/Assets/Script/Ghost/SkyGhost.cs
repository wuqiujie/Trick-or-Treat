using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkyGhost : Ghost
{
    // Start is called before the first frame update
    void Start()
    {
       
        Initialization();
    }

    // Update is called once per frame
    void Update()
    {
        if (canMove) { Move(); }
    }

    private void OnCollisionEnter(Collision collision)
    {
        TouchKid(collision);
    }

}
