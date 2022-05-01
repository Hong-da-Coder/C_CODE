#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址

int main()
{
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a+0));//4/8 a+0 是第一个元素的地址，sizeof(a+0)计算的是地址的大小
	printf("%d\n", sizeof(*a));//4 *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
	printf("%d\n", sizeof(a + 1));//4/8 a+1是第二个元素的地址，sizeof(a+1)计算的地址的大小
	printf("%d\n", sizeof(a[1]));//4 - 计算的是第二个元素的大小

	printf("%d\n", sizeof(&a));//4/8
	printf("%d\n", sizeof(*&a));//16 - 计算的数组的大小
	//&a -- int(*p)[4] = &a
	printf("%d\n", sizeof(&a + 1));//4/8  跳过一个数组，下一个空间的起始地址
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));// 4/8


	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };

	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	printf("%d\n", strlen(*arr));//err   'a' - '97'
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//随机值


	char arr[] = "abcdef";//字符串结束表示是\0
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5

	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4/8
	printf("%d\n", sizeof(p + 1));//4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1    p[0] -> *(p+0)
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p + 1));//4/8
	printf("%d\n", sizeof(&p[0] + 1));//4/8

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4/8  解释：a[0]作为数组名并没有单独放在sizeof内部，
	                                 //也没取地址，所以a[0]就是第一行第一个元素的地址
	                                 //a[0]+1，就是第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4/8  解释：a没有单独放在sizeof内部，
	                                 //a表示二维数组首元素的地址，即：第一行的地址
	                                 //a + 1  就是二维数组第二行的地址  
	printf("%d\n", sizeof(*(a + 1)));//16 解释：a+1是第二行的地址，*(a+1)表示第二行
	printf("%d\n", sizeof(&a[0] + 1));//4/8 即使：a[0]是第一行的数组名
	                                  //&a[0]取出的是第一行的地址 &a[0]+1就是第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 解释：&a[0]+1 就是第二行的地址
	                                     //*(&a[0]+1)就是第二行，所以计算的第二行的元素大小
	printf("%d\n", sizeof(*a));//16 解释：a作为二维数组的数组名，没有&，
	                           //没有单独放在sizeof内部，表示的就是首元素的地址,即第一行的地址
	printf("%d\n", sizeof(a[3]));//16 即使：a[3]其实是第四行的数组名（如果有的话）
	                             //所以其实不存在，也能通过类型计算大小的

	         //sizeof内部的表达式是不计算的
	return 0;
}