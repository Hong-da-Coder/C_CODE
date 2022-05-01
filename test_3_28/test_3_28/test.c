#define _CRT_SECURE_NO_WARNINGS 1 

//二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是一个二级指针变量
//	int** ppa = &pa;//pa也是变量，&pa去除pa在内存中起始地址
//}

//指针数组 - 数组

//int main()
//{
//	int arr[10];//整形数组 - 存放整形的数组就是整形数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5];
//	return 0;
//}


//结构体
//#include <stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//}s1,s2;//s1和s2是全局变量
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30, "20200534" };//对象
//
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}

//#include <stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//}s1,s2;//s1和s2是全局变量
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w',20,3.14},"张三",30, "20200534" };//对象
//
//	//写一个函数打印s的内容
//	print1(s);//传值调用
//	print2(&s);//传址调用   两种写法首选print2，传址效率更高,占用空间少
//	return 0;
//}

//函数调用的参数压栈
//栈，是一种数据结构，先进的后出，后进的先出

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//}

//程序的调试
//调试中选择 调用堆栈，可以看到函数调用的逻辑
//#include <stdio.h>
//
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//数组中只有10个元素，超过10个元素时越界访问，
//	//当访问到arr[12]时，其地址与i相同,导致代码死循环
//
//	//1.i和arr是局部变量，局部变量是放在栈区的
//	//栈区内存的使用习惯是：先使用高地址空间，再使用低地址空间
//	//2.数组随着下标的增长，地址由低到高变化
//	//3.先创建i，i是高地址，arr是低地址，向上访问有机会访问到i
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)//'\0' 的ascii值为0，即表达式为假，跳出循环
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1,arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//printf("%d\n", num);
//
//	//2.
//	//const 修饰变量，这个变量就被称为常变量，不能被修改，但是本质上还是变量
//
//	//int* const p = &num;
//	//int n = 100;
//	////const修饰指针变量的时候
//	////const 如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
//	// 但是指针指向的内容可以被改变
//	//    
//	//*p = 20;//ok
//	//p = &n;//err
//
//	//const int num = 10;
//	////num = 20; //err
//	//const int* p = &num;
//	//int n = 100;
//	////const修饰指针变量的时候
//	////const 如果放在*的左边，修饰的是指针变量*p，表示指针指向的内容，是不能通过指针来改变的
//	////      但是指针变量本身是可以修改的
//	////*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}


#include <assert.h>
#include <stdio.h>
//把src指向的内容拷贝放进dest指向的空间中
//从本质上讲，希望dest指向的内容被修改，src指向的内容不应该被修改
//因此使用const修饰 char* src

//strcpy 这个库函数 其实返回的是目标空间的起始地址

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src);//断言
//	assert(dest);
//	char* ret = dest;
//	while (*dest++ = *src++)//'\0' 的ascii值为0，即表达式为假，跳出循环
//	{
//		;//hello的拷贝
//	}
//	return ret;//返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", arr1);
//	//1.目标空间起始地址 2.源空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	printf("%s\n", arr1);
//	return 0;
//}


//模拟实现strlen
//strlen 是求字符串长度的
//my_strlen
//1.const
//2.assert

//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//
////size_t - unsigned int            避免结果为负数
//size_t my_strlen(const char* resource)
//{
//	size_t count = 0;
//	//assert(resource != NULL);
//	assert(resource);
//	//while (*resource++ != '\0')
//	while(*resource++)
//	{
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	char arr[20] = "hello world";
//	
//	//printf("%d\n", strlen(arr));
//
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}