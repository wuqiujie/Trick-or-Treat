using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridInitial : MonoBehaviour
{
    public GameObject grid;//prefab
    public GameObject[,] Grids;
    public bool[,] canWalk;
    public Vector2 gridSize;//scene size
    public float gridRadius =1;//方格的一个边长
    public int gridCountX;
    public int gridCountY;
    public LayerMask maskLayer;

    // Start is called before the first frame update
    void Start()
    {
        gridCountX = Mathf.RoundToInt(gridSize.x / gridRadius);
        gridCountY = Mathf.RoundToInt(gridSize.y / gridRadius);
        Grids = new GameObject[gridCountX, gridCountY];
        canWalk = new bool[gridCountX, gridCountY];
        CreatGrids();
    }

    void CreatGrids()
    {
        Vector3 StartPosition = transform.position;
        for (int i = 0; i < gridCountX; i++)
            for (int j = 0; j < gridCountY; j++)
            {
                Vector3 worldPos = new Vector3(StartPosition.x + i * gridRadius, StartPosition.y, StartPosition.z + j * gridRadius);
                GameObject go = Instantiate(grid, worldPos, Quaternion.identity);
                Grids[i, j] = go;
                go.transform.SetParent(this.transform);
                canWalk[i,j] = !Physics.CheckSphere(go.transform.position, gridRadius / 2, maskLayer);
                //print(Grids[i, j].GetComponent<Node>().position);
            }
    }

}
