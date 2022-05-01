#define _CRT_SECURE_NO_WARNINGS 1 

//编程题：写一个代码，实现输出一个数二进制位所有1的个数

//#include <stdio.h>
//写法1

//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//写法2
//n = n&(n-1) 

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//}
//
//int main()
//{
//	int n = -1;
//	int ret =  NumberOf1(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//写一个代码判断一个数字是不是2的n次方
//2的n次方的数字，其中只有一个1
//k&(k-1) == 0  即可实现
// 



//编程题:求两个数二进制中不同位的个数 

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
// return count;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &n, &m);
//	int ret = m ^ n;//相同位0，相异为1
//	count = NumberOf1(ret);
//	printf("%d\n", count);
//	//统计一下ret的2进制中有几个1，就说明m和1的二进制位中有几个位不同
//	
//
//	/*
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i)&1))
//		{
//		count++;
//        }
//	}
//	printf("%d\n", count);
//	*/
//
//	return 0;
//}

//编程题：打印输入整数的2进制中的奇数位和偶数位

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//编程题：交换两个变量（不创建临时变量）
//#include <stdio.h>
//void exchange(int x, int y)
//{
//
//	x = x ^ y;
//	y = x^ y;
//	x = x^ y;
//}
//int main()
//{
//	int a = 2;
//	int b = 4;
//	exchange(a, b);
//	printf("a = %d b = %d", a, b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//	//arr                    小端存储
//	// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00
//	//short类型为两个字节，所以每次p+i会跳过两个字节，访问他之后的字节
//	//所以结果为 0 0 0 3 4 5
//	
//}


//编程题：将一句话的单词进行倒置，标点不倒置。
//比如 i like beijing.  经过函数后变为 beijing. like i
#include <stdio.h>

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	//三步翻转法
//	//1.字符串整体翻转
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//
//	//2.每个单词逆序
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//			start = end + 1;
//		else
//			start = end;
//	}
//	return 0;
//}


//数据存储
//数据在内存中以2进制的形式存储
//对于整数来说：
//正整数：原码、反码、补码相同
//负整数：原码、反码、补码要进行计算
//按照数据的数值直接写出的二进制序列就是原码
//原码的符号位不变，其他位按位取反，得到的就是反码
//反码+1，得到的就是补码
// 
//整数在内存中存储的是补码


//大端字节序和小端字节序

//大端字节序：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处
//小端字节序：把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处


//面试题：请简述大端字节序和小端字节序的概念，设计一个小程序来判断的当前及其的字节序
//int check_sys()
//{
//	//判断当前机器的字节序
//	int a = 1;
//	char* p = (char*)&a;//强制类型转换，将int类型的a转换为char*
//	return *p;//返回1表示小端，返回0表示大端
//}
//int main()
//{
//	
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	//整型提升
//	char a = -1;
//
//	signed char b = -1;
//	unsigned char c = -1;
//
//	printf("a = %d, b = %d, c = %d", a, b, c);//-1 -1 255
//	return 0;
//}

//补充：
//1.char 到底是signed char 还是unsigned char？
//C语言标准并没有规定，取决于编译器

//int 是 signed int
//short 是 signed short

//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - 补码
//
//	//10000000 存储在char中的二进制序列
//	//11111111111111111111111110000000 - 整形提升后的补码，
//	//此时因为是unsigned int打印，视为正整数的补码
//	printf("%u\n", a);
//}

//char类型的取值范围:-128 到 127
//存放正整数最小为0，最大为01111111,即127
//存放负整数时从10000000 开始，被解读为-128

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	unsigned int j = 10;
//	//00000000000000000000000000001010
//	//此种情况不发生整型提升
//	printf("%d\n", i + j);//%d打印的是原码
//	//11111111111111111111111111101100
//	//00000000000000000000000000001010
//	//11111111111111111111111111110110 - 补码
//	//11111111111111111111111111110101 - 反码
//	//10000000000000000000000000001010 - 原码   -10
//	return 0;
//}

