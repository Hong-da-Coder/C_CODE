#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}

//#define �Ƕ�����ŵ�

//#define M 1000
//
//int main()
//{
//	int m = M;
//	printf("%d\n", m);
//
//	return 0;
//}

//#define CASE break;case
//int main()
//{
//	int n = 0;
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}

//#define ����� - ������ȫ�滻�����滻�����
//���ź���Ҫ

//#define SQUARE(X) X*X
//#define DOUBLE(X) (X)+(X)
//
//int main()
//{
//	printf("%d\n", SQUARE(3+1));
//	//printf("%d\n/", 3 + 1 * 3 + 1);
//	printf("%d\n", 10 * DOUBLE(4));
//	//printf("%d\n", 10 * ((4)+(4));
//	//printf("%d\n", 3 * 3);
//
//	return 0;
//}

//#define M 100
//#define MAX(X,Y) ((X)<(Y)?(X):(Y))
//
//int main()
//{
//	int max = MAX(101, M);
//	printf("M = %d", M);
//
//	return 0;
//}

//#define PRINT(X, FORMAT) printf("the value of "#X" is "FORMAT"\n",X)
////#X - ��ʾ�������ַ���
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello" "world\n");
//
//	int a = 10;
//	PRINT(a, "%d");
//	//the value of a is 10
//	int b = 20;
//	PRINT(b, "%d");
//	//the value of b is 20
//	int c = 30;
//	PRINT(c, "%d");
//	//the value of c is 30
//
//	float f = 5.5f;
//	PRINT(f, "%f");
//
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int class101 = 100;
//	printf("%d\n", CAT(class, 101));
//	return 0;
//}

////1
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
////2
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("m = %d\n", m);// m = 9 b = 10
//
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	MALLOC(10, int);
//	return 0;
//}

//#undef - �Ƴ�һ���궨��
//#define M 100
//
//int main()
//{
//	int i = M;
//#undef M
//	printf("%d\n", M);
//	return 0;
//}

//#define TEST 1
////#define HEHE 1
//
//#include <stdio.h>
//int main()
//{
////���TEST�����ˣ�����������
////1
//#if TEST
//		printf("test1\n");
//#endif
//
////2
//#if defined(TEST)
//		printf("test2\n");
//#endif
//
//
////���HEHE�����壬����������
////3
//#ifndef HEHE
//		printf("hehe1\n");
//#endif
//
////4
//#if !defined(HEHE)
//		printf("hehe2\n");
//#endif
//	return 0;
//}

//���ļ�������C���Կ����ṩ�ĺ������ļ�ʹ��<>
#include <stdio.h>

//�����ļ��������Զ���ĺ�����ͷ�ļ�ʹ��""
#include "add.h"

//<>��""����ͷ�ļ��ı��������ǣ����ҵĲ��Ե�����
//"" 1.�Լ��������ڵ�Ŀ¼�²��ң� 2.�����1���Ҳ��������ڿ⺯����ͷ�ļ�Ŀ¼�²���
//<> ֱ���ڿ⺯��ͷ�ļ����ڵ�Ŀ¼�²���

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//atoi - ���ַ�������תΪ��������
//ģ��ʵ��atoi

//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>
//#include <limits.h>
//
//enum State 
//{
//	INVALID, //0
//	VALID    //1
//};
//
////state ��¼����my_atoi ���ص�ֵ�Ƿ�Ϊ�Ϸ���״̬
//enum State state = INVALID;
//
//int my_atoi(const char* s)
//{
//	int flag = 1;
//	//��ָ��
//	if (NULL == s)
//	{
//		return 0;
//	}
//	//���ַ�
//	if (*s == '\0')
//	{
//		return 0;
//	}
//	//�����հ��ַ�
//	while (isspace(*s))
//	{
//		s++;
//	}
//	//+/-
//	if (*s == '+')
//	{
//		flag = 1;
//		s++;
//	}
//	else if (*s == '-')
//	{
//		flag = -1;
//		s++;
//	}
//	//���������ַ���ת��
//	long long  n = 0;
//	 
//	while (isdigit(*s))
//	{
//		n = n * 10 + (*s - '0') * flag;
//		if (n > INT_MAX || n < INT_MIN)
//		{
//			return 0;
//		}
//		s++;
//	}
//	if (*s == '\0')
//	{
//		state = VALID;
//		return n;
//	}
//	else
//	{
//		//�������ַ������
//		return (int)n;
//	}
//}
//
//int main()
//{
//	//1.��ָ��
//	//2.���ַ���
//	//3.�����˷������ַ�
//	//4.������Χ
//
//	const char* p = "1234";
//	int ret = my_atoi(p);
//
//	if (state == VALID)
//		printf("������ת����%d\n", ret);
//	else
//		printf("�Ƿ���ת����%d\n", ret);
//
//	return 0;
//}

//1 2 3 4 5 1 2 3 4
//
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����
//12 3 4 5 6 1 2 3 4

//void Find(int arr[], int sz, int* px, int* py)
//{
//	//1.Ҫ�������������
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.����ret����һλΪ1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			break;
//		}
//	}
//	//�Ѵӵ�λ���λ�ĵ�posλΪ1����һ�飬Ϊ0�ķ�����һ��
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	*px = num1;
//	*py = num2;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	//�ҳ�������ֵ����һ�ε�����
//	//1.����
//	//2.�����Ҫ�㣺5��6������������ͬ����
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	//����ȥx,y�ĵ�ַ
//	//�����Ͳ���
//	Find(arr, sz, &x, &y);
//
//	printf("%d %d\n", x, y);
//	return 0;
//}


//дһ���꣬���Խ�һ�������Ķ�����λ��������ż��λ����

//#define SWAP(N) ((N & 0xaaaaaaaa)>>1) + ((N & 0x55555555)<<1)
//
//int main()
//{
//	int num = 10;
//	int ret = SWAP(num);
//	//int  ret = ((num & 0xaaaaaaaa)>>1) + ((num & 0x55555555)<<1);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}


//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ��

//#include <stddef.h>
//
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//#define OFFSETOF(struct_name, mem_name)  (int)&(((struct_name*)0)->mem_name)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//
//	return 0;
//}