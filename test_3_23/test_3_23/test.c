#define _CRT_SECURE_NO_WARNINGS 1 

//#include <stdio.h>
//
//// << - 左移操作符 - 左边丢弃，右边补0
//// >> - 右移操作符 
////1.算术右移： 右边丢弃，左边补原符号位
////2.逻辑右移： 右边丢弃，左边补0
//int main()
//{
//	int a = 2;
//	//把a的二进制位向左移动一位
//	//int b = a << 1;
//
//	//把a的二进制位向右移动一位
//	int b = a >> 1;
//	//当前的右移操作符使用的：算术右移
//	printf("b = %d\n", a);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//& - 按（二进制）位与
//	//int c = a & b;
//	//a - 00000000000000000000000000000011
//	//b - 00000000000000000000000000000101
//	//c - 00000000000000000000000000000001
//	//printf("%d\n", c);
//
//	// | - 按（二进制）位或
//	//int c = a | b;
//	//a - 00000000000000000000000000000011
//	//b - 00000000000000000000000000000101
//	//c - 00000000000000000000000000000111
//	//printf("%d\n", c);
//
//	// ^ - 按（二进制）位异或
//	//对应的二进制位进行异或
//	//规则：相同为0，相异为1
//
//	int c = a ^ b;
//	//a - 00000000000000000000000000000011
//	//b - 00000000000000000000000000000101
//	//c - 00000000000000000000000000000110
//	printf("%d\n", c);
//	//他们的操作数必须是整数
// }


//交换两个int变量的值，不能使用第三个变量。即a=3，b=5，交换之后a=5，b=3
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	//交换
//	//原理：
//	//0 ^ a = a
//	//a ^ a = 0
//	//a ^ b ^ b = a ^ 0 = a
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	////数值太大会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	return 0;
//}

//练习：
//编写代码实现：求一个整数存储在内存中的二进制中1的个数
//用递归怎么写？

//#include <stdio.h>
//int main()
//{
//	int input = 0; 
//	int count = 0;
//	int i = 0;
//	scanf("%d", &input);
//	for (i = 1; i < 32; i++)
//	{
//		int ret = input & 1;
//		if (ret == 1)
//			count++;
//		input >>= 1;
//	}
//	printf("%d\n", count);
//	return 0; 
//}


//#include <stdio.h>
//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	//sizeof（）中放的表达式不参与运算
//	printf("%d\n", s);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000000 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//以上计算方式仅限于负数，正数原码、反码、补码三者相同
//	//~ 按位取反
//	int b = ~a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 13;
//	//1的二进制位向左移动四位，然后赋值给a
//	a = a | (1 << 4);
//	printf("a = %d\n", a);
//	//00000000000000000000000000001101 - a
//	//00000000000000000000000000010000 - 1<<4
//	//00000000000000000000000000011101 - a | (1 << 4)
//
//	//a = a & ~(1 << 4);
//	//也可使用 
//	a = a ^ (1 << 4);
//	printf("a = %d\n", a);
//	//00000000000000000000000000001101 - a
//	//00000000000000000000000000010000 - 1<<4
//	//11111111111111111111111111101111 - ~(1<<4)
//	//00000000000000000000000000001101 - a == a & ~(1 << 4)
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，后使用
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);// & - 取地址操作符
//	int * pa = &a;// pa 是用来存放地址的 - pa就是一个指针变量
//	*pa = 20;// * - 解引用操作福 - 间接访问操作符
//	printf("%d\n", a);//20
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//if(a == b)
//	//if(a != b)
//	//if(a < b)
//	return 0;
//	// =  赋值  == 判断相等
//}

//比较2个字符串相等，不能使用 ==


//360笔试题
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	// 1 2 3 4
//	// 2 2 3 4
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//
//	//三目操作符
//	b = (a > 5 ? 1 : -1);
//	return 0
//}

//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//逗号表达式 - 要从左向右依此计算，但是整个表达式的结果是最后一个表达式的结果
//
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//
//	printf("%d\n", d);
//	return 0;
//}