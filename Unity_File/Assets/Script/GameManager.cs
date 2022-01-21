using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class GameManager : MonoBehaviour
{
    public float generateCoolDown = 5f;
    private float timer = 0f;
    private bool isGenerate = false;

    //储存GroundGhost相关的阶段
    public List<int> GroundGhostNumber = new List<int>();//地鬼有多少波,每波多少怪
    public GameObject Groundghost;//预制体
    public Transform groundGhostsT;//储存地鬼的生成点位
    //储存SkyGhost相关的阶段
    public List<int> SkyGhostNumber = new List<int>();//飞鬼有多少波,每波多少怪
    public GameObject Skyghost;//预制体
    public Transform SkyGhostsT;//储存飞鬼的生成点位
    public Soup soup;//汤脚本

    public int deadGhostCount = 0;//Boss鬼召唤的条件,死亡8个前置鬼
    public GameObject Bossghost;//预制体
    public Transform BossGhostsT;//储存boss鬼的生成点位
   

    public int stage = 0;//游戏阶段0:地鬼,1:飞鬼,2:boss鬼
    public float generateRangeX = 0.5f;
    public float generateRangeZ = 0.5f;
    
    private bool gameStop = false;
    public bool Win = false;

    

    //public Text lose_text;
    // Start is called before the first frame update
    void Start()
    {
        

        foreach (int i in GroundGhostNumber)
        {
            deadGhostCount += i;
        }
        foreach (int i in SkyGhostNumber)
        {
            deadGhostCount += i;
        }
        int num = GroundGhostNumber[0];
        GroundGhostNumber.RemoveAt(0);
        for (int j = 0; j < num; j++)
        {
            GameObject go = Instantiate(Groundghost, groundGhostsT);
            go.transform.localPosition = Vector3.zero + new Vector3(Random.RandomRange(generateRangeX, -generateRangeX), 0, Random.RandomRange(generateRangeZ, -generateRangeZ));
        }
        timer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(!gameStop)
        {
            if (stage == 0)
            {
                GenerateGhost(GroundGhostNumber, Groundghost, groundGhostsT);
                if (GroundGhostNumber.Count == 0) { stage++; }
            }
            else if (stage == 1)
            {
                GenerateGhost(SkyGhostNumber, Skyghost, SkyGhostsT);
                if (SkyGhostNumber.Count == 0) { stage++; }
            }
            else if (stage == 2 && soup.GhostNum == deadGhostCount)
            {
                GameObject go = Instantiate(Bossghost, BossGhostsT);
                go.transform.localPosition = Vector3.zero;
                stage++;
            }
            else if(stage == 3 && soup.GhostNum == deadGhostCount + 1)
            {
                print("游戏胜利!!!");//这里写跳转胜利场景吧!
                gameStop = true;
                Win = true;


            }
        }
    }

    public void GenerateGhost(List<int> ghostNumber, GameObject ghostPrefab, Transform ghostStartPoint)
    {
        if(ghostNumber.Count != 0)
        {
            if (timer <= generateCoolDown)
            {
                timer += Time.deltaTime;
            }
            else
            {
                int num = ghostNumber[0];
                ghostNumber.RemoveAt(0);
                for (int j = 0; j < num; j++)
                {
                    GameObject go = Instantiate(ghostPrefab, ghostStartPoint);
                    go.transform.localPosition = Vector3.zero + new Vector3(Random.RandomRange(generateRangeX, -generateRangeX), 0, Random.RandomRange(generateRangeZ, -generateRangeZ));
                }
                timer = 0;

            }
        }
            
         
       
    }
    public void ChildWasCaught()
    {
        
        //停止所有鬼的行动
        GameObject[] ghosts = GameObject.FindGameObjectsWithTag("Ghost");
        foreach( GameObject g in ghosts)
        {
            g.GetComponent<Ghost>().canMove = false;
        }
        gameStop = true;
        //lose_text.color = new Color(255, 0, 0, 1);

    }
}
