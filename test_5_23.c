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
//     total = price * 0.7 - flag * 50;
//   }
//   else if( month == 12 && day == 12)
//   {
//     total = price * 0.8 - flag * 50;
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
//该题就是提供了一种将实际问题转化为代码的一种思想
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
// A选手说：B第二，我第三；
//
// B选手说：我第二，E第四；
//
// C选手说：我第一，D第二；
//
// D选手说：C最后，我第三；
//
// E选手说：我第四，A第一；
//
// 比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
// int main()
// {
//   int a = 0;
//   int b = 0;
//   int c = 0;
//   int d = 0;
//   int e = 0;
//   for (a = 1 ; a <= 5 ; a++)
//   {
//     for (b = 1; b <= 5 ;b++)
//     {
//       for (c = 1; c<= 5; c++)
//       {
//         for (d = 1 ; d<=5; d++)
//         {
//           for (e = 1; e <= 5; e++)
//           {
//             //这个if语句判断的就是每个人说的话只有一半是正确的
//             if((b==2) + (a==3) == 1
//               &&(b==2) + (e==4) == 1
//               &&(c==1) + (d==2) == 1
//               &&(c==5) + (d==3) == 1
//               &&(e==4) + (a==1) == 1)
//             {
//               if(a*b*c*d*e==120)
//               {
//                 printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
//               }
//             }
//           }
//         }
//       }
//     }
//   }
//   return 0;
// }

// 日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
// 以下为4个嫌疑犯的供词:
// A说：不是我。
//
// B说：是C。
//
// C说：是D。
//
// D说：C在胡说
//
// 已知3个人说了真话，1个人说的是假话。
// 现在请根据这些信息，写一个程序来确定到底谁是凶手。
// int main()
// {
//   int killer = 0;
//   for (killer = 'a' ; killer <='d';killer++)
//   {
//     if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d') == 3)
//     {
//       printf("%c\n",killer);
//     }
//   }
//   return 0;
// }

// 杨辉三角
// int main()
// {
//   int a[10][10]={0};
//   int i = 0;
//   int j = 0;
//   for (i = 0;i < 10; i++)
//   {
//     for (j = 0; j <= i; j++)
//     {
//       if(i== j)
//         a[i][j] = 1;
//       if(j == 0)
//         a[i][j] = 1;
//       if(i>=2 && j>=1)
//       {
//         a[i][j] = a[i-1][j-1] + a[i-1][j];
//       }
//     }
//   }
//   for (i = 0;i < 10; i++)
//   {
//     for (j = 0; j < 10 - i - 1; j++)  // 打印前面的空格
//     {
//       printf(" ");
//     }
//     for (j = 0; j <=i ; j++)
//     {
//       printf("%d ",a[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// int main()
// {
//   int a[10][10]={0};
//   int i = 0;
//   int j = 0;
//   for (i = 0;i < 10; i++)
//   {
//     for (j = 0; j <= i; j++)
//     {
//       if(i== j)
//         a[i][j] = 1;
//       if(j == 0)
//         a[i][j] = 1;
//       if(i>=2 && j>=1)
//       {
//         a[i][j] = a[i-1][j-1] + a[i-1][j];
//       }
//     }
//   }
//   for (i = 0;i < 10; i++)
//   {
//     for (j = 0; j < 10 - i - 1; j++)  // 打印前面的空格
//     {
//       printf(" ");
//     }
//     for (j = 0; j <=i ; j++)
//     {
//       printf("%d ",a[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
int main()
{
  int a[10][10]={0};
  int i = 0;
  int j = 0;
  for (i = 0;i < 10; i++)
  {
    for (j = 0; j <= i; j++)
    {
      if(i== j)
        a[i][j] = 1;
      if(j == 0)
        a[i][j] = 1;
      if(i>=2 && j>=1)
      {
        a[i][j] = a[i-1][j-1] + a[i-1][j];
      }
    }
  }
  for (i = 0;i < 10; i++)
  {
    for (j = 0; j < 10 - i - 1; j++)  // 打印前面的空格
    {
      printf(" ");
    }
    for (j = 0; j <=i ; j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}