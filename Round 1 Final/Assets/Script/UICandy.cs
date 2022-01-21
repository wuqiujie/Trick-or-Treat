using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class UICandy : MonoBehaviour
{
    public Image mask;
    private float originalSize;

    public static UICandy instance { get; private set; }

    public bool hasTask;
    public int fixedNum;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        originalSize = mask.rectTransform.rect.width;
    }


    /// <param name="fillPercent">填充百分比</param>
    public void SetValue(float fillPercent)
    {
        mask.rectTransform.SetSizeWithCurrentAnchors(RectTransform.
            Axis.Horizontal, originalSize * fillPercent);
    }
}
