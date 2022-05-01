#define _CRT_SECURE_NO_WARNINGS 1 

//递归  错误的递归，自己调用自己
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}


//递归
//递归的两个必要条件
// 1.存在限制条件，当满足这个限制条件的时候，递归便不再继续。
// 2.每次递归调用之后越来越接近这个限制条件
// 
//接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);//printf函数可以打印参数部分数字的每一位
//
//	return 0;
//}
//写递归代码的时候：
//1.不能死递归，都有跳出条件，每次递归逼近跳出条件
//2.递归层次不能太深


//练习2 编写函数不允许创建临时变量，求字符串的长度

//#include<string.h>
//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/ // 不允许创建临时变量，此种写法不对
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//['b'] ['i'] ['t'] ['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//练习3：求n的阶乘（不考虑溢出）

//#include<stdio.h>
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}
//有一些功能，可以用迭代的方式实现，也可以用递归的方式实现


//练习4：求第n个斐波那契数
#include<stdio.h>
//int Fib(int n)
//{
//	//递归虽然方便，但是计算效率很低
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}

//递归经典问题：汉诺塔问题，青蛙跳台阶问题
#include <stdio.h>
void Move(char x, char y)
{
	printf("%c -> %c\n", x, y);
}
void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		Move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//借助c柱，将a上的(n-1)个盘子挪到b上
		Move(a, c);//将a上剩余的1个盘子挪动到c上
		Hanoi(n - 1, b, a, c);//借助a柱，将b上(n-1)个盘子挪动到c上
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}