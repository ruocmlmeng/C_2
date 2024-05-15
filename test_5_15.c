#include <stdio.h>
#include <string.h>
/**
  ******************************************************************************
  * @file           : test_5_15.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/15
  ******************************************************************************
  */
// int main()
// {
//     char a[1000] = {0};
//     int i=0;
//     for(i=0; i<1000; i++)
//     {
//         a[i] = -1-i;
//     }
//     printf("%d",strlen(a));
//     return 0;
// }
// int main()
// {
//   unsigned char a = 200;
//   unsigned char b = 100;
//   unsigned char c = 0;
//   c = a + b;
//   printf("%d %d", a+b,c);
//   return 0;
// }

// int main()
// {
//     char a = -1;
//     //10000000000000000000000000000001 原码
//     //11111111111111111111111111111110 反码
//     //11111111111111111111111111111111 补码(计算机存储的是补码)
//     //然后是int -> char 截取8bit
//     //11111111
//     //进行整形提升->因为是char 相当于signed char,根据第一位的符号来补齐
//     //11111111111111111111111111111111 补码
//     //10000000000000000000000000000001 原码
//     //所以a,b打印的是-1
//     signed char b = -1;
//     unsigned char c = -1;
//     //10000000000000000000000000000001 原码
//     //11111111111111111111111111111110 反码
//     //11111111111111111111111111111111 补码(计算机存储的是补码)
//     //然后是int -> char 截取8bit
//     //11111111
//     //但是unsigned无符号数高位直接补0
//     //0000000000000000000000011111111 正数,三码相同
//     //255
//     printf("a=%d,b=%d,c=%d",a,b,c);
//     return 0;
// }

// int main()
// {
//     char a = -128;
//     //10000000000000000000000010000000 原码
//     //11111111111111111111111110000000 补码
//     //截断
//     //10000000
//     //整数提升
//     //11111111111111111111111110000000 无符号数没有原反补码的概念,就是这个数
//
//     printf("%u\n",a);//4294967168
//
//     //11111111111111111111111110000000 补码
//     //10000000000000000000000001111111 反码
//     //10000000000000000000000010000000 原码
//     printf("%d\n",a);//-128
//     return 0;
// }

// int main()
// {
//     char a = 128;
//     //00000000000000000000000010000000 原码
//     //截尾
//     //10000000
//     //11111111111111111111111110000000 内存中存的是无符号数
//     printf("%u\n",a);//4294967168
//     //11111111111111111111111110000000
//     //10000000000000000000000001111111
//     //10000000000000000000000010000000
//     printf("%d\n",a);//-128
//     return 0;
// }

// int main()
// {
//     int i = -20;
//     //10000000000000000000000000010100 原码
//     //11111111111111111111111111101011
//     //11111111111111111111111111101100补码
//     unsigned int j = 10;
//     //11111111111111111111111111101100 补码
//     //00000000000000000000000000001010
//     //11111111111111111111111111110110 补码
//     //求原码
//     //10000000000000000000000000001001
//     //10000000000000000000000000001010 原码
//     printf("%d\n",i+j);//-10
//     return 0;
// }

// int main()
// {
//   unsigned char a = 200;
//   unsigned char b = 100;
//   //00000000 00000000 00000000 11001000
//   //00000000 00000000 00000000 01100100
//   //00000000 00000000 00000001 00101100
//   unsigned char c = 0;
//   c = a + b;
//   //00000000 00000000 00000000 00101100
//    // 12 + 32 == 44
//   printf("%d %d", a+b,c);
//   return 0;
// }

// int main()
// {
//     unsigned int i;
//     for (i = 9;i >= 0; i--)
//     {
//         printf("%u\n",i);
//     }
//     return 0;
// }

// int main()
// {
//   char a[1000];
//   int i;
//   for (i = 0; i < 1000; i++)
//   {
//     a[i] = -1 -i;
//   }
//   printf("%d",strlen(a));
// }

// unsigned char i = 0;
// int main()
// {
//     for (i = 0; i <= 255;i++)
//     {
//         printf("hello world\n");
//     }
//     return 0;
// }




