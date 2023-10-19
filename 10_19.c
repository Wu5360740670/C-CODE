#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//枚举
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



//枚举+switch
//#include<stdlib.h>
////enum color{red=1,green,blue};
//int main()
//{
//	enum color { red = 1, green, blue };
//	enum color favorite_color;
//	printf("请输入你喜欢的颜色：1，red、2，green、3，blue\n");
//	scanf("%u",&favorite_color);
//	switch (favorite_color)
//	{
//	case red:
//		printf("你喜欢的颜色是红色");
//		break;
//	case green:
//		printf("你喜欢的颜色是绿色");
//		break;
//	case blue:
//		printf("你喜欢的颜色是蓝色");
//		break;
//	default:
//		printf("这里没有你喜欢的颜色");
//	}
//	return 0;
//}





//将整数转换为枚举
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




//指针
//int main()
//{
//	int v = 10;
//	int* p;
//	p = &v;
//	printf("v的变量地址为：%p",&v);
//	printf("p的变量地址为：%p", p);
//	return 0;
//}


//递增指针
//const int MAX = 3;
//int main()
//{
//	int c[] = {10,100,200};
//	//const int MAX = 3;
//	int i, * p;
//	p = c;
//	for (i = 0; i < MAX; i++)
//	{
//		printf("存储地址：c[%d]=%p\n",i,p);
//		printf("存储值：c[%d]=%d\n",i,*p);
//		p++;
//	}
//	return 0;
//}

//递减指针
//const int MAX = 3;
//int main()
//{
//
//	int v[] = { 10,100,200 };
//	int i, * p;
//	p = &v[MAX - 1];
//	for (i = MAX; i > 0; i--)
//	{
//		printf("存储地址：v[%d]=%p\n",i-1,p);
//		printf("存储值：v[%d]=%d\n",i-1,*p);
//	}
//	return 0;
//}

//指针比较
//int main()
//{
//	const int max = 3;
//	int v[] = { 10,100,200 };
//	int i, * p;
//	p = v;
//	i = 0;
//	while (p <= &v[max - 1])
//	{
//		printf("存储地址：v[%d]=%p\n",i,p);
//		printf("存储值：v[%d]=%d\n",i,*p);
//		p++;
//		i++;
//
//	}
//	return 0;
//}


//指针数组
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


//字符串列表+指针
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


//函数指针
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int (*p)(int, int) = max;
//	int a, b, c, d;
//	printf("输入3个数字：\n");
//	scanf("%d %d %d", &a, &b, &c);
//	d = p(p(a, b), c);
//	printf("%d",d);
//	return 0;
//}


//回调函数



//字符串







