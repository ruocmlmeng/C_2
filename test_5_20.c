/**
  ******************************************************************************
  * @file           : test_5_20.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/20
  ******************************************************************************
  */
#include<stdio.h>
#include <string.h>
// int main()
// {
//     int a[] = {1,2,3,4};
//     printf("%d\n",sizeof(a));//16 特殊情况之一，单独数组名，就是整个数组的大小
//     printf("%d\n",sizeof(a + 0));//4/8 首元素地址
//     printf("%d\n",sizeof(*a));//16---4 a是数组首元素大小，*a就是解引用，找到的就是首元素
//     printf("%d\n",sizeof(a+1));//4---8 首元素地址，跳过一个元素就是第二个元素的地址
//     printf("%d\n",sizeof(a[1]));//4 第二个元素的数据类型大小
//     printf("%d\n",sizeof(&a));//4/8 去除的是整个数组的地址，数组的地址也是地址
//     printf("%d\n",sizeof(*&a));//4---16 1.&a->int(*)[4] &a拿到的是数组名的地址，类型是int(*)[4],是一种数组指针，数组指针解引用
//     printf("%d\n",sizeof(&a+1));//4/8 地址，是地址就是4/8
//     printf("%d\n",sizeof(&a[0]));//4/8
//     printf("%d\n",sizeof(&a[0]+1));//4/8
//     return 0;
// }
// int main()
// {
//   char arr[] = {'a','b','c','d','e','f'};
//   printf("%d\n",sizeof(arr));//6 特殊情况，数组名代表整个数组
//   printf("%d\n",sizeof(arr + 0));//1---4/8 数组名就是首元素地址
//   printf("%d\n",sizeof(*arr));//1 数组名就是首元素地址，然后解引用就是首元素 *arr ->  arr[0]
//   printf("%d\n",sizeof(arr[1]));//1 第二个元素
//   printf("%d\n",sizeof(&arr));//4/8 取出整个数组，数组的地址也是地址
//   printf("%d\n",sizeof(&arr + 1));//4/8 跳过整个数组
//   printf("%d\n",sizeof(&arr[0] + 1));//4/8 相当于&arr[1]
//   return 0;
// }

// int main()
// {
//   char arr[] = {'a','b','c','d','e','f'};
//   printf("1 %d\n",strlen(arr));//随机数
//   printf("2 %d\n",strlen(arr + 0));//随机数
//   printf("3 %d\n",strlen(*arr));//err
//   printf("4 %d\n",strlen(arr[1]));//err
//   printf("5 %d\n",strlen(&arr));//随机数
//   printf("6 %d\n",strlen(&arr + 1));//随机数 -6
//   printf("7 %d\n",strlen(&arr[0] + 1));//随机数 - 1
//   return 0;
// }

// int main()
// {
//   char arr[] = "abcdef";
//   printf("1 %d\n",sizeof(arr));//7
//   printf("2 %d\n",sizeof(arr + 0));//4/8
//   printf("3 %d\n",sizeof(*arr));//1
//   printf("4 %d\n",sizeof(arr[1]));//1
//   printf("5 %d\n",sizeof(&arr));//4/8
//   printf("6 %d\n",sizeof(&arr + 1));//4/8
//   printf("7 %d\n",sizeof(&arr[0] + 1));//4/8
//   return 0;
// }

// int main()
// {
//   char arr[] = "abcdef";
//   printf("1 %d\n",strlen(arr));//6
//   printf("2 %d\n",strlen(arr + 0));//6
//   printf("3 %d\n",strlen(*arr));//err
//   printf("4 %d\n",strlen(arr[1]));//err
//   printf("5 %d\n",strlen(&arr));//6
//   printf("6 %d\n",strlen(&arr + 1));//随机值
//   printf("7 %d\n",strlen(&arr[0] + 1));//5
//   return 0;
// }

// int main()
// {
//   char* p ="abcdef"; //*arr -> arr[0]
//   // printf("1 %d\n",sizeof(p));//7-->8 p存的是一个地址
//   // printf("2 %d\n",sizeof(p + 1));//随机值 ->8 地址+1还是地址
//   // printf("3 %d\n",sizeof(*p));//1
//   // printf("4 %d\n",sizeof(p[0]));//1
//   // printf("5 %d\n",sizeof(&p));//4/8 取一级指针的地址->二级指针
//   // printf("6 %d\n",sizeof(&p + 1));//4/8
//   // printf("7 %d\n",sizeof(&p[0] + 1));//4/8
//
//   printf("1 %d\n",strlen(p));//6
//   printf("2 %d\n",strlen(p + 1));//随机值 ->5
//   // printf("3 %d\n",strlen(*p));//err
//   // printf("4 %d\n",strlen(p[0]));//err
//   printf("5 %d\n",strlen(&p));//6 ->随机值
//   printf("6 %d\n",strlen(&p + 1));//随机值
//   printf("7 %d\n",strlen(&p[0] + 1));//5
//   return 0;
// }

//---------指针笔试题---------
//1.
// int main()
// {
//   int a[5] = {1,2,3,4,5};
//   int* ptr = (int*)(&a + 1);
//   printf("%d,%d",*(a+1),*(ptr - 1));//2 5
//   return 0;
// }
//2.
// struct Test
// {
//   int Num;
//   char* pcName;
//   short sDate;
//   char cha[2];
//   short sBa[4];
// }*p = (struct Test*)0x100000;
// //假设p 的值为0x100000.如下表表达式的值分别为多少?
// //已知,结构体Test类型的变量大小是20个字节
// int main()
// {
//   printf("%p\n",p + 0x1);//0000000000100020
//   //跳过一个结构体指针的大小
//   //0x100000+20 --> 0x100014
//   printf("%p\n",(unsigned long)p + 0x1);//0000000000100001
//   //整形+1
//   //0x100001
//   printf("%p\n",(unsigned int*)p + 0x1);//0000000000100004
//   //跳过一个整形指针的大小
//   //0x100000+4->0x100004
//   return 0;
// }
//3.小端存储
// int main()
// {
//   int a[4] = {1,2,3,4};
//   int* ptr1 = (int* )(&a+1);
//   int* ptr2 = (int* )((int)a + 1);
//   printf("%x,%x",ptr1[-1],*ptr2);//4 ,20000000
//   return 0;
// }
// int main()
// {
//   int a[3][2] = {(0,1),(2,3),(4,5)};//考查了逗号表达式
//   int* p;
//   p = a[0];
//   printf("%d",p[0]);//a[0]表示的就是首元素地址,a[0][0]
//   return 0;
// }
//4.---难题
// int main()
// {
//   int a[5][5];
//   int(*p)[4];
//   p = a;
//   printf("%p,%d\n",&p[4][2] - &a[4][2],&p[4][2] - &a[4][2]);//FFFFFFFFFFFFFFFC,-4
//   return 0;
// }
//5.自己能分析出来的题目
// int main()
// {
//   int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//   int* ptr1 = (int*)(&aa + 1);
//   int* ptr2 = (int*)(*(aa+1));
//   printf("%d,%d",*(ptr1 - 1),*(ptr2 - 1));//10 5
//   return 0;
// }

//6.
// int main()
// {
//   char *a[] = {"work","at","alibaba"};
//   char**pa = a;
//   pa++;
//   printf("%s\n",*pa); //at
//   return 0;
// }

//7.该题要画图解出来,看指针在内存中的指向-----很好的一道题
int main()
{
  char* c[] = {"ENTER","NEW","POINT","FIRST"};
  char** cp[] = {c + 3,c + 2,c + 1,c};
  char*** cpp = cp;
  printf("%s\n",**++cpp);
  printf("%s\n",*-- * ++cpp +3);
  printf("%s\n",*cpp[-2] + 3);
  printf("%s\n",cpp[-1][-1] + 1);
  return 0;
}