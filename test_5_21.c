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
// char* my_strcat(char* dest,const char* source)
// {
//   assert(dest && source);
//   char* ret = dest;
//
//   while (*dest !='\0')
//   {
//     dest++;
//   }
//   while (*dest++ = *source++)
//     ;
//   return ret;
// }
// int main()
// {
//   char arr1[20] = "hello ";
//   char arr2[] = "world";
//   my_strcat(arr1,arr2);
//   printf("%s\n",arr1);
//   return 0;
// }

//模拟strcmp函数
// int my_strcmp(const char* dest,const char* source)
// {
//   while(*dest == *source)
//   {
//     if(*dest == '\0')
//       return 0;
//     dest++;
//     source++;
//   }
//   if(*dest > *source)
//     return 1;
//   else if(*dest < *source)
//     return -1;
// }
//简化一下代码
// int my_strcmp(const char* dest,const char* source)
// {
//   assert(dest && source);
//   while(*dest == *source)
//   {
//     if(*dest == '\0')
//       return 0;
//     dest++;
//     source++;
//   }
//   return (*dest - *source);
// }
// int main()
// {
//
//   char arr1[20] = "abcde";
//   char arr2[20] = "abcda";
//   int ret = my_strcmp(arr1,arr2);
//   if(ret > 0)
//     printf(">\n");
//   else if(ret == 0)
//     printf("==\n");
//   else
//     printf("<\n");
//   return 0;
// }

//模拟实现strstr函数---查找字符串里面的字串
// char* my_strstr(const char* str1,const char* str2)
// {
//   assert(str1 && str2);
//   char* s1 = str1;
//   char* s2 = str2;
//   char* p = str1;
//   while (*p)
//   {
//     s1 = p;
//     s2 = str2;
//     while (*s1 != '\0' && *s2 !='\0' && *s1 == *s2)
//     {
//       s1++;
//       s2++;
//     }
//     if(*s2 == '\0')
//     {
//       return (char* )p;
//     }
//     p++;
//   }
//   return NULL;
// }
// int main()
// {
//   // char email[] = "zpw@bitejiuyeke.com";
//   // char substr[] = "bitejiuyeke";
//   char str1[] = "abbbcdef";
//   char str2[] = "bbc";
//   // char* ret = my_strstr(email,substr);
//   char* ret = my_strstr(str1,str2);
//   if(ret == NULL)
//   {
//     printf("字串不存在\n");
//   }
//   else
//   {
//     printf("%s\n",ret);
//   }
//   return 0;
// }
//模拟实现memcpy函数
//memcpy负责拷贝两块独立空间中的数据,可以拷贝任何类型的数据,但是不能拷贝自己
void* my_memcpy(void* dest,const void* src, size_t num)
{
  assert(dest && src);
  void* ret = dest;
  while (num--)
  {
    *(char*)dest = *(char*)src;
    dest = (char*) dest + 1;
    src = (char*) src + 1;
  }
  return ret;
}
int main()
{
  int arr1[] = {1,2,3,4,5,6,7};
  int arr2[10] = {0};
  my_memcpy(arr2,arr1,28);
  int i = 0;
  for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]);i++)
  {
    printf("%d ",arr2[i]);
  }

  return 0;
}