/**
  ******************************************************************************
  * @file           : test_6_17.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/6/17
  ******************************************************************************
  */
#include<stdio.h>
int main()
{
  int i = 0;
  int sum = 0;
  for (i = 1; i < 1000 ; i+=2)
  {
     sum+=i;
  }
  printf("%d\n",sum);
  return 0;
}