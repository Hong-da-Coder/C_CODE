#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>
//��̬�ڴ濪��

//malloc - �ڶ�������ռ�

//int main()
//{
//	//���迪��10�����͵Ŀռ�
//	//int arr[10];//ջ��
//	//��̬�ڴ濪�ٵ�
//	int* p = (int*)malloc(10 * sizeof(int));//mallocֵ���ص�����Ĭ��Ϊvoid*
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		perror("main");//main: xxxxxxx
//		return 0;
//	}
//	//ʹ��
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
//	//���տռ�
//	free(p);
//	p = NULL;//�Լ��ֶ���p��ΪNULL
//
//	return 0;
//}

//calloc - �ڶ�������ռ䣨����ڴ���г�ʼ����

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

//realloc - ���¿��ٿռ�

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
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//������Ҫpָ��Ŀռ��ܴ���Ҫ20��int
//	//realloc�����ռ�
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
	int* p = (int*)realloc(NULL, 40);//����Ĺ���������malloc������ֱ���ڶ�������40���ֽ�

	return 0;
}