#define _CRT_SECURE_NO_WARNINGS 1 

//�Զ�������

//�ṹ��������

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//�ṹ������Ķ���ͳ�ʼ��

#include <stdio.h>

//struct S
//{
//	char c;
//	int i;
//}s1, s2;
//
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	//struct S s3 = { 'x', 20 };
//	struct B sb = { 3.14, {'w', 100}, 'q' };
//	//.
//	//->
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}


//�ṹ���ڴ����
//���սṹ��Ķ���������ſ��㣩
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
//������ = ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//VS��Ĭ�϶�������ֵΪ8
//3.�ṹ���ܴ�СΪ����������ÿһ����Ա����һ��������������������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ���������������


//struct S
//{
//	int i;//4
//	char c;//1
//};
//
//struct S2
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S3
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S4
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S5
//{
//	char c1;
//	struct S4 s4;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	struct S5 s5 = { 0 };
//	printf("%d\n", sizeof(s));//8
//	printf("%d\n", sizeof(s2));//12
//	printf("%d\n", sizeof(s3));//8
//	printf("%d\n", sizeof(s4));//16
//	printf("%d\n", sizeof(s5));//32
//
//	return 0;
//}


//Ϊʲô�ڴ����?�����μ���
//������˵���ṹ����ڴ������1�ÿռ�����ȡʱ�������

//#pragma pack(2)  //�޸�Ĭ�϶�����
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//8
//	return 0;
//}

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof���ʵ��
// 
//����ὲ
// 
//#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//
//	return 0;
//}

//�ṹ�崫�Σ�����ַ��ѣ���ֵ�Ļ���Ҫռ��̫��ռ䣬���޷��޸�Դ����
//�������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���

//�ṹ��ʵ��λ�ε�����

//λ�ε������ͽṹ�����ƣ���������ͬ��
//1.λ�εĳ�Ա������ int��unsigned int ��signed int ��
//2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡�

//λ�� - ��ʡ�ռ䣬�ڿռ��ϵõ�����ȵĽ�ʡ��������������ڴ��Ĵ�С
//struct A
//{
//	4���ֽ� - 32bit
//	int _a : 2;//_a ��Առ2��bitλ
//	int _b : 5;//_b ��Առ5��bitλ
//	int _c : 10;//_c ��Առ10��bitλ
//	15
//	4���ֽ� - 32bit
//	int _d : 30;//_d ��Առ30��bitλ
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//
//	return 0;
//}

//λ�ε��ڴ����
//1. λ�εĳ�Ա������ int unsigned int signed int ������ char ���������μ��壩����
//2. λ�εĿռ����ǰ�����Ҫ��4���ֽڣ� int ������1���ֽڣ� char ���ķ�ʽ�����ٵġ�
//3. λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//ö��
//����˼�����һһ�о�
//�ѿ��ܵ�ȡֵһһ�о�

//ö�����͵Ķ���

//enum Color//���а�������ö�����͵Ŀ���ȡֵ
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	//enum Color c = BLUE;
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}

//ö�ٵ��ŵ�


//���ϣ������壩
//�������͵Ķ���

//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u = {10};
//	u.i = 1000;
//	u.c = 100;
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//printf("%d\n", sizeof(u)); // 4
//
//	return 0;
//}

//���ϵ��ص�
//1.���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ��
//�����ٵ����������������Ǹ���Ա����
//2.ͬһʱ�����ĳ�Աֻ��ʹ��һ����������Ϊ�޸�һ�������������ı䣩

//�жϵ�ǰ������Ĵ�С�˴洢

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;//���
//	}
//	else
//	{
//		return 0;//С��
//	}
//}


//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//����1 ����С��
//	//����0 ���Ǵ��
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	if (ret == 0)
//		printf("���\n");
//
//	return 0;
//}

//�������С�ļ���
//���ϵĴ�С����������Ա�Ĵ�С��
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������

union Un
{
	char a[5];//5���ֽ�   ��������1���ֽ�
	int i;//4���ֽ�       ��������4���ֽ�
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}