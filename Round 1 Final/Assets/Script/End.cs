using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class End : MonoBehaviour
{

    public GameObject kid;
    public GameObject GM;

    // Update is called once per frame
    void Update()
    {
      
        if (kid.GetComponent<ChildMove>().beCaught == true)
        {
            StartCoroutine( Lose_End());
        }

        if(GM.GetComponent<GameManager>().Win == true)
        {
            StartCoroutine(Win_End());
        }
    }


    public IEnumerator Win_End()
    {
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene("Win");
    }

    public IEnumerator Lose_End()
    {
        yield return new WaitForSeconds(3f);
        SceneManager.LoadScene("Lose");
    }
}
