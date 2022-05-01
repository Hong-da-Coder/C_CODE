#define _CRT_SECURE_NO_WARNINGS 1 

//指针作业

//动态内存开辟：
//p = malloc();
//申请：malloc
//使用
//释放：free(p);
//p = NULL;  p不会主动被置为NULL，需要手动去修改

//int* p = malloc(40);
//使用p指向的40个字节的空间
//free(p);   把刚刚开辟的空间释放（还给操作系统），此时p存放的还是之前开辟的地址
//通过手动 p = NULL; 避免非法访问

//int(* (*F)(int,int) )(int)
//函数指针，指向的函数有两个int形参并且返回一个函数指针
//返回的指针指向一个有一个int形参且返回int的函数

//编程题
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在遮掩给的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O(N);

//1 2 3 
//2 3 4 
//4 5 6 

//1 2 3
//4 5 6
//7 8 9
#include <stdio.h>

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//
//	while (x<r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("%d %d\n", x, y);
//			return 1;
//		}
//	}
//}

//int find_num(int arr[3][3], int *px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			//printf("找到了，%d %d", x, y);
//			return 1;//找到了
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//N - 查找的次数最坏的情况下是N次， 2N 3N
//	int k = 7;
//	//如果找到返回1，找不到返回0
//	int x = 3;
//	int y = 3;
//	//&x, &y 
//	//1.传入参数
//	//2.带回值
//
//	//int ret = find_num(arr, 3, 3, k);
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：i = %d j = %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//
//	//int i = 0;
//	//int j = 0;
//	//int input = 0;
//	//scanf("%d", &input);
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 3;j >= 0; j--)
//	//	{
//	//		if (arr[i][j] < input)
//	//			break;
//	//		else if (arr[i][j] > input)
//	//			continue;
//	//		else
//	//			break;
//	//	}
//	//	if (arr[i][j] == input)
//	//		break;
//	//}
//	//printf("找到了\n");
//
//	 
//
//
//	//O(1)
//	//N - 3 5 7  常数次
//	//
//	//时间复杂度：最坏的情况下所需要操作的次数N次方的情况
//	//N*N N*(N-1) -- O(n^2)
//	//查找一个数字，比如说7
//	// 
//	//遍历的方法不满足要求
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		if(arr[i][j] = 7)
//	//		{
//	//		}
//	//	}
//	//}
//	return 0;
//}

//声明一个指向含有10个元素的数组的指针，其中每个元素的数组的指针，其中每个元素是一个函数指针，该函数的返回值是int
//参数是int*
//int((*p)[10])(int*)

//编程题
//字符串左旋
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void string_left_rotation(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋一个字符
//		char tmp = *str;//1
//		//2.后面的n-1个字符往前挪动
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp放在最后
//		*(str + n - 1) = tmp;
//	}
//}

//#include <assert.h>
////三步反转法
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotation(char* str, int k)
//{
//	assert(str);
//
//	int n = strlen(str);
//	//1.左边逆序
//	reverse(str, str + k - 1);
//	//2.右边逆序
//	reverse(str + k, str + n - 1);
//	//3.整体逆序
//	reverse(str, str + n - 1);
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotation(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//书：程序员编程艺术

//编程题：写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD 和 s2 = BCDAA，返回1
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#include <string.h>
//1.暴力穷举法
//int is_string_left_rotation(char* str1, char* str2)
//{
//		int i = 0;
//		int n = strlen(str1);
//		for (i = 0; i < n; i++)
//		{
//			//每次左旋一个字符
//			char tmp = *str1;//1
//			//2.后面的n-1个字符往前挪动
//			int j = 0;
//			for (j = 0; j < n - 1; j++)
//			{
//				*(str1 + j) = *(str1 + j + 1);
//			}
//			//3.tmp放在最后
//			*(str1 + n - 1) = tmp;
//			if (strcmp(str1, str2) == 0)
//			{
//				return 1;
//			}
//		}
//		return 0;
//}

//#include <string.h>
////2.
//int is_string_left_rotation(char* str1, char* str2)
//{
//	//长度不相等，肯定不是旋转得到的字符串
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	//1.str1字符串的后面追加一个str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, 5);
//
//	//2.判断str2是否为str1的子串
//	char* ret = strstr(str1, str2);
//	return ret != NULL;
//
//	//if (ret == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	return 1;
//	//}
//
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_left_rotation(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}

//void test(char* arr[]); 1
//void test(char** arr);  2
// 1  2 两种写法等价 char* arr 每次传递其（所占字节n次方）个字节的数组长度的形参，可以知道数组的长度
// char** arr每次只传递其所占字节长度的变量，不知道数组的长度，需要单独传参或控制
//char* arr[5] = {"hello", "bit"};
//test(arr);传参给test函数 

