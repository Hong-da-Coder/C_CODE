#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>
//动态内存开辟

//malloc - 在堆区申请空间

//int main()
//{
//	//假设开辟10个整型的空间
//	//int arr[10];//栈区
//	//动态内存开辟的
//	int* p = (int*)malloc(10 * sizeof(int));//malloc值返回的类型默认为void*
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		perror("main");//main: xxxxxxx
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i] --> *(p+i)
//	}
//
//	//回收空间
//	free(p);
//	p = NULL;//自己手动把p置为NULL
//
//	return 0;
//}

//calloc - 在堆区申请空间（会对内存进行初始化）

//int main()
//{
//	//int* p = malloc(40);
//	int* p = calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//realloc - 重新开辟空间

//int main()
//{
//	//int* p = malloc(40);
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//这里需要p指向的空间能打，需要20个int
//	//realloc调整空间
//	//
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

int main()
{
	int* p = (int*)realloc(NULL, 40);//这里的功能类似于malloc，就是直接在堆区开辟40个字节

	return 0;
}