#include<stdio.h>
/**
  ******************************************************************************
  * @file           : test_5_16.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/16
  ******************************************************************************
  */
//题目:输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
//输入包含三行，
// 第一行包含两个正整数n，m，角空格分隔。 n表示第二行第一个升序序列中数字的个
// 数，m表示第三行第二个升序序列中数字的个数。
// 第二行包含n个整数，用空格分隔。
// 第三行包含m个整数，用空格分隔。

//法一:用打印的方式来实现
// int main()
// {
//     int n = 0;
//     int m = 0;
//     scanf("%d %d",&n,&m);
//     int arr1[n];
//     int arr2[m];
//     int i = 0;
//     for (i = 0; i < n ;i++)
//     {
//         scanf("%d",&arr1[i]);
//     }
//     for (i = 0; i < m ;i++)
//     {
//         scanf("%d",&arr2[i]);
//     }
//     //进行合并
//     int j = 0;
//     int k = 0;
//     while (j < n && k <m)
//     {
//         if(arr1[j] < arr2[k])
//         {
//             printf("%d ",arr1[j]);
//             j++;
//         }
//         else
//         {
//             printf("%d ",arr2[k]);
//             k++;
//         }
//     }
//     //然后判断n先结束,还是m先结束
//     //m先结束,打印n剩下的
//     if(j < n)
//     {
//         //j不初始化,接着上述结果继续打印
//         for (;j < n ;j++)
//         {
//             printf("%d ",arr1[j]);
//         }
//     }
//     //n先结束,打印m剩下的
//     else
//     {
//         for (;k < m ;k++)
//         {
//             printf("%d ",arr2[k]);
//         }
//     }
//     return 0;
// }

//法二:用第三个数组来存储合并,最后打印
int main()
{
  int n = 0;
  int m = 0;
  scanf("%d %d",&n,&m);
  int arr1[n];
  int arr2[m];
  int arr3[n+m];
  int i = 0;
  for (i = 0; i < n ;i++)
  {
    scanf("%d",&arr1[i]);
  }
  for (i = 0; i < m ;i++)
  {
    scanf("%d",&arr2[i]);
  }
  //进行合并
  int j = 0;
  int k = 0;
  int r = 0;
  while (j < n && k <m)
  {
    if(arr1[j] < arr2[k])
    {
      arr3[r++] = arr1[j];
      j++;
    }
    else
    {
      arr3[r++] = arr2[k];
      k++;
    }
  }
  //然后判断n先结束,还是m先结束
  //m先结束,打印n剩下的
  if(j < n)
  {
    //j不初始化,接着上述结果继续打印
    for (;j < n ;j++)
    {
      arr3[r++] = arr1[j];
    }
  }
  //n先结束,打印m剩下的
  else
  {
    for (;k < m ;k++)
    {
      arr3[r++] = arr2[k];
    }
  }
  i = 0;
  for (i = 0; i < n + m;i++)
  {
    printf("%d ",arr3[i]);
  }
  return 0;
}