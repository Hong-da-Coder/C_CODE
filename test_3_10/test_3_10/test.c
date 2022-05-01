#define _CRT_SECURE_NO_WARNINGS 1 
//写代码将三个整数按从大到小输出
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//调整顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出 - 从大到小
//	printf("%d %d %d", a, b, c);
// return 0;
//}

//写一个代码打印1 - 100之间所有3的倍数的数字
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//#include<stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//		max = n;
//	else
//		max = m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)//if 是判断语句，不是循环，break跳出当前循环
//		{
//			printf("最大公约数就是： %d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//打印1000 - 2000年之间的闰年
//#include <stdio.h>
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1.被4整除，不能被100整除是闰年
//		//2.能被400整除
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//写一个代码：打印100 - 200之间的素数
//素数 - 质数
//只能被1和他本身整除
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;

	//m = a*b
	//a和b中一定至少有一个数字是 <= m开平方的
	//sqrt - 开平方的函数  需要引用头文件 #include <math.h>
	
	//for (i = 100; i <= 200; i++)
	for (i = 101; i <= 200; i+=2)//跳过所有偶数，代码效率更高
	{
		//按断i是否为素数
		//2 -> i-1之间的数字去试除i，看能不能整除
		int j = 0;
		//for (j = 2; j < i-1; j++)
		for (j = 2; j <= sqrt(i); j++)//优化后的代码，试除次数变少，效率更高
		{  
			if (i % j == 0)
			{
				break;
			}
			
		}
		if (i % j != 0)
			{
				count++;
				printf("%d ", i);//素数
			}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//go to语句
//#include<stdio.h>
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//关机程序
//只要运行起来，电脑就会在1分钟内关机，如果输入：我是猪，就取消关机！

//shutdown -s -t 60   60s后关机
//shutdown -a    取消关机
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//关机
//	//c语言提供了一个函数：system（） - 执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");// system - stdlib.h
//
//again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入：我是猪，即可取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//strcmp() - string compare   两个字符串比较不能直接用==
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}