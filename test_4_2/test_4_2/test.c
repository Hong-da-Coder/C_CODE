#define _CRT_SECURE_NO_WARNINGS 1 

//ָ�����
#include <stdio.h>

//int main()
//{
//	char ch = 'q';
//	char* pc = &ch;
//
//	//�������ǰ�"hello world"����ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello world";
//
//	//printf("%c\n", *ps);//h
//	printf("%s\n", ps);
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit,";
//	char* str3 = "hello bit.";//�����ַ����������޸�,��ͬ�����ַ�������ͬһ����ַ
//	char* str4 = "hello bit.";//���ϸ�Ļ�����char*ǰ���const���Ա����޸ĳ����ַ�����������
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	//ָ������
//	//���� - �����д�ŵ���ָ�루��ַ��
//	//int* arr[3];//�������ָ�������
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int* arr[3] = { &a, &b, &c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *arr[i]);
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for(j = 0; j < 5; j++ )
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
