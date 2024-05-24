/**
  ******************************************************************************
  * @file           : test_5_24.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/24
  ******************************************************************************
  */
#include <assert.h>
#include<stdio.h>
// int my_strlen(char* arr)
// {
//   assert(arr);
//   int count = 0;
//   while (*arr != '\0')
//   {
//     count++;
//     arr++;
//   }
//   return count;
// }
// void left_span(char arr[],int k)
// {
//   int i = 0;
//   int len = my_strlen(arr);
//   //如果旋转的次数大于或等于就不用旋转 直接终止寒素
//   if(k >= len)
//     return ;
//   for (i = 0; i < k; i++)
//   {
//     char tmp = arr[0];
//     int j = 0;
//     for (j = 0 ; j < len - 1;j++)
//     {
//       arr[j] = arr[j + 1];
//     }
//     arr[len - 1] = tmp;
//   }
// }
// int main()
// {
//   char arr[] = "abcdef";
//   int k = 0;
//   scanf("%d",&k);
//   left_span(arr,k);
//   printf("%s\n",arr);
//   return 0;
// }
int my_strlen(char* arr)
{
  assert(arr);
  int count = 0;
  while (*arr != '\0')
  {
    count++;
    arr++;
  }
  return count;
}
void reverse(char* left,char* right)
{
  while (left < right)
  {
    char tmp = *left;
    *left = *right;
    *right = tmp;
    left++;
    right--;
  }
}
void left_span(char arr[],int k)
{
    assert(arr);
    int len = my_strlen(arr);
    k%=len;
    reverse(arr,arr+ k - 1);//左
    reverse(arr+k,arr + len -1);//右
    reverse(arr,arr+len - 1);//整体
}
int main()
{
  char arr[] = "abcdef";
  int k = 0;
  scanf("%d",&k);
  left_span(arr,k);
  printf("%s\n",arr);
  return 0;
}