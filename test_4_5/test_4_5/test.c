#define _CRT_SECURE_NO_WARNINGS 1 

//一级指针传参
//#include <stdio.h>
//
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p是一级指针
//	print(p, sz);
//	return 0;
//}

//二级指针传参

//#include <stdio.h>
//
//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//把二级指针进行传参呢
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//
//	int* arr[10] = { 0 };
//	test(arr);//传存放一级指针的数组
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//	//函数指针 - 存放函数地址的指针
//	//&函数名 - 取到的就是函数的地址
//	//
//	//pf就是一个函数指针变量
//	int (*pf)(int, int) = &Add;
//
//	//以下两种写法等价
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	return 0;
//}


//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf就是一个函数指针变量
//  //数组名 ！= &数组名   函数名 == &函数名
//	//int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;//Add == pf
//	
//	//int ret = (*pf)(3, 5);//1    此时（*p）中的*可以省略，加上可以增加可读性
//	int ret = pf(3, 5);//2
//	//int ret = Add(3, 5);//3
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1.void(*)() - 函数指针类型
//	//2.(void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3.*(void(*)())0 - 对0地址进行解引用操作
//	//4.(*(void(*)())0)() - 调用0地址处的函数
//
//	return 0;
//}


////1
//void(*signal(int, void(*)(int)))(int);
////typedef - 对类型进行重定义
//typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
//
////2
//pfun_t signal(int, pfun_t);

//1.signal和()先结合，说明signal是函数名
//2.signal函数的第一个参数的类型是int，第二个参数的类型是函数指针
//该函数指针，指向一个参数为int，返回类型是void的函数
//3.signal函数的返回类型也是一个函数指针
//该函数指针，指向一个参数为int，返回类型是void的函数
//signal是一个函数的声明


//函数指针数组 - 存放函数指针的数组
// 
//整型指针 int*;
//整型指针数组 int* arr[5];

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};//pfArr就是函数指针数组
//  
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****    0.exit   *****\n");
//	printf("***********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//计算器 - 计算整型变量的加、减、乘、除
//	do {
//		menu();
//
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//      int x = 0;
//      int y = 0;
//		switch (input)
//		{
//		case1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}

//优化版本
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****    0.exit   *****\n");
//	printf("***********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//计算器 - 计算整型变量的加、减、乘、除
//	do {
//		menu();
//
//		//pfArr就是函数指针数组
//		//转移表 - 《C和指针》
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			int(*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = (*pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//        }
//		else if(input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//
//	return 0;
//}

//回调函数

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****    0.exit   *****\n");
//	printf("***********************\n");
//}
//
//int Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//int main()
//{
//	int input = 0;
//	//计算器 - 计算整型变量的加、减、乘、除
//	do {
//		menu();
//
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}



//冒泡排序
//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//qsort函数的使用 - 排序函数（快速排序）

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//使用qsort函数排序结构体数据
	struct Stu s[3] = { {"张三",30},{"李四",35},{"王老五",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄来排序
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}

Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//模仿qsort实现冒泡排序

void bubble_sort(void* base,
	int sz,
	int width,
	int(*cmp)(const void* e1, const void* e2)
)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟的排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			//arr[j] arr[j+1]
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test3()
{
	//整型数据的排序
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}

void test4()
{
	//使用qsort函数排序结构体数据
	struct Stu s[3] = { {"张三",30},{"李四",35},{"王老五",20} };

	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄来排序
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}

int main()
{
	//test1();
	//test2();
	test3();
	test4();
	return 0;
}


