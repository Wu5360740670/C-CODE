#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ö��
//enum DAY
//{
//	MON = 1, TUE, WED, THU, FRI, SAT, SUN
//};
//int main()
//{
//	enum DAY day;
//	day = WED;
//	printf("%d", day);
//	return 0;
//}



//enum DAY
//{
//	MON = 1, TUE, WED, THU, FRI, SAT, SUN
//}day;
//int main()
//{
//	for (day = MON; day <= SUN; day++)
//	{
//		printf("%d\n", day);
//	}
//	return 0;
//}



//ö��+switch
//#include<stdlib.h>
////enum color{red=1,green,blue};
//int main()
//{
//	enum color { red = 1, green, blue };
//	enum color favorite_color;
//	printf("��������ϲ������ɫ��1��red��2��green��3��blue\n");
//	scanf("%u",&favorite_color);
//	switch (favorite_color)
//	{
//	case red:
//		printf("��ϲ������ɫ�Ǻ�ɫ");
//		break;
//	case green:
//		printf("��ϲ������ɫ����ɫ");
//		break;
//	case blue:
//		printf("��ϲ������ɫ����ɫ");
//		break;
//	default:
//		printf("����û����ϲ������ɫ");
//	}
//	return 0;
//}





//������ת��Ϊö��
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	enum day{saturday,sumday,monday,tuesday,wednesday,thursday,friday}workday;
//	int a = 1;
//	enum day weekend;
//	weekend = (enum day)a;
//	printf("weekend:%d",weekend);
//
//
//	return 0;
//}




//ָ��
//int main()
//{
//	int v = 10;
//	int* p;
//	p = &v;
//	printf("v�ı�����ַΪ��%p",&v);
//	printf("p�ı�����ַΪ��%p", p);
//	return 0;
//}


//����ָ��
//const int MAX = 3;
//int main()
//{
//	int c[] = {10,100,200};
//	//const int MAX = 3;
//	int i, * p;
//	p = c;
//	for (i = 0; i < MAX; i++)
//	{
//		printf("�洢��ַ��c[%d]=%p\n",i,p);
//		printf("�洢ֵ��c[%d]=%d\n",i,*p);
//		p++;
//	}
//	return 0;
//}

//�ݼ�ָ��
//const int MAX = 3;
//int main()
//{
//
//	int v[] = { 10,100,200 };
//	int i, * p;
//	p = &v[MAX - 1];
//	for (i = MAX; i > 0; i--)
//	{
//		printf("�洢��ַ��v[%d]=%p\n",i-1,p);
//		printf("�洢ֵ��v[%d]=%d\n",i-1,*p);
//	}
//	return 0;
//}

//ָ��Ƚ�
//int main()
//{
//	const int max = 3;
//	int v[] = { 10,100,200 };
//	int i, * p;
//	p = v;
//	i = 0;
//	while (p <= &v[max - 1])
//	{
//		printf("�洢��ַ��v[%d]=%p\n",i,p);
//		printf("�洢ֵ��v[%d]=%d\n",i,*p);
//		p++;
//		i++;
//
//	}
//	return 0;
//}


//ָ������
//int main()
//{
//	const int max = 3;
//	int v[] = { 10,100,200 };
//	int i;
//	for (i = 0; i < max; i++)
//	{
//		printf("value of v[%d]=%d\n",i,v[i]);
//
//	}
//	return 0;
//}

//const int max = 3;
//int main()
//{
//	
//	int v[] = { 10,100,200 };
//	int i, * p[3];
//	for (i = 0; i < max; i++)
//	{
//		p[i] = &v[i];
//	}
//	for (i = 0; i < max; i++)
//	{
//		printf("v[%d]=%d\n",i,*p[i]);
//		printf("v[%d]=%d\n",i,v[i]);
//	}
//
//	return 0;
//}


//�ַ����б�+ָ��
//#include <stdio.h>
//
//const int MAX = 4;
//
//int main()
//{
//    const char* names[] = {
//                    "Zara Ali",
//                    "Hina Ali",
//                    "Nuha Ali",
//                    "Sara Ali",
//    };
//    int i = 0;
//
//    for (i = 0; i < MAX; i++)
//    {
//        printf("Value of names[%d] = %s\n", i, names[i]);
//    }
//    return 0;
//}


//����ָ��
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int (*p)(int, int) = max;
//	int a, b, c, d;
//	printf("����3�����֣�\n");
//	scanf("%d %d %d", &a, &b, &c);
//	d = p(p(a, b), c);
//	printf("%d",d);
//	return 0;
//}


//�ص�����



//�ַ���







