#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ

int main()
{
	//һά����
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a+0));//4/8 a+0 �ǵ�һ��Ԫ�صĵ�ַ��sizeof(a+0)������ǵ�ַ�Ĵ�С
	printf("%d\n", sizeof(*a));//4 *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a + 1));//4/8 a+1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)����ĵ�ַ�Ĵ�С
	printf("%d\n", sizeof(a[1]));//4 - ������ǵڶ���Ԫ�صĴ�С

	printf("%d\n", sizeof(&a));//4/8
	printf("%d\n", sizeof(*&a));//16 - ���������Ĵ�С
	//&a -- int(*p)[4] = &a
	printf("%d\n", sizeof(&a + 1));//4/8  ����һ�����飬��һ���ռ����ʼ��ַ
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));// 4/8


	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };

	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	printf("%d\n", strlen(*arr));//err   'a' - '97'
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ


	char arr[] = "abcdef";//�ַ���������ʾ��\0
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
	printf("%d\n", strlen(&arr + 1));//���ֵ
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
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5

	//��ά����
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4/8  ���ͣ�a[0]��Ϊ��������û�е�������sizeof�ڲ���
	                                 //Ҳûȡ��ַ������a[0]���ǵ�һ�е�һ��Ԫ�صĵ�ַ
	                                 //a[0]+1�����ǵ�һ�еڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4/8  ���ͣ�aû�е�������sizeof�ڲ���
	                                 //a��ʾ��ά������Ԫ�صĵ�ַ��������һ�еĵ�ַ
	                                 //a + 1  ���Ƕ�ά����ڶ��еĵ�ַ  
	printf("%d\n", sizeof(*(a + 1)));//16 ���ͣ�a+1�ǵڶ��еĵ�ַ��*(a+1)��ʾ�ڶ���
	printf("%d\n", sizeof(&a[0] + 1));//4/8 ��ʹ��a[0]�ǵ�һ�е�������
	                                  //&a[0]ȡ�����ǵ�һ�еĵ�ַ &a[0]+1���ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 ���ͣ�&a[0]+1 ���ǵڶ��еĵ�ַ
	                                     //*(&a[0]+1)���ǵڶ��У����Լ���ĵڶ��е�Ԫ�ش�С
	printf("%d\n", sizeof(*a));//16 ���ͣ�a��Ϊ��ά�������������û��&��
	                           //û�е�������sizeof�ڲ�����ʾ�ľ�����Ԫ�صĵ�ַ,����һ�еĵ�ַ
	printf("%d\n", sizeof(a[3]));//16 ��ʹ��a[3]��ʵ�ǵ����е�������������еĻ���
	                             //������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С��

	         //sizeof�ڲ��ı��ʽ�ǲ������
	return 0;
}