#define _CRT_SECURE_NO_WARNINGS 1 


//strcpy(,)- �����߿�����ǰ����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1,arr2);
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//����z - ���ؽϴ�ֵ
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//	return 0;
//}


//#include<stdio.h>
////�����������͵ĵط�д����viod����ʾ��������������κ�ֵ��Ҳ����Ҫ����
////����������ˣ�����д������
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - ����2�����ͱ�����ֵ
//
//	printf("����ǰ�� a=%d b=%d\n", a, b);
//	Swap1(a, b);//��ֵ����
//	printf("������ a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;//4���Լ��Ŀռ�
//
//	int* pa = &a;//pa����һ��ָ�����
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
////�����������͵ĵط�д����viod����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - ����2�����ͱ�����ֵ
//
//	printf("����ǰ�� a=%d b=%d\n", a, b);
//	Swap2(&a, &b);//��ַ����
//	printf("������ a=%d b=%d\n", a, b);
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	//2 -> n-1֮�������
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//100 - 200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


////is_leap_year
////����ж������귵��1
////�������꣬����0
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int binary_search(int a[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ�����
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ�λ�õ��±�
//	//�Ҳ�������-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
//	//��������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key ,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//#include<stdio.h>
////������Ƕ�׵��ú���ʽ����
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////��ʽ����
//	//printf("%d\n", strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//printf("%s\n", strcpy(arr1, arr2));
//
//	//printf���ص�ֵ�����ӡ���ַ���
//	printf("%d", printf("%d", printf("%d", 43)));
//
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//���������ں��棬����Ҫ����һ��,��֪
//
//	int Add(int x, int y);
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

//����������һ�����ͷ�ļ���
//���ɳ���
//#include<stdio.h>
//#include "add.h"
//#include "sub.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//	int c = Sub(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}