using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Soup : MonoBehaviour
{
    public AudioSource audioSource;
    public AudioClip GhostIntoSoup;
    public int GhostNum=0;
    public Animator soupAni;
    private Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        soupAni = GetComponentInParent<Animator>();
    }

   

    private void OnTriggerEnter(Collider other)
    {
       
        if (other.gameObject.tag == "Ghost" && other.GetComponent<Ghost>().CanInsoup == true)
        {
            soupAni.SetBool("GhostIn", true);
            Destroy(other.gameObject);
            PlaySound(GhostIntoSoup);
            GhostNum++;
            StartCoroutine(resetAni());
        }
    }

   IEnumerator resetAni()
    {
        yield return new WaitForSeconds(0.5f);
        soupAni.SetBool("GhostIn", false);
    }
    public void PlaySound(AudioClip audioClip)
    {
        audioSource.PlayOneShot(audioClip);
    }
}
