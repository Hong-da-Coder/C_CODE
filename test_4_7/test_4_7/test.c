#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//指针笔试题

//笔试题1

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//笔试题2

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014  指针+1跳过20个字节
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001  转换为long int类型后+1跳过1个字节
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004  转换为无符号指针之后，加1跳过4个字节
//	return 0;
//}

//笔试题3（需要理解小端存储）

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}

//笔试题4

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//()中是逗号表达式，输出结果为逗号右端的数
//                                             //二维数组初始化应该用{}
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);//1
//    return 0;
//}

//笔试题5（反复看内存知识）

//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//笔试题6

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//    //二维数组存放的是一维数组的地址
//    return 0;
//} 

//笔试题7

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//笔试题8（自己画图，本题很难）

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	//cpp是三级指针的数组 cpp[-1] == *(cpp-1)  cpp[-1][-1] == *(*(cpp-1)-1)
	return 0;
}
