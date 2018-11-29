using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public float levelStartDelay = 2f;
    public float turnDelay = 0.1f;
    public BoardManager boardScript;
    public static GameManager instace = null;
    public int playerFoodPoint = 100;
    [HideInInspector]
    public bool playerTurn = true;

    private Text levelText;
    private GameObject levelImage;
    private int level = 1;
    private List<Enemy> enemies;
    private bool enemiesMoving;
    private bool doingSetup;

	// Use this for initialization
	void Awake ()
    {
        //if there is no Game Manager
        if(instace == null)
        {
            //this will be the game Manager
            instace = this;
        }
        //if not, desrtoy it
        else if(instace != this)
        {
            Destroy(gameObject);
        }
        //don't destroy this
        DontDestroyOnLoad(gameObject);
        enemies = new List<Enemy>();
        boardScript = GetComponent<BoardManager>();
        InitGame();

	}
    //This is called each time a scene is loaded.
    private void OnLevelWasLoaded(/*int level*/)
    {
        level++;
        InitGame();
    }

    public void GameOver()
    {
        levelText.text = "After " + level + " Days,You Starved.";
        levelImage.SetActive(true);
        enabled = false;
    }
    void InitGame()
    {
        doingSetup = true;
        levelImage = GameObject.Find("LevelImage");
        levelText = GameObject.Find("LevelText").GetComponent<Text>();
        levelText.text = "Day " + level;
        levelImage.SetActive(true);
        Invoke("HideLevelImage", levelStartDelay);
        enemies.Clear();
        boardScript.SetupScene(level);
    }

    private void HideLevelImage()
    {
        levelImage.SetActive(false);
        doingSetup = false;
    }
	
	// Update is called once per frame
	void Update ()
    {
		if(playerTurn || enemiesMoving || doingSetup)
        {
            return;
        }

        StartCoroutine(MoveEnemies());
	}

    public void AddEnemyToList(Enemy script)
    {
        enemies.Add(script);
    }

    IEnumerator MoveEnemies()
    {
        enemiesMoving = true;
        yield return new WaitForSeconds(turnDelay);
        if (enemies.Count==0)
        {
            yield return new WaitForSeconds(turnDelay);
        }

        for (int i = 0; i < enemies.Count; i++)
        {
            if (enemies[i] != null)
            {
                enemies[i].MoveEnemy();
                yield return new WaitForSeconds(enemies[i].moveTime);
            }
            else if(enemies[i] == null)
            {
                enemies.RemoveAt(i);
            }
        }

        playerTurn = true;
        enemiesMoving = false;
    }
}
