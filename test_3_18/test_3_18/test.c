#define _CRT_SECURE_NO_WARNINGS 1 

//�ݹ�  ����ĵݹ飬�Լ������Լ�
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}


//�ݹ�
//�ݹ��������Ҫ����
// 1.���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
// 2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
// 
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4
//#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//�ݹ� - �����Լ������Լ�
//	print(num);//printf�������Դ�ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}
//д�ݹ�����ʱ��
//1.�������ݹ飬��������������ÿ�εݹ�ƽ���������
//2.�ݹ��β���̫��


//��ϰ2 ��д��������������ʱ���������ַ����ĳ���

//#include<string.h>
//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/ // ����������ʱ����������д������
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//['b'] ['i'] ['t'] ['\0']
//	//
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//��ϰ3����n�Ľ׳ˣ������������

//#include<stdio.h>
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}
//��һЩ���ܣ������õ����ķ�ʽʵ�֣�Ҳ�����õݹ�ķ�ʽʵ��


//��ϰ4�����n��쳲�������
#include<stdio.h>
//int Fib(int n)
//{
//	//�ݹ���Ȼ���㣬���Ǽ���Ч�ʺܵ�
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ݹ龭�����⣺��ŵ�����⣬������̨������
#include <stdio.h>
void Move(char x, char y)
{
	printf("%c -> %c\n", x, y);
}
void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		Move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//����c������a�ϵ�(n-1)������Ų��b��
		Move(a, c);//��a��ʣ���1������Ų����c��
		Hanoi(n - 1, b, a, c);//����a������b��(n-1)������Ų����c��
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}