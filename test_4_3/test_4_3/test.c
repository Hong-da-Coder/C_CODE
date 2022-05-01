#define _CRT_SECURE_NO_WARNINGS 1 

//数组指针 - 是指向数组的指针
//整型指针 - 是指向整型的指针
//字符指针 - 是指向字符的指针

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//取出的是数组的地址
//
//	//parr 就是一个数组指针 - 其中存放的是数组的地址
//
//
//	double* d[5];
//	double* (*pd)[5] = &d;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr);
//
//
//	return 0;
//}

//数组是数组首元素的地址
//但是有两个例外
//1.sizeof(数组名) - 数组名表示整个数组，计算的是整个数组大小，单位是字节
//2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//
//	return 0;
//}

//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print2(arr, 3, 5);
//	return 0;
//}



//int(*parr2)[10];     数组指针，该指针能够指向一个数组，数组10个元素，每个元素的类型是int
//int(*parr3[10])[5];  parr3是一个存储数组指针的数组，该数组能够存放10个数组指针
//每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型