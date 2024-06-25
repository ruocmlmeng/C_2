/**
  ******************************************************************************
  * @file           : test_6_25.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/6/25
  ******************************************************************************
  */
#include<stdio.h>
int main()
{
  int year = 0;
  scanf("%d",&year);
  if((year%4==0 && year%100 !=0) || (year%400==0))
  {
    printf("%dÊÇÈòÄê\n",year);
  }
  else
  {
    printf("NO!");
  }
  return 0;
}