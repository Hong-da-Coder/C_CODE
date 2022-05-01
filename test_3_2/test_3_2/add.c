#define _CRT_SECURE_NO_WARNINGS 1 

//全局变量
//int g_val = 2022;
//static修饰全局变量
//static int g_val = 2022;//static修饰全局变量之后，即使外部声明，一样无法使用

//函数
//int add(int x, int y)
//static修饰函数 - 此时和static修饰全局变量一样，无法被使用
static int add(int x, int y)
{
	return x + y;
}