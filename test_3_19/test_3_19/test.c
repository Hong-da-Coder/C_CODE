#define _CRT_SECURE_NO_WARNINGS 1 

//编写程序数一下，1 到 100 的所有整数中有多少个数字9
//#include<stdio.h>
//int main()
//{
//	int  i = 0;
//	int count = 0;
//	for (i = 0; i < 101; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...... + 1/99 - 1/100的值，并打印结果
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//			flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个整数中最大值
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	//行数
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d  - 打印两位数，不足用空格补充（右对齐）
//											   //%-2d - 打印两位数，不足用空格补充（左对齐）
//		}
//		printf("\n");
//	}
//	return 0;
//}


//写一个函数reverse_string(char* string) （递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不使用C函数库中的字符串操作函数。

//非递归实现
//#define N 10
//#include <stdio.h>
//int My_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void Reverse_string(char* str)
//{
//    int right = My_strlen(str) - 1;
//    int left = 0;
//    while (left < right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[N];
//    scanf("%s", str);
//    printf("翻转前：%s\n", str);//翻转前
//    Reverse_string(str);
//    printf("翻转后：%s", str);//翻转后
//}

//递归实现
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	//判断条件
//	if(my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//
//	printf("%s\n", arr);
//	return 0;
//}

//#define N 10
//#include <stdio.h>
//int My_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void Reverse_string(char* str, int left, int right)
//{
//    char tmp = str[left];
//    str[left] = str[right];
//    str[right] = tmp;
//    if (left < right)
//    {
//        left++;
//        right--;
//        Reverse_string(str, left, right);
//    }    
//}
//int main()
//{
//    char str[N];
//    scanf("%s", str);
//    int left = 0;
//    int right = My_strlen(str) - 1;
//    printf("翻转前：%s\n", str);//翻转前
//    Reverse_string(str, left, right);
//    printf("翻转后：%s", str);//翻转后
//}

/// <summary>
/// 写一个递归函数Digitsum(n)，输入一个非负整数，返回组成他的数字之和

//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = Digitsum(num);
//
//	printf("%d\n", sum);  
//	return 0;
//}

//编写一个函数实现n的k次方，用递归实现
//#include <stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}