#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//指针
//1.内存是怎么编号的？
//2.一个这样的内存单元是多大空间？

//计算机分为32位和64位
//32位 - 32根地址线 - 无离线 - 通电 - 转化为数字信号1/0（正电1、负电为0）
//32位计算机内存中有2^32个经过编号的内存单元
//一个内存单元的大小是1字节

//int main()
//{
//	int a = 10;//a在内存中要分配空间的 - 4个字节
//	&a;//拿到的是4个字节中的第一个字节的地址（较小的地址）
//	printf("%p\n", &a);//%p - 专门用来打印地址
//	int* pa = &a;//pa是用来存放地址的，在c语言中称为指针变量
//	//*说明pa是指针变量
//	//int 说明pa指向的对象是int类型
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", &ch);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//* - 解引用操作 *pa - 通过pa的地址找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	//指针的大小是相同的，指针是用来存储地址的
	//指针需要多大空间，取决于地址的存储需要多大空间
	//32位  32bit - 4byte
	//64位  64bit - 8byte
	return 0;
}

//结构体可以让c语言创建新的类型

//结构体的创建
//创建一个学生

//struct Stu//结构体
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//
////创建一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = {"张三",20,85.5};//结构体的初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//	// . - 找到结构体的成员变量并访问他
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	//              结构体指针->成员变量
//	//以上三种写法等价，直接拿到结构体的话用第一种，拿到指针用后两种，第三种写法更简单
//	return 0;
//}