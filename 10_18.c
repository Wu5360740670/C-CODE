#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1,2,3,4组成3位数，不能重复
//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			else
//			{
//				for (k = 1; k < 5; k++)
//				{
//					if (i != j && i != k && j != k)
//					{
//						printf("%d%d%d\n", i, j, k);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//题目用到完全平方数//sqrt
//#include <math.h>
//int main()
//{
//	long int i, x, y, z;
//	for (i = 1; i < 100000; i++)
//	{
//		x = sqrt(i + 100);
//		y = sqrt(i + 268);
//		if (x * x == i + 100 && y * y == i + 268)
//		{
//			printf("%ld\n", i);
//		}
//	}
//
//	return 0;
//}

//局部变量
//int main()
//{
//	int a, b,c;//声明局部变量
//	a = 10;
//	b = 20;
//	c = a + b;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//
//	return 0;
//}


//访问数组元素
//int main()
//{
//	int n[10];
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		n[i] = i;
//	}
//	for (j = 1; j <= 10; j++)
//	{
//		printf("列表内第%d个元素为%d\n", j, n[j]);
//	}
//	return 0;
//}

//计算数组长度
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(a) / sizeof(a[0]);
//	printf("len=%d", len);
//	return 0;
//}

//二维数组
//int main()
//{
//	int a[5][2] = { {0,0},{1,2},{2,4},{3,6},{4,8} };
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("a[%d][%d]=%d	",i, j, a[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b;
//	b = sizeof(a) / sizeof(a[0]);
//	printf("长度b=%d",b);
//	return 0;
//}


//平均参加
//int main()
//{
//	printf("请输入班里人数：");
//		int num ;
//	scanf("%d", &num);
//	/*printf("%d\n", num);*/
//	int cj[] = {0};
//	int i;
//	for (i = 0; i < num; i++)
//	{
//
//	}
//	return 0;
//}

