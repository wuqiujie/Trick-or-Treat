using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[RequireComponent(typeof(Rigidbody))]
public abstract class Ghost : MonoBehaviour
{
    public bool CanInsoup = false;//if this ghost can disappear in the magic soup;
    public bool isReDirection = true;//when this is true,get a new direction and target position;
    public bool canMove = true; //the ghost can move;
    public bool isCatchTheKid = false; //the ghost who catch the kid will make this become true;

    public float speed = 0.5f;
    public float reDirectionTime = 0.1f;
    public float minDisWithTargetPos = 0.1f; //seen it as reach the point when the disance lower than this;
    public float minDisWithObstacle = 0.2f;
    public float minDisWithChild = 0.4f;
    public float speedMul = 2;//杀戮模式的速度

    public string findGridsName = "SkyNode"; 

    public ChildMove child;
    public Rigidbody rigidbody;
    public LayerMask ignoreGhost;
    public GameManager gm;
    //public Transform portal;


    public Vector3 targetPos;
    public bool followPath = true;//true时采用寻路移动，每次移动到寻路位置的终点，接着找新的路径，FALSE则直接追小孩
    public float chasingZoom = 0.4f;

    //储存独立网格
    public GhostNode[,] GN;
    public GridInitial gridInitial;
    private List<GhostNode> openList = new List<GhostNode>();
    private HashSet<GhostNode> closeList = new HashSet<GhostNode>();
    private Stack<GhostNode> currentPath = new Stack<GhostNode>();
    public virtual void Initialization()
    {
        child = GameObject.FindWithTag("Child").GetComponent<ChildMove>();
        rigidbody = this.GetComponent<Rigidbody>();
        gm = GameObject.Find("GameManager").GetComponent<GameManager>();
        targetPos = this.transform.position;
        //portal = GameObject.FindWithTag("Portal").GetComponent<Transform>();
        gridInitial = GameObject.Find(findGridsName).GetComponent<GridInitial>();
        GetAllGrids();
        //print(GN.Length);

    }

    /// <summary>
    /// 每个鬼独立的网格，共用一套网格对象
    /// </summary>
    public class GhostNode
    {
        public Vector3 grid = Vector3.zero;
        public GhostNode parents = null;

        public int gridX = 0;
        public int gridY = 0;
        public bool canWalk = true;
        public float gCost;
        public float hCost;
        public float FCost
        {
            get { return gCost + hCost; }
        }





    }



    /// <summary>
    /// a function that find kids passpath and make sure there are no obstacle on on the way 
    /// </summary>
    public virtual void FindPath()
    {

        GhostNode startN = FindStartAndEnd(rigidbody.transform.position);
        GhostNode endN = FindStartAndEnd(child.transform.position);
        //print(rigidbody.transform.position);
        //print(child.transform.position);
        print("开始节点"+startN.gridX+","+startN.gridY);
        print("结束节点"+endN.gridX + "," + endN.gridY);
        AStar(startN, endN);
        //print("打印目标列表");
        if (currentPath.Count > 0)
        {
            targetPos = currentPath.Pop().grid;
            isReDirection = false;
        }
        else
        {
            targetPos = this.transform.position;
            isReDirection = false;
        }

    }

    /// <summary>
    /// 找到起始点和终点
    /// </summary>
    /// <param name="p"></param>
    /// <returns></returns>
    GhostNode FindStartAndEnd(Vector3 p)
    {
        float minD = Vector3.Distance(GN[0, 0].grid, p);
        GhostNode NearNode = GN[0, 0];

        for (int i = 0; i < gridInitial.gridCountX; i++)
        {
            for (int j = 0; j < gridInitial.gridCountY; j++)
            {
                if (Vector3.Distance(GN[i, j].grid, p) < minD)
                {
                    NearNode = GN[i, j];
                    minD = Vector3.Distance(GN[i, j].grid, p);
                    //print("最近节点" + NearNode);
                }

            }
        }
        return NearNode;
    }


    public virtual void Move()
    {
        if (!isCatchTheKid)
        {
            if (followPath)
            {
                if (isReDirection || targetPos == null)
                {
                    //GetAllGrids();
                    FindPath();
                }
                else if (!isReDirection && targetPos != null)
                {
                    //移动
                    Vector3 dir = targetPos - this.transform.position;
                    dir.Normalize();
                    if (dir != Vector3.zero && Vector3.Distance(targetPos, this.transform.position) >= minDisWithTargetPos)
                    {
                        rigidbody.MovePosition(rigidbody.transform.position + dir * speed * Time.deltaTime);
                    }
                    //检测是否抵达目标点
                    if (Vector3.Distance(targetPos, this.transform.position) < minDisWithTargetPos)
                    {
                        isReDirection = true;
                    }
                    //检测现在与孩童的距离，
                    if (Vector3.Distance(targetPos, child.transform.position) < minDisWithChild)
                    {
                        followPath = false;//进入猎杀模式
                    }
                }

            }
            else if (!followPath)
            {
                print("进入追逐模式");
                Vector3 dir = child.transform.position - this.transform.position;
                dir.Normalize();
                if (dir != Vector3.zero)
                {
                    rigidbody.MovePosition(rigidbody.transform.position + dir * speed * Time.deltaTime * speedMul);
                }
                if (Vector3.Distance(targetPos, child.transform.position) >= minDisWithChild)
                {
                    followPath = true;//退出猎杀模式
                    isReDirection = true;
                }
            }

        }
        //else if (isCatchTheKid)
        //{
        //    if (!CanInsoup)
        //    {
        //        //抓人模式
        //        GoToPortal();
        //    }

        //}
    }

    ////抓到人后送到传送门
    //private void GoToPortal()
    //{
    //    GhostNode startN = FindStartAndEnd(rigidbody.transform.position);
    //    GhostNode endN = FindStartAndEnd(portal.position);
    //    AStar(startN, endN);
    //    if (currentPath.Count > 0)
    //    {
    //        targetPos = currentPath.Pop().grid;
    //        isReDirection = false;
    //    }
    //    else
    //    {
    //        targetPos = this.transform.position;
    //        isReDirection = false;
    //    }
    //    //移动
    //    Vector3 dir = targetPos - this.transform.position;
    //    dir.Normalize();
    //    if (dir != Vector3.zero && Vector3.Distance(targetPos, this.transform.position) >= minDisWithTargetPos)
    //    {
    //        rigidbody.MovePosition(rigidbody.transform.position + dir * speed * Time.deltaTime);
    //    }
    //}


    //这个暂时无bug

    /// <summary>
    /// 根据生成的grid管理器，获取网格
    /// </summary>
    private void GetAllGrids()
    {
        GN = new GhostNode[gridInitial.gridCountX, gridInitial.gridCountY];

        for (int i = 0; i < gridInitial.gridCountX; i++)
        {
            for (int j = 0; j < gridInitial.gridCountY; j++)
            {
                GN[i, j] = new GhostNode();
                Transform n = gridInitial.Grids[i, j].GetComponent<Transform>();
                //print(n.position);
                GN[i, j].grid = n.position;
                GN[i, j].gridX = i;
                GN[i, j].gridY = j;
                GN[i, j].canWalk = gridInitial.canWalk[i, j];//这个有问题
                //print(i + "," + j + "是否能走" + GN[i, j].canWalk);

                //print("看看赋值成功没有");
                //print(GN[i, j].grid);
            }
        }
    }


    //暂时无bug
    /// <summary>
    /// 获取相邻网格
    /// </summary>
    /// <param name="gn"></param>
    /// <returns></returns>
    private List<GhostNode> getNeighborGrids(GhostNode gn)
    {
        List<GhostNode> neighborList = new List<GhostNode>();
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (i == 0 && j == 0)
                {
                    continue;
                }
                int tempX = gn.gridX + i;
                int tempY = gn.gridY + j;
                if (tempX < gridInitial.gridCountX && tempX > 0 && tempY > 0 && tempY < gridInitial.gridCountY)
                {
                    neighborList.Add(GN[tempX, tempY]);
                }
            }
        }
        return neighborList;
    }

    //暂时无bug
    /// <summary>
    ///Astar algorithm 
    /// </summary>
    public void AStar(GhostNode startNode, GhostNode endNode)
    {


        openList.Clear();
        closeList.Clear();
        openList.Add(startNode);
        while (openList.Count > 0)
        {
            //第一步，移出openlist
            GhostNode currentNode = openList[0];
            for (int i = 0; i < openList.Count; i++)
            {
                GhostNode g = openList[i];
                if (g.FCost < currentNode.FCost || (g.FCost == currentNode.FCost && g.hCost < currentNode.hCost))
                {
                    currentNode = g;
                }
            }
            openList.Remove(currentNode);
            closeList.Add(currentNode);

            if (currentNode == endNode)
            {
                GeneratePath(startNode, endNode);
                return;
            }
            foreach (var node in getNeighborGrids(currentNode))
            {
                // 如果节点不可通过或者已在关闭列表中，跳出
                if (!node.canWalk || closeList.Contains(node))
                {
                    continue;
                }
                node.gCost = GetDistanceNodes(node, startNode);
                node.hCost = GetDistanceNodes(node, endNode);
                float gCost = currentNode.gCost + GetDistanceNodes(currentNode, node);
                // 如果新路径到相邻点的距离更短 或者不在开启列表中
                if (gCost < node.gCost || !openList.Contains(node))
                {
                    // 更新相邻点的F，G，H
                    node.gCost = gCost;
                    node.hCost = GetDistanceNodes(node, endNode);
                    // 设置相邻点的父节点为当前节点
                    //print("设置父节点");
                    //print(currentNode.grid);
                    node.parents = currentNode;
                    // 如果不在开启列表中，加入到开启列表中
                    if (!openList.Contains(node))
                    {
                        openList.Add(node);
                    }
                }
            }
        }

    }

    //暂时无bug
    /// <summary>
    /// 计算G,H值
    /// </summary>
    private float GetDistanceNodes(GhostNode cn, GhostNode n)
    {
        float dis = Vector3.Distance(cn.grid, n.grid);
        return dis;
    }
    
    Stack<GhostNode> path = new Stack<GhostNode>();
    /// <summary>
    /// 生成已规划路径
    /// </summary>
    /// <param name="ghostNode"></param>
    /// <param name="endNode"></param>
    public void GeneratePath(GhostNode startNode, GhostNode endNode)
    {
        path.Clear();
        GhostNode node = endNode;
        while (node.parents != startNode)
        {
            path.Push(node);
            node = node.parents;
        }

        currentPath = path;


    }

    public virtual void TouchKid(Collision collision)
    {
        if (collision.transform.tag == "Child")
        {
            isCatchTheKid = true;
            child.beCaught = true;
           
            gm.ChildWasCaught();
            rigidbody.useGravity = false;
        }
    }



    public virtual void BeCaught()
    {
        CanInsoup = true;
        isCatchTheKid = false;
        child.beCaught = false;
    }
    public virtual void loss()
    {
        CanInsoup = false;
    }
}
