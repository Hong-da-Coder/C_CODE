#define _CRT_SECURE_NO_WARNINGS 1 

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printf("%d\n", arr[4]);//[] - �±����ò�����
//	//[] �Ĳ�������2���� arr �� 4
//
//	return 0;
//}

//�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������
//	int ret = Add(a, b);//() - �������ò�����
//	test();
//
//	return 0;
//}


//�ṹ��Ա���ʲ�����
//.  �ṹ��.��Ա��
//-> �ṹ��ָ��->��Ա��

//�ṹ��
// 
//int float char short
//double long 
//
//�飺��������ţ�����
//�ˣ����֣����䣬�Ա�
//

//#include <stdio.h>
//struct Book
//{
//	//�ṹ��ĳ�Ա��������
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	int num = 10;
//	//�ṹ�������.��Ա��
//	struct Book b = { "C����", "C20210509", 55 };
//	struct Book * pb = &b;
//	
//	//�ṹ��ָ��->��Ա��
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", pb->id);
//	printf("�۸�%d\n", pb->price);
//
//	//printf("������%s\n", (*pb).name);
// //   printf("��ţ�%s\n", (*pb).id);
// //   printf("�۸�%d\n", (*pb).price);
//
//	//printf("������%s\n", b.name);
//	//printf("��ţ�%s\n", b.id);
//	//printf("�۸�%d\n", b.price);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	char c = a + b;
//  //��������С��int������ʱ�ᷢ����������
//	//�ضϺ����������������һλ�Ƿ���λ��,������0��������λ��1
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	//-126
//	//����a��b����char���͵ģ���û�дﵽһ��int�Ĵ�С
//	//����ͻᷢ����������
//	
//	printf("%d\n", c);
//
//	return 0;
//}

//0xb6                        1111 1111 1111 1111 1111 1111 1111 1011 0110 ����
                          //  1111 1111 1111 1111 1111 1111 1111 1011 0101 ����
                          //  1000 0000 0000 0000 0000 0000 0000 0100 1010 ԭ��
//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	//���ֻ���c��a��b��������������
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	//��������ͻ�������4�ֽ�
//	return 0;
//}


//����ת������������ת���� - ���������з�Χ���󡢾��ȸ��ߵ�����ת��

//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//���ȼ������˼���˳��
//	int c = a + b + 7;//���ȼ��������ã���Ͼ����˼���˳��
//	return 0;
//}

//�������ʾ��

//#include <stdio.h>
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();//������룬����ȷ������˳��
//    printf("%d\n", answer);//������٣�
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}
//�˴����ڲ�ͬ�������½����ͬ

//VS - 12
//gcc - 10

//����A��B�е����飬����һ����

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}


//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Զ��������

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	//int a = 0x11223344;
//	//char* pc = &a;
//	//*pc = 0;//char���͵�ָ�룬������ֻ�ܷ���һ���ֽ�
//
//	
//	//int* pa = &a;
//	//*pa = 0;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}


//Ұָ��

//int main()
//{
//	//1.�ֲ�����δ��ʼ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ���
//
//	//2.Խ�����
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)//i = 10��ʱ��Խ������ˣ�p����Ұָ����
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	//3.
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();//a�Ǿֲ��������뿪test������������
//					//��ʱ�ٷ���p�б���ĵ�ַ����Ϊ�Ƿ�����
//	*p = 20;
//
//	return 0;
//}

//��ι��Ұָ��
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷż�ʱ��NULL
//4.ָ��ʹ��֮ǰ�����Ч��

//#include <stdio.h>
//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
//
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C���Ա����������ݵ�Խ����Ϊ
//	int* p = NULL;
//	if (p != NULL)
//		*p = 10;
//
//	return 0;
//}

//ָ������

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//ָ���ָ�������ǰ�᣺
//	//����ָ��ָ��ͬһ�ռ�
//	printf("%d\n", &arr[9] - &arr[0]);
//	//ָ��-ָ�� �õ���������ָ��֮���Ԫ�ظ���
//
//	return 0;
//}

//#include <stdio.h>
////������
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
// 
////��һ��ʵ�ַ�ʽ��ǰ�滹�õݹ�ʵ�ֹ���
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}*/
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������
//
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//	//[] ��һ�������� 2��arr������������
//	//a+b
//	//b+a
//	
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	//arr[2] --> *(arr+2) --> *(2+arr) --> 2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p + 2) <==> *(2+p) <==> *(2+arr) ==2[arr]
//	//2[arr] <==> *(2+arr)
//
//	return 0;
//}