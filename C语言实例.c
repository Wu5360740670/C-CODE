#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//输出
//int main()
//{
//	printf("Hello,World!");
//	return 0;
//}

//int main()
//{
//	int num;
//	printf("请输入一个整数：");
//	scanf("%d",&num);
//	printf("你输入的数字为：%d",num);
//	return 0;
//}

//加法
//int main()
//{
//	int a, b, sum;
//	printf("请输入2个数字：");
//	scanf("%d %d",&a,&b);
//	sum = a + b;
//	printf("sum=%d",sum);
//	return 0;
//}

//乘法
//int main()
//{
//	float num1, num2, sum;
//	printf("输入2个浮点数：");
//	scanf("%f %f",&num1,&num2);
//	sum = num1 * num2;
//	printf("sum=%d",sum);
//	return 0;
//}

//ASCII表
//int main()
//{
//	char c;
//	printf("输入一个字符：");
//	scanf("%c",&c);
//	// %c 显示对应字符
//	printf("%c的ASCII表为：%d",c,c);
//	return 0;
//}

//除法
//int main()
//{
//	int a, b, c;
//	printf("按a/b的格式输入2个数：");
//	scanf("%d %d",&a,&b);
//	c = a / b;
//	printf("a/b=%d",c);
//	return 0;
//}

//计算字节
//int main()
//{
//	int a;
//	float b;
//	double c;
//	char d;
//	
//	long e;
//	long long f;
//	long double g;
//
//	//sizeof
//	printf("int:%d\nfloat:%d\ndouble:%d\nchar:%d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
//	printf("long:%d\nlong long:%d\nlong double:%d\n",sizeof(e),sizeof(f),sizeof(g));
//	return 0;
//}

//交换2个数的值
//int main()
//{
//	double a, b, t;
//	printf("输入2个浮点数，空格隔开：");
//	scanf("%lf %lf",&a,&b);
//
//	t = a;
//	a = b;
//	b = t;
//	printf("交换后a=%.2lf,b=%.2lf",a,b);
//
//	return 0;
//}

//判断奇偶性

//int main()
//{
//	int num;
//	printf("输入一个数：");
//	scanf("%d",&num);
//	if (num % 2 == 0)
//	{
//		printf("这个数为偶函数");
//	}
//	else
//	{
//		printf("这个数为奇函数");
//	}
//	return 0;
//}

//判断一个字母是否是元英还是辅音
//int main()
//{
//	char c;
//	printf("请输入一个字母：");
//	scanf("%c",&c);
//	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//	{
//		printf("%c是元音",c);
//	}
//	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//	{
//		printf("%c是元音",c);
//	}
//	else
//	{
//		printf("%c是辅音",c);
//	}
//
//	return 0;
//}

//判断3个数最大值
//int main()
//{
//	double a, b, c;
//	printf("请输入3个数字：");
//	scanf("%lf %lf %lf",&a,&b,&c);
//	double max;//注意这里的形式
//	max = a;
//	if (b > a)
//	{
//		max = b;
//	}
//	if (c > a)
//	{
//		max = c;
//
//	}
//	printf("max=%.2f",max);
//	return 0;
//}

//一元二次方程的根
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//
//	float a, b, c, x1, x2, d;
//	printf("输入3个系数：");
//	scanf("%f %f %f", &a, &b, &c);
//	if (a != 0)
//	{
//		d = sqrt(b * b - 4 * a * c);
//		x1 = (-b + d) / (2 * a);
//		x2 = (-b - d) / (2 * a);
//		if (x1 < x2)
//		{
//			printf("%0.2f %0.2f\n",x2,x1);
//		}
//		else
//		{
//			printf("%0.2f %0.2f\n",x1,x2);
//		}
//
//	}
//
//	return 0;
//}


//闰年判断
//int main()
//{
//
//	
//	printf("请输入年份：");
//	int y=0;
//	scanf("%d",&y);
//	if (y % 4 == 0)
//	{
//		if (y % 400 == 0)
//		{
//			printf("%d是闰年",y);
//		}
//		else
//		{
//			printf("%d不是闰年",y);
//		}
//	}
//	else
//	{
//		printf("%d不是闰年",y);
//	}
//	return 0;
//}

//判断是不是一个字母
//int main()
//{
//	char c;
//	printf("请输入一个字符：");
//	scanf("%c",&c);
//	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//	{
//		printf("这个字母为：%c",c);
//	}
//	else
//	{
//		printf("不是字母");
//	}
//	return 0;
//}


//自然数和
//for
//int main()
//{
//
//	int n, i, sum=0;
//	printf("输入一个数字：");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("sum=%d",sum);
//	return 0;
//}

//while
//int main()
//{
//
//	int n, i, sum = 0;
//	printf("输入一个数字：");
//	scanf("%d",&n);
//	i = 1;
//	while (i <= n)
//	{
//		sum += i;
//		i++;
//	}
//	printf("sum=%d",sum);
//	return 0;
//}

//递归
//int main()
//{
//	int num;
//	printf("输入一个数：");
//	scanf("%d",&num);
//	printf("sum=%d",add(num));
//	return 0;
//}
//int add(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return n + add(n - 1);
//	}
//}

//阶层
//int main()
//{
//	int n, i;
//	int b=1;
//	printf("输入一个正数：");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		b *= i;
//	}
//	printf("%d",b);
//	return 0;
//}
//递归
//long int mul(int n);
//long int mul(int n)
//{
//	if (n > 1)
//		return n * mul(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n;
//	printf("输入一个数字：");
//	scanf("%d",&n);
//	printf("%d!=%d",n,mul(n));
//	return 0;
//}

//99乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d	",i,j,i*j);
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//斐波那契数列
//int main()
//{
//	int n;
//	int a = 0, b = 1, next;
//	printf("输出几项：");
//	scanf("%d",&n);
//	printf("斐波那契数列为：");
//		int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d,", a);
//		next = a + b;
//		a = b;
//		b = next;
//	}
//
//
//	return 0;
//}
//指定的数的数列


//2数最大公约数
//int main()//for循环
//{
//	int n1, n2, i, gys;
//	printf("输入2个数：");
//	scanf("%d %d",&n1,&n2);
//	for (i = 1; i <= n1 && i <= n2; i++)
//	{
//		if (n1 % i == 0 && n2 % i == 0)//寻找公约数
//		{
//			gys = i;
//		}
//	}
//	printf("%d and %d的最大公约数为 %d",n1,n2,gys);//循环遍历后找到最大
//
//	return 0;
//}

//int main()//while循环
//{
//	int n1, n2;
//	printf("输入2个数：");
//	scanf("%d %d",&n1,&n2);
//	while (n1 != n2)
//	{
//		if (n1 > n2)
//			n1 -= n2;
//		else
//			n2 -= n1;
//
//	}
//	printf("gys=%d",n1);
//	return 0;
//}

//循环输出26字母
//int main()
//{
//	char c = 'a';
//	int i;
//	for (i = 1; i <= 26; i++)
//	{
//		printf("%c ",c);
//		c++;
//
//	}
//	printf("\n");
//
//	return 0;
//}
//int main()
//{
//	char c;
//	for (c = 'A'; c <= 'Z'; c++)
//	{
//		printf("%c	",c);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	char c;
//
//	printf("输入u，返回26个大写字母；输入i，返回26个小写字母：");
//	scanf("%c",&c);
//	if (c == 'u' || c == 'U')
//	{
//		for (c = 'A'; c <= 'Z'; c++)
//		{
//			printf("%c ",c);
//
//		}
//
//	}
//	else if (c == 'i' || c == 'I')
//	{
//		printf("%c ", c);
//	}
//	else
//	{
//		printf("输入字母无效，没有返回值！！");
//	}
//	return 0;
//}


//判断数字是几位数
//int main()
//{
//	long long n;
//	int count = 0;
//	printf("输入一个整数：");
//	scanf("%lld",&n);
//	while (n != 0)
//	{
//		n /= 10;
//			count++;
//	}
//	printf("%d位",count);
//}

//计算一个数的n次方

//int main()
//{
//	int base, exponent;
//	printf("输入基数：");
//	scanf("%d",&base);
//	printf("输入指数：");
//	scanf("%d",&exponent);
//	int result=1;
//	while (exponent != 0)
//	{
//		result *= base;
//		exponent--;
//	}
//	printf("结果为：%lld",result);
//
//	return 0;
//}
//递归
//int power(int base, int exponent)
//{
//	if (exponent != 0)
//	{
//		return (base * power(base, exponent - 1));
//	}
//	else
//	{
//		return 1;
//	}
//}
//int power(int base, int exponent);
//int main()
//{
//	int base, exponent;
//	printf("基数为：");
//	scanf("%d",&base);
//	printf("指数为：");
//	scanf("%d",&exponent);
//	int result;
//	result = power(base, exponent);
//	printf("结果为：%d",result);
//	return 0;
//}