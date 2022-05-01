#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//循环语句
//while 
//for 
//do while

//while语法结构
//while（表达式）
//      循环语句;
 
//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的终止循环
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
// //在while循环中，break用于永久的终止循环
// //在while循环中，continue的作用是跳过本次循环continue后面的代码
// //直接去判断部分，看是否进行下一次循环
// 
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//getchar - 读取一个字符（包括缓冲区中的\n）

//EOF - end of file - 文件结束标志

//int main()
//{
//	int ch = getchar();
//		printf("%c\n", ch);
//		putchar(ch);//输出一个字符
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>") ;
//	scanf("%s", password);//之所以password前面不加&符号是因为数组本身就是一组地址
//	printf("请确认密码（Y/N）：>");
//	//清理缓冲区
//	//getchar();//处理'\n'  当本身输入有空格时，一个getchar无法完全清理缓冲区
//
//	//清理缓冲区中的多个字符
//	int tmp = 0;
//	while ((tmp = getchar() != '\n'))
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败 \n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d", i);
//
//		i++;//调整部分
//	}
//	return 0;
//}

//for 循环

//for（表达式；表达式2；表达式3）
//    循环语句；
//表达式1为初始化部分；表达式2位条件判断部分；表达式3为调整部分

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		//if (5 == i)
//		//	break;
//		if (5 == i)
//			continue;
//
//		printf("%d", i);
//	}
//
//	return 0;
//}

//不可在for循环体内修改变量，防止for循环失去控制
//循环体内改变变量的例子

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//		i = 5;//此时重新给变量赋值会使代码死循环
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//判断部分的省略 - 判断部分恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)//判断部分变成了赋值，恒为假，一次也不循环
//        k++;
//    return 0;
//}

//do while 循环
//语法：

//do
//{  循环语句
//}while（表达式）;

//int main()
//{
//
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//练习
//1.计算n的阶乘
//2.计算1!+2!+3!+......+10!
//3.在一个有序数组中查找具体的某个数字n

//1.

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//2.
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}  此种写法用了两个for循环，运行效率低

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//		
//	printf("%d\n", sum);
//
//	return 0;
//}

//3.二分查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序的数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid++;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid--;
//		}
//		else
//		{
//			printf("找到了：%d\n", mid);
//			break;
//		}
//
//}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);//数组本身就是地址，不许要加& - 取地址符号
//		//if(password == "123456")//err - 两个字符串比较，不能使用 ==，应该使用strcmp
//		if (strcmp(password, "123456") == 0) 
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均输入错误，退出程序\n");
//	return 0;
//}

//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
// a.猜对了，恭喜你，游戏结束
// b.猜错了，会告诉你，猜大还是猜小了，继续猜，直到猜对为止
//3,游戏可以一直玩，除非退出游戏

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************\n");
	printf("*******    1. play     *******\n");
	printf("*******    0. exit     *******\n");
	printf("******************************\n");
}
void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand 函数返回了一个0 - 32767之间的数字
	//时间 - 时间戳



	int ret = rand() % 100 + 1;//%100的余数是0 - 99，然后+1，范围就是1- 100
	//printf("%d\n", ret);
	
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}
	
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}