/**
  ******************************************************************************
  * @file           : test_5_23.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/23
  ******************************************************************************
  */
#include <math.h>
#include<stdio.h>
//小乐乐改数字
// int main()
// {
//   int num = 0;
//   int ret = 0;
//   int sum = 0;
//   scanf("%d",&num);
//   int i = 0;
//   while (num)
//   {
//     ret = num % 10;
//     if(ret % 2 == 1)
//     {
//       sum = sum + 1*pow(10,i);
//       i++;
//     }
//     else
//     {
//       sum = sum + 0*pow(10,i);
//       i++;
//     }
//     num = num / 10;
//   }
//   printf("%d\n",sum);
//   return 0;
// }
//代码优化
// int main()
// {
//   int num = 0;
//   int ret = 0;
//   int sum = 0;
//   scanf("%d",&num);
//   int i = 0;
//   while (num)
//   {
//     ret = num % 10;
//     if(ret % 2 == 1)
//     {
//       ret = 1;
//     }
//     else
//     {
//       ret = 0;
//     }
//     sum = sum + ret * pow(10,i);
//     i++;
//     num = num / 10;
//   }
//   printf("%d\n",sum);
//   return 0;
// }

//带空格直角三角形图案
// int main()
// {
//   int n = 0;
//   while (scanf("%d",&n) == 1 && n )
//   {
//     int i = 0;
//     int j = 0;
//     for (i = 0 ; i < n; i++)
//     {
//       for (j = 0; j < n ;j++)
//       {
//         if( (i + j) < n -1)
//         {
//           printf("  ");
//         }
//         else
//         {
//           printf("* ");
//         }
//       }
//       printf("\n");
//     }
//   }
//   return 0;
// }

//买衣服
// int main()
// {
//   float price = 0;
//   int month = 0;
//   int day = 0;
//   int flag = 0;
//   scanf("%f %d %d %d",&price,&month,&day,&flag);
//   float total = 0;
//   if (month == 11 && day == 11)
//   {
//     if (flag == 1)
//     {
//       total = price * 0.7 - 50;
//     }
//     else
//     {
//       total = price * 0.7;
//     }
//   }
//   else if( month == 12 && day == 12)
//   {
//     if (flag == 1)
//     {
//       total = price * 0.8 - 50;
//     }
//     else
//     {
//       total = price * 0.8;
//     }
//   }
//   else
//   {
//     printf("不买衣服\n");
//   }
//   if(total < 0)
//   {
//     total = 0;
//     printf("%.2f\n",total);
//   }
//   else
//   {
//     printf("%.2f\n",total);
//   }
//
//   return 0;
// }
//小小优化一下
int main()
{
  float price = 0;
  int month = 0;
  int day = 0;
  int flag = 0;
  scanf("%f %d %d %d",&price,&month,&day,&flag);
  float total = 0;
  if (month == 11 && day == 11)
  {
    total = price * 0.7 - flag * 50;
  }
  else if( month == 12 && day == 12)
  {
    total = price * 0.8 - flag * 50;
  }
  else
  {
    printf("不买衣服\n");
  }
  if(total < 0)
  {
    total = 0;
    printf("%.2f\n",total);
  }
  else
  {
    printf("%.2f\n",total);
  }

  return 0;
}