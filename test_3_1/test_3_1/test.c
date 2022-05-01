#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//作用域和生命周期
//全局变量作用于整个工程，局部变量作用于变量所在的局部范围

//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	printf("n = %d\n", a);
//
//	return 0;
//}

//1.字面常量
//3.14;
//10;
//'a';
//"asdf";

//2. const修饰的常变量
//const int num = 10;//num 就是常变量 - 具有常属性（不能通过赋值来改变其属性）
//int main()
//{
//	int num = 10;
//	num = 20;
//	printf("num = %d\n", num);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//10个元素
//	int n = 10;
//	//int arr2[n] = { 0 };//n是变量的，不能放在这里，数组中应该放入常量值
//	//即使被const修饰之后也不可以，此时n本质上还是变量
//	
//	//3. #define 定义的标识符常量(不能被修改)
//	//例如 #define MAX = 10000; 此时 后续函数中赋值无法改变MAX的值
//
//	return 0;
//}

//4.枚举常量
	//可以一一列举的常量
    //枚举常量默认从0开始，然后递增
    //可以通过给枚举常量中第一项赋初值来改变其数值
//enum Sex
//{
//	这种枚举类型的变量的未来可能取值
//	MALE=3,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//
//	enum Sex s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//5.字符数组 - 数组是一组形同类型的元素
//字符串在结尾的位置隐藏了一个\0的字符
// \0是字符串的结束标志
//int main()
//{
//    //char arr[] = "hello";
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' ,'\0'};//若无 '\0' 则系统空间内容未知，打印时会乱码
//    //打印字符串         
//   // printf("%s\n", arr1);
//   // printf("%s\n", arr2);
//
//    //求字符串长度
//    int len = strlen("abc");// string length  
//    //使用 strlen 函数是需要引用头文件 #include <string.h>
//    //printf("%d\n", len);
//    printf("%d\n", strlen(arr1));
//    printf("%d\n" ,strlen(arr2));
//                  
//    return 0;
//}

//6.转义字符-需要记常用转义字符
//  ??) -- ]  三字母词

//int main()
//{
//    printf("%c\n", '\130');//
//    return 0;
//}

//7.选择语句

//int main()
//{
//    int input = 0;
//    printf("好好学习");
//    printf("是否好好学习(1/0)?>:");
//    scanf("%d", &input);
//
//    if (input == 1)
//    {
//        printf("good job");
//    }
//    else
//    {
//        printf("bad job");
//    }
//    return 0;
//}

//8.循环语句

//int main()
//{
//    int line = 0;
//    while (line < 30000)
//    {
//        printf("写代码:%d\n",line);
//        line++;
//    }
//    if (line == 30000)
//    {
//        printf("good offer\n");
//    }
//    return 0;
//}
//

//9.函数
//用函数的方式解决需要定义函数
//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    scanf("%d%d", &num1, &num2);
//    int sum = Add(num1, num2);
//    printf("%d\n", sum);
//
//    return 0;
//}

//10.数组 
//一组相同类型元素的集合
//10个整型1-10存起来
//数组下标，从0开始

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//   // char ch[5] = { 'a','b','c'};//不完全初始化，剩余元素默认为0
//    int i = 0;
//    while (i < 10)
//    {
//        printf("%d", arr[i]);
//        i++;
//    }
//
//    return 0;
//}