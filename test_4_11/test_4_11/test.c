#define _CRT_SECURE_NO_WARNINGS 1 

//自定义类型

//结构体自引用

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//结构体变量的定义和初始化

#include <stdio.h>

//struct S
//{
//	char c;
//	int i;
//}s1, s2;
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	//struct S s3 = { 'x', 20 };
//	struct B sb = { 3.14, {'w', 100}, 'q' };
//	//.
//	//->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}


//结构体内存对齐
//掌握结构体的对齐规则（热门考点）
//1.第一个成员在与结构体变量偏移量为0的地址处，
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数 = 编译器默认的一个对齐数与该成员大小的较小值
//VS中默认对齐数的值为8
//3.结构体总大小为最大对齐数（每一个成员都有一个对齐数）的整数倍。
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍


//struct S
//{
//	int i;//4
//	char c;//1
//};
//
//struct S2
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S3
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S4
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S5
//{
//	char c1;
//	struct S4 s4;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	struct S5 s5 = { 0 };
//	printf("%d\n", sizeof(s));//8
//	printf("%d\n", sizeof(s2));//12
//	printf("%d\n", sizeof(s3));//8
//	printf("%d\n", sizeof(s4));//16
//	printf("%d\n", sizeof(s5));//32
//
//	return 0;
//}


//为什么内存对齐?（看课件）
//总体来说：结构体的内存对齐是1拿空间来换取时间的做法

//#pragma pack(2)  //修改默认对齐数
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//8
//	return 0;
//}

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//考察：offsetof宏的实现
// 
//后面会讲
// 
//#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}

//结构体传参：传地址最佳，传值的话需要占用太多空间，且无法修改源数据
//函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。

//结构体实现位段的能力

//位段的声明和结构体类似，有两个不同：
//1.位段的成员必须是 int、unsigned int 或signed int 。
//2.位段的成员名后边有一个冒号和一个数字。

//位段 - 节省空间，在空间上得到大幅度的节省，根据需求分配内存块的大小
//struct A
//{
//	4个字节 - 32bit
//	int _a : 2;//_a 成员占2个bit位
//	int _b : 5;//_b 成员占5个bit位
//	int _c : 10;//_c 成员占10个bit位
//	15
//	4个字节 - 32bit
//	int _d : 30;//_d 成员占30个bit位
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//
//	return 0;
//}

//位段的内存分配
//1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型
//2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
//3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//枚举
//顾名思义就是一一列举
//把可能的取值一一列举

//枚举类型的定义

//enum Color//其中包含的是枚举类型的可能取值
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	//enum Color c = BLUE;
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}

//枚举的优点


//联合（共用体）
//联合类型的定义

//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u = {10};
//	u.i = 1000;
//	u.c = 100;
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//printf("%d\n", sizeof(u)); // 4
//
//	return 0;
//}

//联合的特点
//1.联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联
//合至少得有能力保存最大的那个成员）。
//2.同一时间他的成员只能使用一个（避免因为修改一个导致两个都改变）

//判断当前计算机的大小端存储

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;//大端
//	}
//	else
//	{
//		return 0;//小端
//	}
//}


//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1 就是小端
//	//返回0 就是大端
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	if (ret == 0)
//		printf("大端\n");
//
//	return 0;
//}

//联合体大小的计算
//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。

union Un
{
	char a[5];//5个字节   对齐数：1个字节
	int i;//4个字节       对齐数：4个字节
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}