/**
  ******************************************************************************
  * @file           : test_5_22.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/22
  ******************************************************************************
  */
#include <assert.h>
#include<stdio.h>
//复习模拟实现str_memcpy函数
// void* my_memcpy(void* dest,const void* src,size_t num)
// {
//   assert(dest && src);
//   void* ret = dest;
//   while (num--)
//   {
//     *(char*)dest = *(char*)src;
//     dest = (char* )dest + 1;
//     src = (char* )src + 1;
//   }
//   return ret;
// }
//模拟实现memmove:将num个字节的值从源指向的位置复制到目标指向的内存块.复制就像使用中间缓冲区一样进行,允许目标和源重叠t
void* my_memmove(void* dest,const void* src,size_t num)
{
  assert(dest && src);
  void* ret = dest;
  if(dest < src)
  {
    while (num--)
    {
      *(char*)dest = *(char*)src;
      dest = (char*)dest + 1;
      src = (char*)src + 1;
    }
  }
  else
  {
    while (num--)
    {
      *((char*)dest + num) = *((char*)src+num);
    }
  }
  return ret;
}
int main()
{
  int arr1[] = {1,2,3,4,5,6,7,8,9,10};
  int arr2[20] = {0};
  my_memmove(arr1,arr1 + 2,20);
  int i = 0;
  for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]);i++)
  {
    printf("%d ",arr1[i]);
  }
  return 0;
}
