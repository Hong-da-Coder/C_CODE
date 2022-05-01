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

//#define 是定义符号的

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

//#define 定义宏 - 参数完全替换，先替换后计算
//括号很重要

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
////#X - 表示参数名字符串
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

//#undef - 移除一个宏定义
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
////如果TEST定义了，下面参与编译
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
////如果HEHE不定义，下面参与编译
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

//库文件包含，C语言库中提供的函数的文件使用<>
#include <stdio.h>

//本地文件包含，自定义的函数的头文件使用""
#include "add.h"

//<>和""包含头文件的本质区别是：查找的策略的区别
//"" 1.自己代码所在的目录下查找， 2.如果第1步找不到，则在库函数的头文件目录下查找
//<> 直接在库函数头文件所在的目录下查找

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//atoi - 把字符串数字转为整形数字
//模拟实现atoi

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
////state 记录的是my_atoi 返回的值是否为合法的状态
//enum State state = INVALID;
//
//int my_atoi(const char* s)
//{
//	int flag = 1;
//	//空指针
//	if (NULL == s)
//	{
//		return 0;
//	}
//	//空字符
//	if (*s == '\0')
//	{
//		return 0;
//	}
//	//跳过空白字符
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
//	//处理数字字符的转换
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
//		//非数字字符的情况
//		return (int)n;
//	}
//}
//
//int main()
//{
//	//1.空指针
//	//2.空字符串
//	//3.遇到了非数字字符
//	//4.超出范围
//
//	const char* p = "1234";
//	int ret = my_atoi(p);
//
//	if (state == VALID)
//		printf("正常的转换：%d\n", ret);
//	else
//		printf("非法的转换：%d\n", ret);
//
//	return 0;
//}

//1 2 3 4 5 1 2 3 4
//
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字
//12 3 4 5 6 1 2 3 4

//void Find(int arr[], int sz, int* px, int* py)
//{
//	//1.要把所有数字异或
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2.计算ret的哪一位为1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			break;
//		}
//	}
//	//把从低位向高位的第pos位为1放在一组，为0的放在量一组
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
//	//找出这两个值出现一次的数字
//	//1.分组
//	//2.分组的要点：5和6必须在两个不同的组
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	//传进去x,y的地址
//	//返回型参数
//	Find(arr, sz, &x, &y);
//
//	printf("%d %d\n", x, y);
//	return 0;
//}


//写一个宏，可以将一个整数的二进制位的奇数和偶数位交换

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


//写一个宏，计算结构体中某变量相对于首地址的偏移

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