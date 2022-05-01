#define _CRT_SECURE_NO_WARNINGS 1 

//指针进阶
#include <stdio.h>

//int main()
//{
//	char ch = 'q';
//	char* pc = &ch;
//
//	//本质上是把"hello world"这个字符串的首字符的地址存储在了ps中
//	char* ps = "hello world";
//
//	//printf("%c\n", *ps);//h
//	printf("%s\n", ps);
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit,";
//	char* str3 = "hello bit.";//常量字符串，不可修改,相同常量字符串共用同一个地址
//	char* str4 = "hello bit.";//更严格的话可在char*前面加const，以避免修改常量字符串引发错误
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	//指针数组
//	//数组 - 数组中存放的是指针（地址）
//	//int* arr[3];//存放整形指针的数组
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int* arr[3] = { &a, &b, &c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *arr[i]);
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for(j = 0; j < 5; j++ )
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

