#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>

//��̬�ڴ濪�ٳ����Ĵ���
//1.��NULLָ��Ľ����ò���
//2.�Զ�̬���ٿռ��Խ�����
//3.ʹ��free�ͷŷǶ�̬���ٵĿռ�
//4.ʹ��free�ͷŶ�̬�ڴ��е�һ����
//5.��ͬһ�鶯̬�ڴ����ͷ�
//6.��̬���ٵĿռ������ͷ� - �ڴ�й© - �Ƚ�����

//1.
//int main()
//{
//	int* p = (int*)malloc(1000000000);
//	//mallocҪ���жϣ��жϷ��ص��Ƿ�ΪNULL
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//2.
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//Խ�����
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;//���ٵ���10�����ͣ�40���ֽڣ�ʵ�ʷ�����40������
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.
//int main()
//{
//	int arr[10] = { 0 };//ջ��
//	int* p = arr;
//	//ʹ��
//
//	free(p);//ʹ��free�ͷŷǶ�̬���ٵĿռ�
//	p = NULL;
//
//	return 0;
//}

//4.
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5.
//int main()
//{
//	int* p = (int*)malloc(100);
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//�ͷ�
//	free(p);
//	return 0;
//}

//6.
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//	//ʹ��
//}
//
//int main()
//{
//	test();
//	//....
//	return 0;
//}


//����ı�����

//��Ŀ1

#include <string.h>
//str����GetMemory������ʱ����ֵר�ݣ�����GetMemory�������β�p��str��һ����ʱ������
//��GetMemory�����ڲ���̬����ռ�ĵ�ַ�������p�У�����Ӱ�����str��
//���Ե�GetMemory��������֮��str��Ȼ��NULL,����strcpy��ʧ��
//��GetMemory��������֮���β�p���٣�ʹ�ö�̬���ٵ�100���ֽڴ����ڴ�й¶���޷��ͷ�

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��1��
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��2��
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ2

//GetMemory �����ڲ���������������ջ���ϴ�����
//���˺�����p����Ŀռ�ͻ�������ϵͳ��
//���صĵ�ַû��ʵ�ʵ����壬���ͨ�����صĵ�ַ��ȥ�����ڴ���ǷǷ������ڴ��


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ3

//û���ͷ��ڴ�ռ�
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//free(str);
//	//str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��Ŀ4
//û���ÿ�ָ��
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��������

//struct S
//{
//	int n;//4
//	int arr[];//��Сδ֪
//};
//
//int main()
//{
//	//����arr�Ĵ�С��10������
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));//ǰ4���ֽ��Ǹ�n�ģ���40���ֽڸ�arr
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//����
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//ʹ��
//
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//�ﵽ����������ͬЧ�������д����malloc�����࣬Ч�ʵͣ��ڴ���Ƭ���ӣ�

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		return 1;
	}
	ps->arr = (int*)malloc(10 * sizeof(int));
	if (ps->arr == NULL)
		return 1;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//����
	int* ptr = realloc(ps->arr, 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	//ʹ��

	//�ͷ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}