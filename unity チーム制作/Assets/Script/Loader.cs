using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Loader : MonoBehaviour
{

    public GameManager gameManager;
    // Use this for initialization
    void Awake()
    {
        if (GameManager.instace == null)
        {
            Instantiate(gameManager);
        }
    }
}
