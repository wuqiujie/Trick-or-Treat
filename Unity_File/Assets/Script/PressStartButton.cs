using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PressStartButton : MonoBehaviour
{
    // Start is called before the first frame update
    private void Start()
    {
        
    }
    private void Update()
    {
        
    }
    public void PressButton()
    {
 
        SceneManager.LoadScene("Main");
      
    }
}
