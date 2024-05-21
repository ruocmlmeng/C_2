/**
  ******************************************************************************
  * @file           : test_5_21.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/21
  ******************************************************************************
  */
#include <assert.h>
#include<stdio.h>

//自己实现strlen函数
//1.计数器的方法
//2.指针 - 指针的方法
//3.递归的方法
// size_t my_strlen( const char* str)
// {
//   assert(str);
//   size_t count = 0;
//   while (*str !='\0')
//   {
//     count++;
//     str++;
//   }
//   return count;
// }
// int main()
// {
//   char arr[] = "abcdef";
//   size_t len =  my_strlen(arr);
//   printf("%u\n",len);
//   return 0;
// }

//自己模拟实现strcpy函数
//这叫创造性实现
// void my_strcpy(char* des,const char* source)
// {
//     assert(des);
//     assert(source);
//     while (*source !='\0')
//     {
//         *des = *source;
//         des++;
//         source++;
//     }
//     *des = *source;
// }

//模拟实现strcpy函数---代码很简洁了
// char* my_strcpy(char* dest ,const char* source)
// {
//   assert(dest && source);
//   //设置一个变量指向目标函数的源头,这就是strcpy函数的功能
//   char* ret = dest;
//   while (*dest++ = *source++)//这个语句的含义是赋值结果作为条件,这样会使得代码更加简洁
//     ;
//
//   return ret;
// }
// int main()
// {
//   char arr1[] = "abcdefg";
//   char arr2[20] = {0};
//   my_strcpy(arr2,arr1);
//   printf("%s\n",arr2);
//   return 0;
// }

//模拟strcat函数
char* my_strcat(char* dest,const char* source)
{
  assert(dest && source);
  char* ret = dest;

  while (*dest !='\0')
  {
    dest++;
  }
  while (*dest++ = *source++)
    ;
  return ret;
}
int main()
{
  char arr1[20] = "hello ";
  char arr2[] = "world";
  my_strcat(arr1,arr2);
  printf("%s\n",arr1);
  return 0;
}