#define _CRT_SECURE_NO_WARNINGS 1 

//����ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa����һ������ָ�����
//	int** ppa = &pa;//paҲ�Ǳ�����&paȥ��pa���ڴ�����ʼ��ַ
//}

//ָ������ - ����

//int main()
//{
//	int arr[10];//�������� - ������ε����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];
//	return 0;
//}


//�ṹ��
//#include <stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//}s1,s2;//s1��s2��ȫ�ֱ���
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"����",30, "20200534" };//����
//
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}

//#include <stdio.h>
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//}s1,s2;//s1��s2��ȫ�ֱ���
//
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w',20,3.14},"����",30, "20200534" };//����
//
//	//дһ��������ӡs������
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����   ����д����ѡprint2����ַЧ�ʸ���,ռ�ÿռ���
//	return 0;
//}

//�������õĲ���ѹջ
//ջ����һ�����ݽṹ���Ƚ��ĺ����������ȳ�

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//}

//����ĵ���
//������ѡ�� ���ö�ջ�����Կ����������õ��߼�
//#include <stdio.h>
//
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//������ֻ��10��Ԫ�أ�����10��Ԫ��ʱԽ����ʣ�
//	//�����ʵ�arr[12]ʱ�����ַ��i��ͬ,���´�����ѭ��
//
//	//1.i��arr�Ǿֲ��������ֲ������Ƿ���ջ����
//	//ջ���ڴ��ʹ��ϰ���ǣ���ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�
//	//2.���������±����������ַ�ɵ͵��߱仯
//	//3.�ȴ���i��i�Ǹߵ�ַ��arr�ǵ͵�ַ�����Ϸ����л�����ʵ�i
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);
//
//	while (*dest++ = *src++)//'\0' ��asciiֵΪ0�������ʽΪ�٣�����ѭ��
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1,arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	//1.
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	//printf("%d\n", num);
//
//	//2.
//	//const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��Ǳ���
//
//	//int* const p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı�
//	// ����ָ��ָ������ݿ��Ա��ı�
//	//    
//	//*p = 20;//ok
//	//p = &n;//err
//
//	//const int num = 10;
//	////num = 20; //err
//	//const int* p = &num;
//	//int n = 100;
//	////const����ָ�������ʱ��
//	////const �������*����ߣ����ε���ָ�����*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	////      ����ָ����������ǿ����޸ĵ�
//	////*p = 20;
//	//p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}


#include <assert.h>
#include <stdio.h>
//��srcָ������ݿ����Ž�destָ��Ŀռ���
//�ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ�Ӧ�ñ��޸�
//���ʹ��const���� char* src

//strcpy ����⺯�� ��ʵ���ص���Ŀ��ռ����ʼ��ַ

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src);//����
//	assert(dest);
//	char* ret = dest;
//	while (*dest++ = *src++)//'\0' ��asciiֵΪ0�������ʽΪ�٣�����ѭ��
//	{
//		;//hello�Ŀ���
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	printf("%s\n", arr1);
//	//1.Ŀ��ռ���ʼ��ַ 2.Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	printf("%s\n", arr1);
//	return 0;
//}


//ģ��ʵ��strlen
//strlen �����ַ������ȵ�
//my_strlen
//1.const
//2.assert

//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//
////size_t - unsigned int            ������Ϊ����
//size_t my_strlen(const char* resource)
//{
//	size_t count = 0;
//	//assert(resource != NULL);
//	assert(resource);
//	//while (*resource++ != '\0')
//	while(*resource++)
//	{
//		count++;
//	}
//	
//	return count;
//}
//int main()
//{
//	char arr[20] = "hello world";
//	
//	//printf("%d\n", strlen(arr));
//
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}