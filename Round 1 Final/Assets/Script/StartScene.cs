using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class StartScene : MonoBehaviour
{
    public GameObject StartButton;

    public GameObject StartBG;
    public VideoPlayer VideoPlayer;
    public bool isPlayerStarted = false;

    void Start()
    {
        StartButton.SetActive(false);
        StartBG.SetActive(false);
    }

     void Update()
    {
        if (isPlayerStarted == false && VideoPlayer.isPlaying == true)
        {
            // When the player is started, set this information
            isPlayerStarted = true;
        }
        if (isPlayerStarted == true && VideoPlayer.isPlaying == false)
        {
            // Wehen the player stopped playing, hide it
            VideoPlayer.gameObject.SetActive(false);
            StartButton.SetActive(true);
            StartBG.SetActive(true);
        }
       
    }


}
