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
//     printf("%d是闰年\n",year);
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
// int main()
// {
//   printf("%d\n", -1);
//   printf("%u\n", -1);
//
//   printf("%d\n", (char)-1);
//   printf("%u\n", (char)-1);
//
//   printf("%d\n",(unsigned char)-1);
//   printf("%u\n", (unsigned char)-1);
//
//   printf("%d\n", -1u);
//   printf("%u\n", -1u);
//
//   printf("%d\n", 255);
//   printf("%u\n", 255);
//
//   printf("%d\n", (char)255);
//   printf("%u\n", (char)255);
//
//   printf("%d\n", (unsigned char)255);
//   printf("%u\n", (unsigned char)255);
//   return 0;
// }
// int main()
// {
//   printf("%d\n", -1);
//   printf("%u\n", -1);
//
//   printf("%d\n", (char)-1);
//   printf("%u\n", (char)-1);
//
//   printf("%d\n",(unsigned char)-1);
//   printf("%u\n", (unsigned char)-1);
//
//   printf("%d\n", -1u);
//   printf("%u\n", -1u);
//
//   printf("%d\n", 255);
//   printf("%u\n", 255);
//
//   printf("%d\n", (char)255);
//   printf("%u\n", (char)255);
//
//   printf("%d\n", (unsigned char)255);
//   printf("%u\n", (unsigned char)255);
//   return 0;
// }
#include<stdio.h>
/**
    从键盘输入一个整数值,输出这个正数值是几位数,并且将其进行倒序输出.
        输入:12345
        输出:5 54321
**/
int main()
{
  int num = 0;
  int count = 0;
  int sum = 0;
  int temp = 0;
  printf("请输入一个正整数：\n");
  scanf("%d",&num);
  int temp2 = num;
  while(num)
  {
    num = num / 10;
    count++;
  }
  printf("%d\n",count);
  int i = 0;
  for(i = 0; i < count ; i++)
  {
    temp = temp2 % 10;
    temp2 = temp2 / 10;
    printf("%d",temp);
  }
  return 0;
}








