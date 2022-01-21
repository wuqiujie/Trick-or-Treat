using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GhostChasing : MonoBehaviour
{
    private ChildMove child;
    private Rigidbody rigidbody;
    public float reDirectionTime = 2;
    public float speed = 2;
    public bool successfulCatchtheKid = false;
    private bool reDir = true;
    public Vector3 targetDir = Vector3.zero;
    public float disWithTarget = 0.1f;
    public LayerMask ignoreGhost;
    public bool canMove = true;
    private GameManager gm;


    public AudioSource audioSource;
    public AudioClip GhostCatchKid;

    private bool isNeedANewDirection = true;
    public float ghostWithObstacle = 0.7f;
  
    public bool CanInSoup = false;

    private void Awake()
    {
        child = GameObject.FindWithTag("Child").GetComponent<ChildMove>();
        rigidbody = this.GetComponent<Rigidbody>();
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        targetDir = this.transform.position;
    }

    private void FixedUpdate()
    {

        if (canMove)
        {
            ChasingKid();
        }
        if (successfulCatchtheKid)
        {
            CatchChild();
        }
    }

    void FindDir()
    {
        for (int i = child.PassRoad.Count - 1; i >= 0; i--)
        {
            Vector3 dir = child.PassRoad[i] - rigidbody.transform.position;
            RaycastHit hit;
            
            if (Physics.Raycast(rigidbody.transform.position, dir, out hit, Vector3.Distance(child.PassRoad[i], rigidbody.transform.position), ignoreGhost))
            {
                if (hit.transform.tag == "Child")
                {
                    targetDir = child.PassRoad[i];
                    break;
                }
            }
            else
            {
                targetDir = child.PassRoad[i];
                break;
            }
        }
    }
    void ChasingKid()
    {
        if (reDir && !successfulCatchtheKid)
        {
            FindDir();
            reDir = false;

        }
        else if (!reDir && !successfulCatchtheKid)
        {
            Vector3 dir = Vector3.zero;
            if (Vector3.Distance(targetDir, rigidbody.transform.position) > disWithTarget)
            {
                dir = targetDir - rigidbody.transform.position;
                dir = dir.normalized;
            }

            rigidbody.MovePosition(rigidbody.transform.position + dir * Time.deltaTime * speed);
            StartCoroutine(RedirCoolDown());
        }
    }

    IEnumerator RedirCoolDown()
    {
        yield return new WaitForSeconds(reDirectionTime);
        reDir = true;
    }



    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.tag == "Child")
        {
            successfulCatchtheKid = true;
            child.beCaught = true;
            child.GetComponent<AudioSource>().Stop();
            gm.ChildWasCaught();
             PlaySound(GhostCatchKid);
           
        }
    }

    void CatchChild()
    {
        //print("catch kid");
    }

    public void BeManipulate()
    {
        CanInSoup = true;

    }

    public void NotManipulate()
    {
        CanInSoup = false;
    }
    public void PlaySound(AudioClip audioClip)
    {
        audioSource.PlayOneShot(audioClip);
    }

}
