#define _CRT_SECURE_NO_WARNINGS 1 
//д���뽫�����������Ӵ�С���
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//��� - �Ӵ�С
//	printf("%d %d %d", a, b, c);
// return 0;
//}

//дһ�������ӡ1 - 100֮������3�ı���������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//���������������������������Լ��
//#include<stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int max = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//		max = n;
//	else
//		max = m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)//if ���ж���䣬����ѭ����break������ǰѭ��
//		{
//			printf("���Լ�����ǣ� %d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//��ӡ1000 - 2000��֮�������
//#include <stdio.h>
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1.��4���������ܱ�100����������
//		//2.�ܱ�400����
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//дһ�����룺��ӡ100 - 200֮�������
//���� - ����
//ֻ�ܱ�1������������
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;

	//m = a*b
	//a��b��һ��������һ�������� <= m��ƽ����
	//sqrt - ��ƽ���ĺ���  ��Ҫ����ͷ�ļ� #include <math.h>
	
	//for (i = 100; i <= 200; i++)
	for (i = 101; i <= 200; i+=2)//��������ż��������Ч�ʸ���
	{
		//����i�Ƿ�Ϊ����
		//2 -> i-1֮�������ȥ�Գ�i�����ܲ�������
		int j = 0;
		//for (j = 2; j < i-1; j++)
		for (j = 2; j <= sqrt(i); j++)//�Ż���Ĵ��룬�Գ��������٣�Ч�ʸ���
		{  
			if (i % j == 0)
			{
				break;
			}
			
		}
		if (i % j != 0)
			{
				count++;
				printf("%d ", i);//����
			}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//go to���
//#include<stdio.h>
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծͻ���1�����ڹػ���������룺��������ȡ���ػ���

//shutdown -s -t 60   60s��ػ�
//shutdown -a    ȡ���ػ�
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//�ػ�
//	//c�����ṩ��һ��������system���� - ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");// system - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺����������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//strcmp() - string compare   �����ַ����Ƚϲ���ֱ����==
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}