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
//���Ͼ���
//�������ֻ���ж��������û�У������ܷ����±�
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
//�����ṹ�巵�س�Ҫ�����ݵ�����
// struct point
// {
//   int x;
//   int y;
// };
// struct point find_num(int arr[3][3],int r,int c,int k)
// {
//   int x = 0;
//   int y = c - 1;
//   struct point p = {-1,-1};
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
//       p.x = x;
//       p.y = y;
//       return p;
//     }
//   }
//   return p;
// }
//����ָ��ķ�ʽ�ı����������
int find_num(int arr[3][3],int* px,int* py,int k)
{
  int x = 0;
  int y = *py - 1;
  while (x<=*px - 1 && y>=0)
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
      *px = x;
      *py = y;
      return 1;
    }
  }
  *px = -1;
  *py = -1;
  return 0;
}
int main()
{
  int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  int k = 0;
  scanf("%d",&k);
  int x = 3;
  int y = 3;
  int ret = find_num(arr,&x,&y,k);
  if(ret==1)
  printf("%d %d\n",x,y);
  else
    printf("�Ҳ���\n");
  return 0;
}