#define _CRT_SECURE_NO_WARNINGS 1 

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printf("%d\n", arr[4]);//[] - 下标引用操作符
//	//[] 的操作数是2个： arr ， 4
//
//	return 0;
//}

//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int ret = Add(a, b);//() - 函数调用操作符
//	test();
//
//	return 0;
//}


//结构成员访问操作符
//.  结构体.成员名
//-> 结构体指针->成员名

//结构体
// 
//int float char short
//double long 
//
//书：书名，书号，定价
//人：名字，年龄，性别
//

//#include <stdio.h>
//struct Book
//{
//	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	int num = 10;
//	//结构体变量名.成员名
//	struct Book b = { "C语言", "C20210509", 55 };
//	struct Book * pb = &b;
//	
//	//结构体指针->成员名
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("价格：%d\n", pb->price);
//
//	//printf("书名：%s\n", (*pb).name);
// //   printf("书号：%s\n", (*pb).id);
// //   printf("价格：%d\n", (*pb).price);
//
//	//printf("书名：%s\n", b.name);
//	//printf("书号：%s\n", b.id);
//	//printf("价格：%d\n", b.price);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c = a + b;
//  //自身类型小于int，计算时会发生整型提升
//	//截断后进行整型提升（第一位是符号位）,正数补0，负数高位补1
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//-126
//	//发现a和b都是char类型的，都没有达到一个int的大小
//	//这里就会发生整型提升
//	
//	printf("%d\n", c);
//
//	return 0;
//}

//0xb6                        1111 1111 1111 1111 1111 1111 1111 1011 0110 补码
                          //  1111 1111 1111 1111 1111 1111 1111 1011 0101 反码
                          //  1000 0000 0000 0000 0000 0000 0000 0100 1010 原码
//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	//结果只输出c，a和b发生了整型提升
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	//产生运算就会提升到4字节
//	return 0;
//}


//算数转换（类型向上转换） - 向几种类型中范围更大、精度更高的类型转换

//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//优先级决定了计算顺序
//	int c = a + b + 7;//优先级不起作用，结合决定了计算顺序
//	return 0;
//}

//错误代码示例

//#include <stdio.h>
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();//错误代码，不能确定运算顺序
//    printf("%d\n", answer);//输出多少？
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}
//此代码在不同编译器下结果不同

//VS - 12
//gcc - 10

//交换A和B中的数组，两者一样大

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}


//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了，指针走一步，能走多远（步长）

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	//int a = 0x11223344;
//	//char* pc = &a;
//	//*pc = 0;//char类型的指针，解引用只能访问一个字节
//
//	
//	//int* pa = &a;
//	//*pa = 0;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}


//野指针

//int main()
//{
//	//1.局部变量未初始化
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存了
//
//	//2.越界访问
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)//i = 10的时候，越界访问了，p就是野指针了
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	//3.
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//a是局部变量，离开test函数就销毁了
//					//此时再访问p中保存的地址，即为非法访问
//	*p = 20;
//
//	return 0;
//}

//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放及时置NULL
//4.指针使用之前检查有效性

//#include <stdio.h>
//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL;
//
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C语言本身不会检查数据的越界行为
//	int* p = NULL;
//	if (p != NULL)
//		*p = 10;
//
//	return 0;
//}

//指针运算

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//指针和指针相减的前提：
//	//两个指针指向同一空间
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针 得到的是两个指针之间的元素个数
//
//	return 0;
//}

//#include <stdio.h>
////计数器
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
// 
////另一种实现方式（前面还用递归实现过）
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}*/
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名
//
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//	//[] 是一个操作符 2和arr是两个操作数
//	//a+b
//	//b+a
//	
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	//arr[2] --> *(arr+2) --> *(2+arr) --> 2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p + 2) <==> *(2+p) <==> *(2+arr) ==2[arr]
//	//2[arr] <==> *(2+arr)
//
//	return 0;
//}