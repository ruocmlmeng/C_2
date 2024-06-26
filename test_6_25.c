#include <stdio.h>
/**
  ******************************************************************************
  * @file           : test_6_25.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/6/25
  ******************************************************************************
  */
// #include<stdio.h>
// int main()
// {
//   int year = 0;
//   scanf("%d",&year);
//   if((year%4==0 && year%100 !=0) || (year%400==0))
//   {
//     printf("%dÊÇÈòÄê\n",year);
//   }
//   else
//   {
//     printf("NO!");
//   }
//   return 0;
// }
// int main()
// {
//   char a = -1;
//   int b = a >>31;
//   printf("%d\n",b);
//   printf("%u\n",b);
//   return 0;
// }
// int main()
// {
//   int a = -1;
//   a = a >>31;
//   printf("%d\n",a);
//   printf("%u\n",a);
//   return 0;
// }
int main()
{
  printf("%d\n", -1);
  printf("%u\n", -1);

  printf("%d\n", (char)-1);
  printf("%u\n", (char)-1);

  printf("%d\n",(unsigned char)-1);
  printf("%u\n", (unsigned char)-1);

  printf("%d\n", -1u);
  printf("%u\n", -1u);

  printf("%d\n", 255);
  printf("%u\n", 255);

  printf("%d\n", (char)255);
  printf("%u\n", (char)255);

  printf("%d\n", (unsigned char)255);
  printf("%u\n", (unsigned char)255);
  return 0;
}