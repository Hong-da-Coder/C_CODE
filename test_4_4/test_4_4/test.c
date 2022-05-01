#define _CRT_SECURE_NO_WARNINGS 1  

#include <stdio.h>

//int i;
//int main()
//{
//	i--;
//	//sizeof 这个操作符，算出的结果的类型是unsigned int
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//例如求2+22+222+2222+22222

//int main()
//{
//	//由a组成前n项之和 - 不考虑溢出
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret ;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//写一个函数打印arr数组的内容，不适用数组下标，使用指针。
//arr是一个整型一维数组

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	int i = 0;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	return 0;
//}

//编程题：求出0 - 100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和等于该书本身
//如：153 = 1^3+5^3+3^3,则153是一个“水仙花数”

//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		//1.计算n的位数 - n
//		int n = 1;
//		int tmp = i; 
//		while (tmp / 10 )
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow是用来求次方的函数
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//写一个函数，逆序字符串内容
//#include <assert.h>
//#include <string.h>
//void reverse(char* str)
//{
//	assert(str != NULL);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	 
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//打印一个菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		打印一行
//		空格
//		int j = 0;
//		for (j = 0; j < line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	下
//	for (i = 0; i < line - 1; i++)
//	{
//		打印一行
//		空格
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//编程题：喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以买多少汽水
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//
//	if (money > 0)
//		total = 2 * money - 1;
//	//total = money;
//	//int empty = money;
//	////开始置换
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d\n", total);
//	return 0;
//}

//编程题：调整奇偶数顺序
//题目内容：调整数组使奇数全部都位于偶数前面

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while (left<right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while (left<right && arr[right] & 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//    }
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//编程题：在屏幕上打印杨辉三角

//int main()
//{
//	int arr[10][10]= {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j>=1)
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//编程题：判断谁是凶手
//A：我不是凶手 B：凶手是C C：凶手是D D：C在胡说

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != D) == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//
//	return 0;
//}

//编程题：猜名次
//5位运动员参加10米台跳水比赛，有人让他们预测比赛结果
//A说：B第一，我第三 B说：我第二，E第四 C说：我第一，D第二
//D说：C最后，我第三 E说：我第四，A第一
//确定比赛真实名词

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e ++ )
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//						{
//							if(a * b * c * d * e == 120)
//							printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//    print_arr1(arr, 3, 5);
//    //数组名arr，表示首元素的地址
//    //但是二维数组的首元素是二维数组的第一行
//    //所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//    //可以数组指针来接收
//    print_arr2(arr, 3, 5);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int line = 0;
//    printf("请输入一个奇数\n");
//    while ((scanf("%d", &line)) % 2 != 1)
//    {
//        printf("输入错误，请重新输入\n");
//    }
//
//          //上
//    int i = 0;
//    int mid = line / 2 + 1;
//    for (i = 0; i < mid; i++)
//    {
//        //打印一行
//        //空格
//        int j = 0;
//        for (j = 0; j < mid - i - 1; j++)
//        {
//            printf(" ");
//        }
//        //*
//        for (j = 0; j < 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //下
//    for (i = 0; i < mid - 1; i++)
//    {
//        //打印一行
//        //空格
//        int j = 0;
//        for (j = 0; j < i + 1; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * (mid - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}