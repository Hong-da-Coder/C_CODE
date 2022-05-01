#define _CRT_SECURE_NO_WARNINGS 1 

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch1[] = "bit";
//	char ch2[] = {'b', 'i', 't'};
//	printf("%d\n", strlen(ch1));
//	printf("%d\n", strlen(ch2));
//
//	return 0;
//}

//一维数组的使用
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//		return 0;
//}


//1.一维数组在内存中是连续存放的
//2.随着数组下标的增长，地址是由低到高变化的
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;//数组名是数组首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//二维数组
//int main()
//{
//	//创建
//	//int arr[3][4];//创建3行4列的数组，其中可以不输入行的数字，但是必须输入列的数字
//	//char ch[3][4];
//	//初始化 - 创建的同时赋值
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};//完全初始化
//	//int arr[3][4] = {1,2,3,4,5,6,7};//不完全初始化，其余部分补0
//	int arr[3][4] = { {1,2},{3,4},{4,5} };//每个括号括起来代表一行，即放在每一行里
//	
//
//	return 0;
//}

//二位数组的使用
//二维数组在内存中也是连续存放的，跨行也是连续的
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	int*p = &arr[0][0];
//
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d]%p ",i, j, &arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}

//void bubble_sort(int arr[],int sz)//
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//计算数组元素的个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序为升序 - 冒泡排序
//	bubble_sort(arr,sz);//数组传参，传递的是数组首元素的地址
//
//	return 0;
//}

//数组名是什么
//数组名是首元素的地址
//但是有2个例外
//1.sizeof（数组名） - 数组名表示整个数组 - 计算的是整个数组的大小，单位是字节
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	//以上虽然两者初始值相同（首元素地址相同），但是下标加1时，两者结果不相同
//	
//
//	//printf("%p\n", &arr);//1 取出的是整个数组的地址
//	//printf("%p\n", arr);//2
//	//printf("%p\n", &arr[0]);//3  2和3写法相同
//
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);
//
//	return 0;
//}

