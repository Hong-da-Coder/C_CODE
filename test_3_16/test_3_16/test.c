#define _CRT_SECURE_NO_WARNINGS 1 


//strcpy(,)- 将后者拷贝到前者中
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1,arr2);
//	printf("%s", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回z - 返回较大值
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//	return 0;
//}


//#include<stdio.h>
////函数返回类型的地方写出：viod，表示这个函数不返回任何值，也不需要返回
////代码出问题了，此种写法不对
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数 - 交换2个整型变量的值
//
//	printf("交换前： a=%d b=%d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("交换后： a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;//4个自己的空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
////函数返回类型的地方写出：viod，表示这个函数不返回任何值，也不需要返回
//
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数 - 交换2个整型变量的值
//
//	printf("交换前： a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//传址调用
//	printf("交换后： a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	//2 -> n-1之间的数字
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//100 - 200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


////is_leap_year
////如果判断是闰年返回1
////不是闰年，返回0
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int binary_search(int a[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到位置的下标
//	//找不到返回-1
//	//数组arr传参，实际传递的不是数组的本身
//	//仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key ,sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//#include<stdio.h>
////函数的嵌套调用和链式访问
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));
//
//	//printf返回的值是其打印的字符数
//	printf("%d", printf("%d", printf("%d", 43)));
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//若函数放在后面，则需要声明一下,告知
//
//	int Add(int x, int y);
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

//函数的声明一般放在头文件中
//集成程序
//#include<stdio.h>
//#include "add.h"
//#include "sub.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//	int c = Sub(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}