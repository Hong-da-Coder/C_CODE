#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//C语言是结构化的程序设计语言
//分为三种：顺序结构、选择结构、循环结构
// 
// 控制语句分为三类：
// 1.条件判断语句也叫分支语句：if语句、switch语句；
// 2.循环执行语句：do while语句、while语句、for语句；
// 3.转向语句：break语句、goto语句、continue语句、return语句。
 

//分支语句
//1.if语句


//int main()
//{
//	int age = 170;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死");
//		
//
//	//if (age >= 18)
//	//	printf("成年\n");
//	//else 
//	//	printf("未成年\n");//if else后只能控制一个语句，加上{}后可以控制多条语句
//
//
//	/*if (age >= 18)
//		printf("成年\n");*/
//	return 0;
//}

//悬空else问题
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else//else与离他最近的if匹配
//            printf("haha\n");
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}

//int main()
//{
//	int mum = 3;
//	//if (num = 5)//此种写法丢失了一个= 程序依旧可以运行，但是此错误很难发现
//	if(5 == num)//此种写法不易产生错误，丢失一个=时，变量无法赋值给常量
//		printf("hehe\n");
//
//	return 0;
//}

//练习
//1.判断一个数是否为奇数
//2.输出1-100之间的奇数

//1.
//int main()
//{
//	int num = 115;
//	if (num % 2 == 1)
//		printf("奇数\n");
//
//	return 0;
//}

//2.
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//			a++;
//		}
//		else
//		{
//			a++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//}

//2.switch语句
//switch语句
//形式：
//switch（整形表达式）
//{
//     语句项；
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch内的表达式必须是整型常量
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误，请重新输入\n");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}