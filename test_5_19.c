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
int Add(int x, int y)
{
  return x + y;
}
int Sub(int x, int y)
{
  return x - y;
}
int Mul(int x, int y)
{
  return x * y;
}
int Div(int x, int y)
{
  return x / y;
}
int main()
{
    //����һ������ָ������
    int (*pfarr[])(int,int) = {Add,Sub,Mul,Div};
    int i = 0;
    for (i = 0; i < 4;i++ )
    {
      printf("%d ",pfarr[i](8,4));//�ֱ���������е��ĸ�����,���12 4 32 2
    }
    return 0;
}