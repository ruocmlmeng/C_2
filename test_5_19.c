/**
  ******************************************************************************
  * @file           : test_5_19.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/5/19
  ******************************************************************************
  */
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
//ָ���������;
// int main()
// {
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {2,3,4,5,6};
//     int arr3[] = {3,4,5,6,7};
//     int* parr[] = {arr1,arr2,arr3};
//     int i = 0;
//     for (i = 0; i < sizeof(parr) / sizeof(parr[0]) ; i++)
//     {
//         int j = 0;
//         for (j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++)
//         {
//             printf("%d ",*(parr[i] + j));
//             // printf("%d ",*(*(parr + i) + j));
//             // printf("%d ",parr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//��άָ���Ӧ��
// void print1(int arr[3][5],int r,int c)
// {
//     int i = 0;
//     for (i = 0; i < r; i++)
//     {
//         int j = 0;
//         for (j = 0; j < c ;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void print2(const int (*p)[5],int r,int c)
// {
//     int i = 0;
//     for (i = 0; i < r; i++)
//     {
//         int j = 0;
//         for (j = 0; j < c;j++)
//         {
//             printf("%d ",*(*(p+i) + j));
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//     // print1(arr,3,5);
//     print2(arr,3,5);
//     return 0;
// }
// int Add(int x,int y)
// {
//     return x + y;
// }
// int main()
// {
//     //���ں������ԣ�&�������ͺ��������Ǻ����ĵ�ַ
//     printf("%p\n",&Add);
//     printf("%p\n",Add);
//
//     //����ָ��
//     int (*pf)(int, int) = Add;
//
//     //ʹ�÷���
//     int ret1 = (*pf)(2,3);
//     int ret2 = Add(2,3);
//     int ret = pf(2,3);
//     return 0;
// }

//����ָ��ļ�Ӧ��
// void menu()
// {
//     printf("**************************\n");
//     printf("***** 1.Add 2.Sub ********\n");
//     printf("***** 3.Mul 4.Div ********\n");
//     printf("*****     0.�˳�   ********\n");
//     printf("**************************\n");
//     printf("**************************\n");
// }
// int Add(int x, int y)
// {
//     return x + y;
// }
// int Sub(int x, int y)
// {
//     return x - y;
// }
// int Mul(int x, int y)
// {
//     return x * y;
// }
// int Div(int x, int y)
// {
//     return x / y;
// }
// void cacl(int (*pf)(int , int ))
// {
//     int x = 0;
//     int y = 0;
//     int ret = 0;
//     printf("����������������:>");
//     scanf("%d %d",&x,&y);
//     ret = pf(x,y);
//     printf("%d\n",ret);
// }
// int main()
// {
//     int input = 0;
//     do
//     {
//         menu();
//         printf("��ѡ��:>");
//         scanf("%d",&input);
//         switch (input)
//         {
//             case 1:
//                 cacl(Add);
//                 break;
//             case 2:
//                 cacl(Sub);
//                 break;
//             case 3:
//                 cacl(Mul);
//                 break;
//             case 4:
//                 cacl(Div);
//                 break;
//             case 0:
//                 printf("�˳�����\n");
//                 break;
//             default:
//                 printf("�������,����������\n");
//                 break;
//         }
//     } while (input);
//     return 0;
// }

// //ת���
// void menu()
// {
//   printf("**************************\n");
//   printf("***** 1.Add 2.Sub ********\n");
//   printf("***** 3.Mul 4.Div ********\n");
//   printf("*****     0.�˳�   ********\n");
//   printf("**************************\n");
//   printf("**************************\n");
// }
// int Add(int x, int y)
// {
//   return x + y;
// }
// int Sub(int x, int y)
// {
//   return x - y;
// }
// int Mul(int x, int y)
// {
//   return x * y;
// }
// int Div(int x, int y)
// {
//   return x / y;
// }
// void cacl(int (*pf)(int , int ))
// {
//   int x = 0;
//   int y = 0;
//   int ret = 0;
//   printf("����������������:>");
//   scanf("%d %d",&x,&y);
//   ret = pf(x,y);
//   printf("%d\n",ret);
// }
// int main()
// {
//   int input = 0;
//   int (*pfarr[])(int ,int ) = {0,Add,Sub,Mul,Div};
//   do
//   {
//     menu();
//     printf("��ѡ��:>");
//     scanf("%d",&input);
//     if (input == 0)
//     {
//       printf("�˳�����\n");
//       break;
//     }
//     else if(input>=1 && input <=4)
//     {
//       int x = 0;
//       int y = 0;
//       int ret = 0;
//       printf("����������������:>");
//       scanf("%d %d",&x,&y);
//       ret = pfarr[input](x,y);
//       printf("%d\n",ret);
//     }
//     else
//     {
//       printf("�����������������\n");
//     }
//
//   } while (input);
//   return 0;
// }
// int Add(int x, int y)
// {
//   return x + y;
// }
// int Sub(int x, int y)
// {
//   return x - y;
// }
// int Mul(int x, int y)
// {
//   return x * y;
// }
// int Div(int x, int y)
// {
//   return x / y;
// }
// int main()
// {
//     //����һ������ָ������
//     int (*pfarr[])(int,int) = {Add,Sub,Mul,Div};
//     int i = 0;
//     for (i = 0; i < 4;i++ )
//     {
//       printf("%d ",pfarr[i](8,4));//�ֱ���������е��ĸ�����,���12 4 32 2
//     }
//     return 0;
// }

//qsort����
// int cmp_int(const void* e1, const void* e2)
// {
//   return (*(int* )e1 - *(int*)e2);
// }
// int main()
// {
//   int arr[] = {9,8,7,6,5,4,3,2,1,0};
//   int sz = sizeof(arr) / sizeof(arr[0]);
//   qsort(arr,sz,sizeof(arr[0]),cmp_int);
//   int i = 0;
//   for (i = 0; i < sz ;i++)
//   {
//     printf("%d ",arr[i]);
//   }
//   return 0;
// }
//����ṹ��
// struct Stu
// {
//   char name[20];
//   int age;
// };
// //������������
// int cmp_stu_by_name(const void*e1, const void* e2)
// {
//   return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
// }
// //������������
// int cmp_stu_by_age(const void* e1,const void* e2)
// {
//   return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
// }
// void test()
// {
//   struct Stu s[3] = {{"zhangsan",15},{"lisi",30},{"wangwu",25}};
//   int sz = sizeof(s) / sizeof(s[0]);
//   // qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
//   qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//   int i = 0;
//   for (i = 0; i < sz ;i++)
//   {
//     printf("%s %d\n",s[i].name,s[i].age);
//
//   }
// }
// int main()
// {
//   test();
//   return 0;
// }

//ʵ��ð������
struct Stu
{
  char name[20];
  int age;
};
void Swap(char* buf1,char* buf2,int width)
{
  int i = 0;
  for (i = 0; i <width ; i++)
  {
    char tmp = *buf1;
    *buf1 = *buf2;
    *buf2 = tmp;
    buf1++;
    buf2++;
  }
}
void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
  int i = 0;
  for (i = 0; i < sz -1;i++)
  {
    int flag = 1;
    int j = 0;
    for (j = 0; j < sz - 1 -i;j++)
    {
      if(cmp((char*)base+j*width,(char*)base + (j+1)*width) > 0)
      {
        //����
        Swap((char*)base+j*width ,(char*)base + (j+1)*width ,width);
        flag = 0;
      }
      if (flag == 1)
      {
        break;
      }
    }
  }
}
int cmp_int(const void* e1,const void* e2)
{
  return (*(int*)e1 - *(int*)e2);
}
//������������
int cmp_stu_by_name(const void*e1, const void* e2)
{
  return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test()
{
  int arr[] = {9,8,7,6,5,4,3,2,1,0};
  int sz = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
  int i = 0;
  for (i = 0; i < sz ; i++)
  {
    printf("%d ",arr[i]);
  }
}
void test1()
{
  struct Stu s[3] = {{"zhangsan",15},{"lisi",30},{"wangwu",25}};
  int sz = sizeof(s) / sizeof(s[0]);
  // qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
  bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_name);
  int i = 0;
  for (i = 0; i < sz ;i++)
  {
    printf("%s %d\n",s[i].name,s[i].age);

  }
}
int main()
{
  // test();
  test1();
  return 0;
}