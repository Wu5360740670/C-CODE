#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���
//int main()
//{
//	printf("Hello,World!");
//	return 0;
//}

//int main()
//{
//	int num;
//	printf("������һ��������");
//	scanf("%d",&num);
//	printf("�����������Ϊ��%d",num);
//	return 0;
//}

//�ӷ�
//int main()
//{
//	int a, b, sum;
//	printf("������2�����֣�");
//	scanf("%d %d",&a,&b);
//	sum = a + b;
//	printf("sum=%d",sum);
//	return 0;
//}

//�˷�
//int main()
//{
//	float num1, num2, sum;
//	printf("����2����������");
//	scanf("%f %f",&num1,&num2);
//	sum = num1 * num2;
//	printf("sum=%d",sum);
//	return 0;
//}

//ASCII��
//int main()
//{
//	char c;
//	printf("����һ���ַ���");
//	scanf("%c",&c);
//	// %c ��ʾ��Ӧ�ַ�
//	printf("%c��ASCII��Ϊ��%d",c,c);
//	return 0;
//}

//����
//int main()
//{
//	int a, b, c;
//	printf("��a/b�ĸ�ʽ����2������");
//	scanf("%d %d",&a,&b);
//	c = a / b;
//	printf("a/b=%d",c);
//	return 0;
//}

//�����ֽ�
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

//����2������ֵ
//int main()
//{
//	double a, b, t;
//	printf("����2�����������ո������");
//	scanf("%lf %lf",&a,&b);
//
//	t = a;
//	a = b;
//	b = t;
//	printf("������a=%.2lf,b=%.2lf",a,b);
//
//	return 0;
//}

//�ж���ż��

//int main()
//{
//	int num;
//	printf("����һ������");
//	scanf("%d",&num);
//	if (num % 2 == 0)
//	{
//		printf("�����Ϊż����");
//	}
//	else
//	{
//		printf("�����Ϊ�溯��");
//	}
//	return 0;
//}

//�ж�һ����ĸ�Ƿ���ԪӢ���Ǹ���
//int main()
//{
//	char c;
//	printf("������һ����ĸ��");
//	scanf("%c",&c);
//	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//	{
//		printf("%c��Ԫ��",c);
//	}
//	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//	{
//		printf("%c��Ԫ��",c);
//	}
//	else
//	{
//		printf("%c�Ǹ���",c);
//	}
//
//	return 0;
//}

//�ж�3�������ֵ
//int main()
//{
//	double a, b, c;
//	printf("������3�����֣�");
//	scanf("%lf %lf %lf",&a,&b,&c);
//	double max;//ע���������ʽ
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

//һԪ���η��̵ĸ�
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//
//	float a, b, c, x1, x2, d;
//	printf("����3��ϵ����");
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


//�����ж�
//int main()
//{
//
//	
//	printf("��������ݣ�");
//	int y=0;
//	scanf("%d",&y);
//	if (y % 4 == 0)
//	{
//		if (y % 400 == 0)
//		{
//			printf("%d������",y);
//		}
//		else
//		{
//			printf("%d��������",y);
//		}
//	}
//	else
//	{
//		printf("%d��������",y);
//	}
//	return 0;
//}

//�ж��ǲ���һ����ĸ
//int main()
//{
//	char c;
//	printf("������һ���ַ���");
//	scanf("%c",&c);
//	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//	{
//		printf("�����ĸΪ��%c",c);
//	}
//	else
//	{
//		printf("������ĸ");
//	}
//	return 0;
//}


//��Ȼ����
//for
//int main()
//{
//
//	int n, i, sum=0;
//	printf("����һ�����֣�");
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
//	printf("����һ�����֣�");
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

//�ݹ�
//int main()
//{
//	int num;
//	printf("����һ������");
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

//�ײ�
//int main()
//{
//	int n, i;
//	int b=1;
//	printf("����һ��������");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		b *= i;
//	}
//	printf("%d",b);
//	return 0;
//}
//�ݹ�
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
//	printf("����һ�����֣�");
//	scanf("%d",&n);
//	printf("%d!=%d",n,mul(n));
//	return 0;
//}

//99�˷���
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


//쳲���������
//int main()
//{
//	int n;
//	int a = 0, b = 1, next;
//	printf("������");
//	scanf("%d",&n);
//	printf("쳲���������Ϊ��");
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
//ָ������������


//2�����Լ��
//int main()//forѭ��
//{
//	int n1, n2, i, gys;
//	printf("����2������");
//	scanf("%d %d",&n1,&n2);
//	for (i = 1; i <= n1 && i <= n2; i++)
//	{
//		if (n1 % i == 0 && n2 % i == 0)//Ѱ�ҹ�Լ��
//		{
//			gys = i;
//		}
//	}
//	printf("%d and %d�����Լ��Ϊ %d",n1,n2,gys);//ѭ���������ҵ����
//
//	return 0;
//}

//int main()//whileѭ��
//{
//	int n1, n2;
//	printf("����2������");
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

//ѭ�����26��ĸ
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
//	printf("����u������26����д��ĸ������i������26��Сд��ĸ��");
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
//		printf("������ĸ��Ч��û�з���ֵ����");
//	}
//	return 0;
//}


//�ж������Ǽ�λ��
//int main()
//{
//	long long n;
//	int count = 0;
//	printf("����һ��������");
//	scanf("%lld",&n);
//	while (n != 0)
//	{
//		n /= 10;
//			count++;
//	}
//	printf("%dλ",count);
//}

//����һ������n�η�

//int main()
//{
//	int base, exponent;
//	printf("���������");
//	scanf("%d",&base);
//	printf("����ָ����");
//	scanf("%d",&exponent);
//	int result=1;
//	while (exponent != 0)
//	{
//		result *= base;
//		exponent--;
//	}
//	printf("���Ϊ��%lld",result);
//
//	return 0;
//}
//�ݹ�
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
//	printf("����Ϊ��");
//	scanf("%d",&base);
//	printf("ָ��Ϊ��");
//	scanf("%d",&exponent);
//	int result;
//	result = power(base, exponent);
//	printf("���Ϊ��%d",result);
//	return 0;
//}