#define _CRT_SECURE_NO_WARNINGS 1 

//һ��ָ�봫��
//#include <stdio.h>
//
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p��һ��ָ��
//	print(p, sz);
//	return 0;
//}

//����ָ�봫��

//#include <stdio.h>
//
//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//�Ѷ���ָ����д�����
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	int* arr[10] = { 0 };
//	test(arr);//�����һ��ָ�������
//	printf("%d\n", a);
//
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
//	//
//	//pf����һ������ָ�����
//	int (*pf)(int, int) = &Add;
//
//	//��������д���ȼ�
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	return 0;
//}


//void test(char* str)
//{
//
//}
//
//int main()
//{
//	void (*pt)(char*) = &test;
//
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//pf����һ������ָ�����
//  //������ ��= &������   ������ == &������
//	//int(*pf)(int, int) = &Add;
//	int(*pf)(int, int) = Add;//Add == pf
//	
//	//int ret = (*pf)(3, 5);//1    ��ʱ��*p���е�*����ʡ�ԣ����Ͽ������ӿɶ���
//	int ret = pf(3, 5);//2
//	//int ret = Add(3, 5);//3
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1.void(*)() - ����ָ������
//	//2.(void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3.*(void(*)())0 - ��0��ַ���н����ò���
//	//4.(*(void(*)())0)() - ����0��ַ���ĺ���
//
//	return 0;
//}


////1
//void(*signal(int, void(*)(int)))(int);
////typedef - �����ͽ����ض���
//typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//
////2
//pfun_t signal(int, pfun_t);

//1.signal��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2.signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ��
//�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//3.signal�����ķ�������Ҳ��һ������ָ��
//�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//signal��һ������������


//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*;
//����ָ������ int* arr[5];

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};//pfArr���Ǻ���ָ������
//  
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****    0.exit   *****\n");
//	printf("***********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//������ - �������ͱ����ļӡ������ˡ���
//	do {
//		menu();
//
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//      int x = 0;
//      int y = 0;
//		switch (input)
//		{
//		case1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}

//�Ż��汾
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****    0.exit   *****\n");
//	printf("***********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	//������ - �������ͱ����ļӡ������ˡ���
//	do {
//		menu();
//
//		//pfArr���Ǻ���ָ������
//		//ת�Ʊ� - ��C��ָ�롷
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			int(*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
//
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = (*pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//        }
//		else if(input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//	} while (input);
//
//	return 0;
//}

//�ص�����

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.add   2.sub*****\n");
//	printf("*****3.mul   4.div*****\n");
//	printf("*****    0.exit   *****\n");
//	printf("***********************\n");
//}
//
//int Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//
//int main()
//{
//	int input = 0;
//	//������ - �������ͱ����ļӡ������ˡ���
//	do {
//		menu();
//
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}



//ð������
//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//qsort������ʹ�� - ����������������

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"����",30},{"����",35},{"������",20} };
	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}

Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//ģ��qsortʵ��ð������

void bubble_sort(void* base,
	int sz,
	int width,
	int(*cmp)(const void* e1, const void* e2)
)
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			//arr[j] arr[j+1]
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test3()
{
	//�������ݵ�����
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

void test4()
{
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"����",30},{"����",35},{"������",20} };

	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}

int main()
{
	//test1();
	//test2();
	test3();
	test4();
	return 0;
}


