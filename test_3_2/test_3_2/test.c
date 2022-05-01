#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//操作符
//int main()
//{
//	//float a = 9/2.0;
//    //除法时两者有一个为小数，结果以小数输出，若两者都为整数，则以整数输出
//    //若 a 定义为 int 则始终输出整数，舍弃余数
//	int a = 9 % 2;// % - 取模(余)
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	//int 类型为4字节，共32个比特位
//	//所以a的表示为00000000000000000000000000000010
//	// <<表示整体向左平移一位，空出来的地方补0 
//	//此时变为     00000000000000000000000000000100
//	printf("%d\n", b);//此时结果输出为4
//
//	return 0;
//}

//位操作符：
// & - 按位与
// | - 按位或
// ~ - 按位异或

//赋值操作符:
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a += 5;
//
//	a = a - 5;
//	a -= 5;
//
//	a = a % 5;
//	a %= 5;//以上两者等价
//
//	return 0;
//}

//单目操作符：只有1个操作数的操作符
//a+b;
//+有2个操作数，因此成为双目操作符

//int main()
//{
//	//0表示假， 非0就是真
//	int a = 0;
//	printf("%d\n", !a);// !逻辑反操作 输出结果为0或1，即假或真
//
//	if (a)
//	{
//		//如果a为真，运行
//
//	}
//	if (!a)
//	{
//		//如果a为假，运行
//	}
//	a = -5;
//	a = -a;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//sizeof 是一个操作符
//	//计算类型或者变量的大小
//	//sizeof后面的括号可以省略 例如sizeof(a) 和 sizeof a 两者相同
//	// 求变量时可省略，但求类型时不可省略 sizeof(int) √，sizeof int ×
//	//括号可以省略证明sizeof是操作符而非函数
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算数组的总大小，单位是字节  40
//	printf("%d\n", sizeof(arr[0]));//计算数组中单独一个元素的大小  4
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sz);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
	// ~- 按(二进制)位取反
	//把所有二进制位中的数字，1变成0,0变成1，包括符号位
	//整数a 二进制为       00000000000000000000000000000000（补码）
	//   ~a 二进制为       11111111111111111111111111111111（补码）
	// 转换为反码          11111111111111111111111111111110（反码）
	// 转换为原码          10000000000000000000000000000000（原码）
	// printf输出的值是原码
	// 
	// 
	//整数在内存中存储的是补码
	//一个整数的二进制表示有3种：
	//原码  反码  补码
	//-1 用二进制表示      100000000000000000000000000000001（原码）
	//符号位不变，按位取反 111111111111111111111111111111110（反码）
	//补码=反码的二进制+1  111111111111111111111111111111111（补码）
	//这种计算方式针对负数
	//正整数原码、反码、补码 相同

//int main()
//{
//	//int a = 1;
//	//int b = (++a) + (++a) + (++a);//不建议研究这种代码 - 浪费时间研究的是错误的代码
//	//printf("%d\n", b);
//
//	//int a = 10;
//	//int b = a++;//后置++ - 先使用，后++
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//11
//	
//	//int b = ++a;//前置++ - 先++,后使用
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换  在3.14前面加（类型） 
//	//并不推荐使用这种转换语法
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//if(a && b)//&& - 逻辑与：表示并且 两者都为真，则结果为真；两者不都为真，则结果为假
//	//{
//	//	printf("hehe\n");
//	//}
//	int c = a || b;
//	printf("%d\n", c);//|| - 逻辑或：两者有一个为真，则结果为真；两者都为假，则结果为假
//
//	return 0;
//}

//条件操作符（三目操作符）
//exp1?exp2:exp3
//exp1 成立，exp2计算，整个表达式的结果是exp2的结果
//exp1 不成立，exp3计算，整个表达式的结果为exp3的结果

//int main()
//{
//	int a = ;
//	int b = 0;
//	int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;//三目操作符形式，与上式等价
//	printf("%d\n", max);
//
//	return 0;
//}

//逗号表达式：逗号隔开的一串表达式

//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，式从左向右依此计算的
//	//整个表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//	return 0;
//}

//下标引用操作符
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	//此时[]为下标引用操作符，数组下标从0开始，若数组中有10个元素，则下标到9截止
//
//	return 0;
//}

//函数调用操作符
//int main()
//{
//	printf("hehe\n");
//	printf("%d", 100);
//	//调用函数的时候，函数名后面的()就是函数调用操作符
//	return 0;
//}

//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.关键字不能做变量名
// auto - 是自动的，每个局部变量都是auto修饰的
//int main()
//{
//	{
//		int a = 10;//自动创建，自动销毁的 - 自动变量
//		//auto 省略掉了
//		//auto 新的C语言语法中也有其他用法 - 暂时不考虑
//	}
//	return 0;
//}
//register - 寄存器关键字
//int main()
//{
//	//大量、频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议num的值存在放在寄存器中
//
//	return 0;
//}
//计算机中数据可以存储到哪里呢？
//1.硬盘 2.内存 3.高速缓存 4.寄存器 从左往右读取速度越快，造价越高，空间越小
//define 和 include - 预处理指令 不是关键字

//typedef unsigned int u_int;//typedef - 类型重定义（重命名） 将一个复杂类型简单化
////将unsigned int 定义为u_int   
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//static - 静态的
//用法：
//1.static 修饰局部变量
//2.static 修饰全局变量
//3.static 修饰函数
//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//使其作用周期随程序结束
//被static修饰后改变了他的存储类型，其具有的特点不同
//程序不结束，静态变量和全局变量不销毁
// 
//内存会划分为 
//栈区：局部变量、函数的参数
//堆区：动态内存分配的
//静态区：全局变量、static修饰的静态变量

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static修饰全局变量 - 使得这个全局变量只能在自己所在的源文件内部使用
//其他源文件不能使用
//全局变量在整个工程中都可以使用
//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
//本质：static将全局变量的外部链接属性变成了内部连接属性，其他源文件不能连接到这个静态的全局变量了！
//而不是改变了作用域，与static修饰局部变量不同
//函数被static修饰后，使得函数只能在自己所在源文件内部使用,不能其它源文件使用
//本质上：此时static是将函数的外部链接属性变成了内部连接属性！（和static修饰全局变量一样！）

//extern 声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//声明函数
//extern int add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//#define 定义常量和宏

//define 是一个预处理指令
//用法：
//1.define定义符号
// 
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//
//	return 0;
//}

//2.define定义宏
//
//#define ADD(x,y) x+y
#define ADD(x,y) ((x)+(y))
int main()
{
	printf("ADD = %d\n", 4*ADD(2, 3));
	// #define ADD(x,y) x+y时  结果为  4*2+3 = 11
	// #define ADD(x,y) ((x)+(y))  则结果为20
	//此时不可仅仅将x，y视为常量，其可能为表达式，所以要使用（）
	//宏是有参数的，宏的参数是替换

	return 0;
}