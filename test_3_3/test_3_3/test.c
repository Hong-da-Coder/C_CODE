#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//ָ��
//1.�ڴ�����ô��ŵģ�
//2.һ���������ڴ浥Ԫ�Ƕ��ռ䣿

//�������Ϊ32λ��64λ
//32λ - 32����ַ�� - ������ - ͨ�� - ת��Ϊ�����ź�1/0������1������Ϊ0��
//32λ������ڴ�����2^32��������ŵ��ڴ浥Ԫ
//һ���ڴ浥Ԫ�Ĵ�С��1�ֽ�

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�� - 4���ֽ�
//	&a;//�õ�����4���ֽ��еĵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//	printf("%p\n", &a);//%p - ר��������ӡ��ַ
//	int* pa = &a;//pa��������ŵ�ַ�ģ���c�����г�Ϊָ�����
//	//*˵��pa��ָ�����
//	//int ˵��paָ��Ķ�����int����
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", &ch);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//* - �����ò��� *pa - ͨ��pa�ĵ�ַ�ҵ�a
//
//	printf("%d\n", a);
//
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	//ָ��Ĵ�С����ͬ�ģ�ָ���������洢��ַ��
	//ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
	//32λ  32bit - 4byte
	//64λ  64bit - 8byte
	return 0;
}

//�ṹ�������c���Դ����µ�����

//�ṹ��Ĵ���
//����һ��ѧ��

//struct Stu//�ṹ��
//{
//	char name[20];//��Ա����
//	int age;
//	double score;
//};
//
////����һ���������
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct Stu s = {"����",20,85.5};//�ṹ��ĳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//	// . - �ҵ��ṹ��ĳ�Ա������������
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	//              �ṹ��ָ��->��Ա����
//	//��������д���ȼۣ�ֱ���õ��ṹ��Ļ��õ�һ�֣��õ�ָ���ú����֣�������д������
//	return 0;
//}