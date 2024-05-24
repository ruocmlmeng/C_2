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
void left_span(char arr[],int k)
{
  int i = 0;
  int len = my_strlen(arr);
  for (i = 0; i < k; i++)
  {
    char tmp = arr[0];
    int j = 0;
    for (j = 0 ; j < len - 1;j++)
    {
      arr[j] = arr[j + 1];
    }
    arr[len - 1] = tmp;
  }
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