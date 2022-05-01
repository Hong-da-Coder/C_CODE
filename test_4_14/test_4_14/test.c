#define _CRT_SECURE_NO_WARNINGS 1 

//X图形

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//公务员面试现场打分，有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分
//输出每组的平均成绩
//输入描述：一行，输入7个整数（0`100),代表7个成绩，用空格分隔
//输出描述：一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行

//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int score = 0;
//	int i = 0;
//	int max = 0;
//	int min = 0;
//
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//
//	printf("%.2f\n", (sum - max - min) / 5.0);
//
//	return 0;
//}

//获得月份的天数

//获得某年某月有多少前天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。

//#include <stdio.h>
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		int day = days[m];
//		if (m == 2)
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//				day += 1;
//
//			printf("%d\n", day);
//	}
//	return 0;
//}

//有序数列插入一个数
//描述：有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列依然是升序
//描述输入：
//第一行输入一个整数（0<=N<=50）
//第二行输入N个升序排列的整数，输入用空格分割的N个整数
//第三行输入域想要进行插入的一个整数
//输出描述：
//输出为一行，N+1个有序排列的整数

#include <stdio.h>

int main()
{
	int arr[51] = { 0 };
	//输入
	int n = 0;
	//n的输入
	scanf("%d", &n);
	int i = 0;
	//n个数的输入
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//输入要插入的数据
	int m = 0;
	scanf("%d", &m);

	//插入数据
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
			arr[i + 1] = arr[i];
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	//处理插入的数据小于所有的数据情况
	if (i < 0)
		arr[0] = m;
	//输出
	for (i = 0; i < n + 1; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}