﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

public class ChangeScenewithButton : MonoBehaviour
{
    public void LoadScreen(string scenename)
    {
        SceneManager.LoadScene(scenename);
    }
    
}
