#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strlen

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	//int len = strlen(arr);//strlen读取 '\0' 之前
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//类型是无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//strcpy

//int main()
//{
//	char arr[20] = { 0 };
//	//char* p = "hello";//赋值过去h的地址
//
//	strcpy(arr, "hello");//copy string 
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//strcat

//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找目标字符串中的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加源字符串,包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);//字符串追加(连接)  使用时要保证目标空间有足够的空间去追加存放
//	my_strcat(arr1, arr2);//模拟实现strcat
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = "ABCD";
//	strcat(arr, arr);//不能实现自己追加自己，因为"ABCD"最后的\0被替换了，找不到结束标志
//	return 0;
//}

//strcmp - 字符串比较大小（不是长度）

//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	if (strcmp(p, q) < 0)
//	{
//		printf("p < q\n");
//	}
//	else if (strcmp(p, q) > 0)
//	{
//		printf("p > q\n");
//	}
//	else
//		printf("p == q\n");
//	return;
//}

//模拟实现一个strcmp
//#include <assert.h>
//int my_strcmp(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char* p = "abcdef";//char* 类型的指针存放的是char类型变量的地址
//	char* q = "abbb";
//	int ret = my_strcmp(p, q);
//	
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else
//	{
//		printf("p == q\n");
//	}
//	return 0;
//}

//strncpy

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);//此时需要考虑空间是否足够
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncmp

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//在arr1中查找是否包含arr2数组
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	return 0;
//}

//
//KMP - 字符串查找算法！   - 自己了解
//


//strtok - 切割字符串

//int main()
//{
//	char arr[] = "zio@bitedu.tech";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}

//使用库函数的时候
//调用库函数失败的时候，都会设置错误码
//

//strerror - 返回错误码，所对应的信息（不打印）
//perror - 1.将错误码转换为错误信息 2.打印错误信息（包含了自定义信息）

//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	//打开文件失败的时候，会返回NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	// 
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//字符分类函数

//isdigit - 判断ch是不是数字字符
//islower - 判断ch是不是小写字符

//#include <ctype.h>
//
//int main()
//{
//	char ch = 'a';
//	//isdigit 如果是数字字符，返回非0的值，如果不是数字字符，返回0
//	
//	//int ret = isdigit(ch);
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//字符转换函数

//tolower - 转换为小写字母
//toupper - 转换为大写字母

//#include <ctype.h>
//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//内存操作函数

//memcpy - 只要实现了不重叠拷贝就可以了，而VS中的实现既可以拷贝不重叠，也可以拷贝重叠内存
//memove - 可以处理内存重叠的情况

//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//前 -> 后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后 -> 前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	memcpy(arr1+2, arr1, 20);//20代表字节
//	//my_memcpy(arr2, arr1, 20);
//	//memmove(arr1 + 2, arr1, 20);
//	//my_memmove(arr1 + 2, arr1, 20);
//
//	//打印检查结果
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr2[i]);
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//memcmp - 内存比较

//int main()
//{
//	float arr1[] = { 1.0, 2.0, 3.0, 4.0 };
//	float arr2[] = { 1.0, 3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp - strcmp 实现的方式十分相似
//	printf("%d\n", ret);
//
//	return 0;
//}

//memset - 内存设置

//int main()
//{
//	int arr[10] = { 0 };//20个字节设置成1
//	memset(arr, 1, 20);//以字节为单位设置内存的
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}

//自定义类型

//结构体
//数组是一组相同类型的元素的集合
//结构体也是一些值的集合，结构的每个成员可以是不同类型
