using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class Player : MovingObject
{
    public int wallDamage = 1;
    public int enemyDamage = 10;
    public int pointPerFood = 10;
    public int pointPerSoda = 20;
    public float restartLevelDelay = 1f;
    public Text foodText;
    public List<AudioClip> sounds;
    //public AudioClip moveSound1;
    //public AudioClip moveSound2;
    //public AudioClip eatSound1;
    //public AudioClip eatSound2;
    //public AudioClip drinkSound1;
    //public AudioClip drinkSound2;
    //public AudioClip gameOverSound;

    private Animator animator;
    private int food;
	// Use this for initialization
	protected override void Start ()
    {
        animator = GetComponent<Animator>();
        food = GameManager.instace.playerFoodPoint;
        foodText.text = "Food: " + food;
        base.Start();
	}

    private void OnDisable()
    {
        GameManager.instace.playerFoodPoint = food;
    }

    // Update is called once per frame
    void Update ()
    {
		if(!GameManager.instace.playerTurn)
        {
            return;
        }
        int horizontal = 0;
        int vertical = 0;
        horizontal = (int)Input.GetAxisRaw("Horizontal");
        vertical = (int)Input.GetAxisRaw("Vertical");
        if(horizontal !=0)
        {
            vertical = 0;
        }
        if(horizontal != 0 || vertical != 0)
        {
            AttemptMove<Wall>(horizontal, vertical);
            food++;
            AttemptMove<Enemy>(horizontal, vertical);
        }
	}
    protected override void AttemptMove<T>(int xDir, int yDir)
    {
        food--;
        foodText.text = "Food: " + food;
        base.AttemptMove<T>(xDir, yDir);

        RaycastHit2D hit;
        if(Move(xDir,yDir,out hit))
        {
            SoundManager.instance.RandomizeSfx(sounds[0], sounds[1]);
        }

        CheckIfGameOver();

        GameManager.instace.playerTurn = false;
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "Exit")
        {
            Invoke("Restart", restartLevelDelay);
            enabled = false;
        }
        else if (other.tag =="Food")
        {
            food += pointPerFood;
            foodText.text = "+" + pointPerFood + " Food:" + food;
            SoundManager.instance.RandomizeSfx(sounds[2], sounds[3]);
            other.gameObject.SetActive(false);
        }
        else if (other.tag == "Soda")
        {
            food += pointPerSoda;
            foodText.text = "+" + pointPerSoda + " Food:" + food;
            SoundManager.instance.RandomizeSfx(sounds[4], sounds[5]);
            other.gameObject.SetActive(false);
        }
    }
    protected override void OnCantMove<T>(T component)
    {
        if (typeof(T) == typeof(Wall))
        {
            Wall hitWall = component as Wall;
            hitWall.DamageWall(wallDamage);
            animator.SetTrigger("Player Attack");
        }
        if (typeof(T) == typeof(Enemy))
        {
            Enemy hitEnemy = component as Enemy;
            hitEnemy.Attacked(enemyDamage);
            animator.SetTrigger("Player Attack");
        }
    }


    private void Restart()
    {
        SceneManager.LoadScene(0);
    }
    public void LoseFood(int loss)
    {
        animator.SetTrigger("Player Damaged");
        food -= loss;
        foodText.text = "-" + loss + " Food:" + food;
        CheckIfGameOver();
    }
    private void CheckIfGameOver()
    {
        if(food <= 0)
        {
            SoundManager.instance.PlaySingle(sounds[6]);
            SoundManager.instance.musicSource.Stop();
            GameManager.instace.GameOver();
        }
    }
}
