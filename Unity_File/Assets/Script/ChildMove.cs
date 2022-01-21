using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChildMove : MonoBehaviour
{
    //space the child move around
    public float spacePointX1 = -5;
    public float spacePointX2 = 5;
    public float spacePointZ1 = -5;
    public float spacePointZ2 = 5;
    public float childDiswithTarget = 0.2f;
    public float childWithObstacle = 0.2f;
    public bool beCaught = false;
    //child move 
    public float speed = 3;
    private Rigidbody rigidbody;
    public  Vector3 randomDirection = Vector3.zero;
    public   bool isNeedANewDirection = true;
    private float DisWithGhost = 0;

    public List<Vector3> PassRoad = new List<Vector3>();


    //private Animator animator;

    public AudioSource audioSource;
    public AudioClip KidFootstep;

    private void Awake()
    {
        rigidbody = this.GetComponent<Rigidbody>();
       

    }
    
    private void FixedUpdate()
    {
        if (!beCaught) { CharacterMove(); }
        StartCoroutine(RecordPath());
    }

    IEnumerator RecordPath()
    {
        if (!beCaught)
        {
            yield return new WaitForSeconds(2f);
            PassRoad.Add(this.transform.position);
        }

    }
    
    private void CharacterMove()
    {
        if(isNeedANewDirection)
        {
            //child will get a new target position 
            randomDirection = new Vector3(Random.Range(spacePointX1, spacePointX2), 0, Random.Range(spacePointZ1, spacePointZ2));
            randomDirection += rigidbody.transform.position;
            isNeedANewDirection = false;
     
        }
        else if(!isNeedANewDirection)
        {
            
            float d = Vector3.Distance(rigidbody.transform.position, randomDirection);
           

            if (d<=childDiswithTarget)
            {
                isNeedANewDirection = true;
            }
            else
            {
                Vector3 dir = randomDirection - rigidbody.transform.position;
                
                dir = dir.normalized;
                if(dir == Vector3.zero)
                {
                    dir = Vector3.right;
                }
                
                RaycastHit hit;


               // Debug.DrawLine(this.transform.position, randomDirection);
                if (Physics.Raycast(rigidbody.transform.position, dir, out hit))
                {
                    
                    if(hit.transform.tag == "House" || hit.transform.tag == "Wall")
                    {
                        
                        if(Vector3.Distance(hit.point, rigidbody.transform.position)< childWithObstacle) 
                        {
                            
                            isNeedANewDirection = true;
                        }
                    }
                    if (hit.transform.tag == "Soup")
                    {

                        if (Vector3.Distance(hit.point, rigidbody.transform.position) < childWithObstacle)
                        {
                    
                            isNeedANewDirection = true;
                        }       
                    }
                }

                rigidbody.MovePosition(rigidbody.transform.position + dir * Time.deltaTime * speed);
                Vector3 move = rigidbody.transform.position + dir * Time.deltaTime * speed;
              
            }
        }
        
    }

 
  
}
