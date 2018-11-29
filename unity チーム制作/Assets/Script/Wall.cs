using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wall : MonoBehaviour
{
    public Sprite dmgSprite;
    public int hp = 4;
    public AudioClip chop1;
    public AudioClip chop2;

    private SpriteRenderer spriteRenderer;

	// Use this for initialization
	void Start ()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
	}
    public void DamageWall(int loss)
    {
        SoundManager.instance.RandomizeSfx(chop1, chop2);
        spriteRenderer.sprite = dmgSprite;
        hp -= loss;
        if (hp <= 0)
        {
            gameObject.SetActive(false);
        }
    }
}
