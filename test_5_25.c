/**
  ******************************************************************************
  * @file           : test_5_25.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/25
  ******************************************************************************
  */

#include<stdio.h>
//杨氏矩阵
//这个函数只能判断这个数有没有，而不能返回下标
// int find_num(int arr[3][3],int r,int c,int k)
// {
//   int x = 0;
//   int y = c - 1;
//   while (x<=r - 1 && y>=0)
//   {
//     if(k < arr[x][y])
//     {
//       y--;
//     }
//     else if(k > arr[x][y])
//     {
//       x++;
//     }
//     else
//     {
//       return 1;
//     }
//   }
//   return 0;
// }
//依赖结构体返回出要找数据的坐标
struct point
{
  int x;
  int y;
};
struct point find_num(int arr[3][3],int r,int c,int k)
{
  int x = 0;
  int y = c - 1;
  struct point p = {-1,-1};
  while (x<=r - 1 && y>=0)
  {
    if(k < arr[x][y])
    {
      y--;
    }
    else if(k > arr[x][y])
    {
      x++;
    }
    else
    {
      p.x = x;
      p.y = y;
      return p;
    }
  }
  return p;
}
int main()
{
  int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  int k = 0;
  scanf("%d",&k);
  struct point ret = find_num(arr,3,3,k);
  printf("%d %d\n",ret.x,ret.y);
  return 0;
}