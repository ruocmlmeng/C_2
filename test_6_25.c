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
// /**
//     从键盘输入一个整数值,输出这个正数值是几位数,并且将其进行倒序输出.
//         输入:12345
//         输出:5 54321
// **/
// #include<stdio.h>
// /**
// 	冒泡排序
// **/
// int main()
// {
// 	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
// 	int i = 0;
// 	int len = sizeof(arr) / sizeof(arr[0]);
// 	for(i = 0; i < len - 1; i++ )
// 	{
// 		int j = 0;
// 		for(j = 0; j < len - 1 - i; j++ )
// 		{
// 			if(arr[j+1] < arr[j])
// 			{
// 				int temp = arr[j+1];
// 				arr[j+1] = arr[j];
// 				arr[j] = temp;
// 			}
// 		}
// 	}
// 	for(i = 0; i < len ; i++)
// 	{
// 		printf("%d ",arr[i]);
// 	}
// 	return 0;
// }

/**
  冒泡排序
**/
// int main()
// {
//   int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//   int i = 0;
//   int len = sizeof(arr) / sizeof(arr[0]);
//   for(i = 0; i < len - 1; i++ )
//   {
//     int j = 0;
//     for(j = 0; j < len - 1 - i; j++ )
//     {
//       if(arr[j+1] < arr[j])
//       {
//         int temp = arr[j+1];
//         arr[j+1] = arr[j];
//         arr[j] = temp;
//       }
//     }
//   }
//   for(i = 0; i < len ; i++)
//   {
//     printf("%d ",arr[i]);
//   }
//   return 0;
// }
int main()
{
  int arr[10] = {9,8,7,6,5,4,3,2,1,0};
  int i = 0;
  int len = sizeof(arr) / sizeof(arr[0]);
  for(i = 0; i < len - 1; i++ )
  {
    int j = 0;
    for(j = 0; j < len - 1 - i; j++ )
    {
      if(arr[j+1] < arr[j])
      {
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(i = 0; i < len ; i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}

















