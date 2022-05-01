#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}

//C语言程序运行起来，就默认打开了3个流
//FILE*     stdin - 标准输入流 - 键盘
//          stdout - 标准输出流 - 屏幕
//          stderr - 标准错误流 - 屏幕

//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//
//	return 0;
//}

//使用fgetc 从文件流中读取数据
//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}

//fgetc 从标准输入流读取
//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//写文件 - 按照行来写
//	fputs("abcdef\n", pf);
//	fputs("qwertyuiop\n", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//读文件 - 按照行来写
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//
//	//对格式化的数据进行写文件
//	FILE* pf = fopen("test.dat", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	//fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//读文件
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//打印
//	fprintf(stdout, "%s %d %f\n", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//二进制的读写

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//	//二进制的形式写
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fread读取

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//二进制的形式读
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//scanf - 针对标准输入的格式化的输入语句 - stdin
//fscanf - 针对所有输入流的格式化的输入语句
//sscanf - 从一个字符串中读取一个格式化的数据

//printf - 针对标准输出的格式化输出语句 - stdout
//fprintf - 针对所有输出流的格式化输出语句
//sprintf - 把一个格式化的数据转换成字符串


//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello", 20, 5.5f };
//	struct S tmp = { 0 };
//
//	char buf[100] = { 0 };
//	//sprintf 把一个格式化的数据，转换成字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//
//	printf("%s\n", buf);
//	//从buf字符串中还原出一个结构体数据
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}

//文件的随机读取
//fseek - 根据文件指针的位置和偏移量来定位文件指针
//ftell - 告知文件指针的偏移量

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//调整文件指针
//	fseek(pf, -2, SEEK_END);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//让文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fgetc函数在读取结束的时候，会返回EOF
//正常读取的时候，返回的是读取到的字符的ASCII码值

//fgets函数在读取结束的时候，会返回NULL
//正常读取的时候，返回存放字符串的空间起始地址

//fread函数在读取的时候，返回的是实际读取到的完整元素的个数
//如果读取到的完整的元素的个数小于指定的元素个数，这就是最后一次读取了

//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}

