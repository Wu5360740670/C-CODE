#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	//char mychar = 'a';
//	//int b = (int)mychar;
//	//printf("%d",b);
//
//	//100��������
//
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	while (num <= 100)
//	{
//		num =num+1;
//		if (num % 2 == 0)
//		{
//			sum2 = sum2 + num;
//		}
//		else
//		{
//			sum1 = sum1 + num;
//		}
//		
//
//	}
//	printf("������Ϊ%d\n,ż����Ϊ%d\n", sum1, sum2);
//
//
//
//	int sum3 = 0, sum4 = 0;
//	for (int num3 = 1; num3 <= 100; num3 += 1)
//	{
//		if (num3 % 2 == 0)
//		{
//			sum4 += num3;
//
//		}
//		else
//		{
//			sum3 += num3;
//		}
//	}
//	printf("������Ϊ��%d\nż����Ϊ��%d", sum3, sum4);
//
//	return 0;
//
//}
//
////forѭ��
//int main()
//{
//	
//	int sum1=0,sum2 = 0;
//	for (int num = 1; num <= 100; num += 1)
//	{
//		if (num % 2 == 0)
//		{
//			sum2 += num;
//
//		}
//		else
//		{
//			sum1 += num;
//		}
//	}
//	printf("������Ϊ��%d\nż����Ϊ��%d",sum1, sum2);
//
//	return 0;
//}



//switchѭ��
// 
//int main()
//{
//    int a;
//    printf("input integer number: ");
//    scanf("%d", &a);
//    switch (a)
//    {
//    case 1:printf("Monday\n");
//        break;
//    case 2:printf("Tuesday\n");
//        break;
//    case 3:printf("Wednesday\n");
//        break;
//    case 4:printf("Thursday\n");
//        break;
//    case 5:printf("Friday\n");
//        break;
//    case 6:printf("Saturday\n");
//        break;
//    case 7:printf("Sunday\n");
//        break;
//    default:printf("error\n");
//    }
//}

//100-200���ܳ�3�ĺ�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,sum=0;
//	for (n = 100; n <= 200; n++)
//	{
//		if (n % 3 == 0)
//			continue;
//		else
//		{
//			sum = sum + n;
//		}
//	}
//	printf("100-200���ܱ�3���������ĺ�Ϊ��%d",sum);
//
//	return 0;
//}


//1��2��3��4����ɶ������ظ���3λ��
#include<stdio.h>
//����1
//int main()
//{
//	int i, j, k;//����ʮ����
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5; k++)
//			{
//				if (i != k && i != j && j != k)
//				{
//					printf("%d%d%d\n",i,j,k);
//				}
//			}
//		}
//	}
//	return 0;
//}
//����2
//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//			for (k = 1; k < 5; k++)
//			{
//				if (k == j || k == i)
//				{
//					continue;
//				}
//				printf("%d%d%d\n",i, j, k);
//			}
//		}
//	}
//
//	return 0;
//}
//


//���ֵ����
//int max(int num1, int num2);
//
//int main()
//{
//	int max1;
//	int a = 1, b = 2;
//	max1 = max(a, b);
//	printf("%d", max1);
//	return 0;
//}
//
//int max(int num1, int num2)
//{
//	int r;
//	if (num1 > num2)
//	{
//		r = num1;
//	}
//	else
//	{
//		r = num2;
//	}
//	return r;
//}


////�����������ֵ
//int max(int a, int b, int c)
//{
//	int max = a;
//	if (b > max)
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	return max;
//}
//int max(int a, int b, int c);
//int main()
//{
//		int x, y, z;
//		printf("������3���������ո������");
//		scanf("%d %d %d", &x, &y,&z);
//
//		int Max = 0;
//		Max = max(x, y, z);
//		printf("���ֵΪ��", &Max);
//		return 0;
//}

//��������
//void swap(int x, int y);
//void swap(int x, int y)
//{
//	int t;
//	t = x;
//	x = y;
//	y = t;
//
//}
//int main()
//{
//	int a = 10, b = 100;
//	swap(a, b);
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}

//ָ�뽻��
//void swap(int *x, int *y);
//void swap(int *x, int *y)
//{
//	int t;
//	t = * x;
//	* x= * y;
//	* y = t;
//}
//int main()
//{
//	int a = 5, b = 10;
//	swap(&a, &b);
//	printf("a=%d\nb=%d",a,b);
//	return 0;
//}


//int sum(int n);
//int main()
//{
//	int a,b=0;
//	printf("���������֣�");
//	scanf("%d",b);
//	a = sum(b);
//	printf("%d�ڵĺ�Ϊ��",a);
//	return 0;
//}
//int sum(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n + sum(n - 1);
//	}
//}



