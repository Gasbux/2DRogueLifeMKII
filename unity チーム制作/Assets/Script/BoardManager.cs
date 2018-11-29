//名前        : サトリオバグスラナング
//作成日      : 2018年11月15日
//内容        : Board Manager

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoardManager : MonoBehaviour
{
    //Count for minimum and maximum
    [SerializeField]
    public class Count
    {
        public int minimum;
        public int maximum;

        public Count(int min, int max)
        {
            minimum = min;
            maximum = max;
        }
    }

    //collums and rows for the board
    public int columns = 8;
    public int rows = 8;

    //random Wall count for every level reset
    public Count wallCount = new Count(5, 9);
    //random Food Count for every level reset
    public Count foodCount = new Count(1, 5);

    public GameObject exit;
    public GameObject[] floorTiles;
    public GameObject[] wallTiles;
    public GameObject[] foodTiles;
    public GameObject[] enemyTiles;
    public GameObject[] outerWallTiles;

    //
    private Transform boardHolder;

    //to track position on the board, so we can know is there an object or not on that position
    private List<Vector3> gridPositions = new List<Vector3>();

    //this is for the item,enemy,inner wall placement
    void InitialiseList()
    {
        gridPositions.Clear();

        for (int i = 1; i < columns - 1; i++)
        {
            for (int j = 1; j < rows - 1; j++)
            {
                gridPositions.Add(new Vector3(i, j, 0f));
            }
        }
    }

    //this is for outerwall and floor for the level
    void BoardSetup()
    {
        boardHolder = new GameObject("Board").transform;
        for (int i = -1; i < columns + 1; i++)
        {
            for (int j = -1; j < rows + 1; j++)
            {
                GameObject toInstantiate = floorTiles[Random.Range(0, floorTiles.Length)];
                if (i == -1 || i == columns || j == -1 || j == rows)
                {
                    toInstantiate = outerWallTiles[Random.Range(0, outerWallTiles.Length)];
                }
                GameObject instance = Instantiate(toInstantiate, new Vector3(i, j, 0f), Quaternion.identity) as GameObject;
                instance.transform.SetParent(boardHolder);
            }
        }
    }

    Vector3 RandomPosition()
    {
        //deciding the position of the grid
        int randomIndex = Random.Range(0, gridPositions.Count);
        //setting the position
        Vector3 randomPostion = gridPositions[randomIndex];
        //to make sure that there is only gameobject at that position
        gridPositions.RemoveAt(randomIndex);
        return randomPostion;
    }

    void LayoutObject(GameObject[] tileArray, int minimum, int maximum)
    {
        //to control how many item will appear in a level
        int objectCount = Random.Range(minimum, maximum + 1);

        for (int i = 0; i < objectCount; i++)
        {
            //setting up the position
            Vector3 randomPosition = RandomPosition();
            //which object
            GameObject tileChoice = tileArray[Random.Range(0, tileArray.Length)];
            //summoning it
            Instantiate(tileChoice, randomPosition, Quaternion.identity);
        }
    }

    public void SetupScene(int level)
    {
        BoardSetup();
        InitialiseList();
        LayoutObject(wallTiles, wallCount.minimum, wallCount.maximum);
        LayoutObject(foodTiles, foodCount.minimum, foodCount.maximum);
        int enemyCount = (int)Mathf.Log(level, 2f); // this will increase the enemy count every 2 level
        LayoutObject(enemyTiles, enemyCount, enemyCount);
        Instantiate(exit, new Vector3(columns - 1, rows - 1, 0f), Quaternion.identity);
    }
}
