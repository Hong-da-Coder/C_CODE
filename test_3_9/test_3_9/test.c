#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//ѭ�����
//while 
//for 
//do while

//while�﷨�ṹ
//while�����ʽ��
//      ѭ�����;
 
//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break�������õ���ֹѭ��
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
// //��whileѭ���У�break�������õ���ֹѭ��
// //��whileѭ���У�continue����������������ѭ��continue����Ĵ���
// //ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
// 
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//getchar - ��ȡһ���ַ��������������е�\n��

//EOF - end of file - �ļ�������־

//int main()
//{
//	int ch = getchar();
//		printf("%c\n", ch);
//		putchar(ch);//���һ���ַ�
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>") ;
//	scanf("%s", password);//֮����passwordǰ�治��&��������Ϊ���鱾�����һ���ַ
//	printf("��ȷ�����루Y/N����>");
//	//��������
//	//getchar();//����'\n'  �����������пո�ʱ��һ��getchar�޷���ȫ��������
//
//	//���������еĶ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar() != '\n'))
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ�� \n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d", i);
//
//		i++;//��������
//	}
//	return 0;
//}

//for ѭ��

//for�����ʽ�����ʽ2�����ʽ3��
//    ѭ����䣻
//���ʽ1Ϊ��ʼ�����֣����ʽ2λ�����жϲ��֣����ʽ3Ϊ��������

//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		//if (5 == i)
//		//	break;
//		if (5 == i)
//			continue;
//
//		printf("%d", i);
//	}
//
//	return 0;
//}

//������forѭ�������޸ı�������ֹforѭ��ʧȥ����
//ѭ�����ڸı����������

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//		i = 5;//��ʱ���¸�������ֵ��ʹ������ѭ��
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)//�жϲ��ֱ���˸�ֵ����Ϊ�٣�һ��Ҳ��ѭ��
//        k++;
//    return 0;
//}

//do while ѭ��
//�﷨��

//do
//{  ѭ�����
//}while�����ʽ��;

//int main()
//{
//
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//��ϰ
//1.����n�Ľ׳�
//2.����1!+2!+3!+......+10!
//3.��һ�����������в��Ҿ����ĳ������n

//1.

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//2.
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}  ����д����������forѭ��������Ч�ʵ�

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//		
//	printf("%d\n", sum);
//
//	return 0;
//}

//3.���ֲ��ҷ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr�������������в���k��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid++;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid--;
//		}
//		else
//		{
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//
//}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);//���鱾����ǵ�ַ������Ҫ��& - ȡ��ַ����
//		//if(password == "123456")//err - �����ַ����Ƚϣ�����ʹ�� ==��Ӧ��ʹ��strcmp
//		if (strcmp(password, "123456") == 0) 
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//		printf("�����������������˳�����\n");
//	return 0;
//}

//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
// a.�¶��ˣ���ϲ�㣬��Ϸ����
// b.�´��ˣ�������㣬�´��ǲ�С�ˣ������£�ֱ���¶�Ϊֹ
//3,��Ϸ����һֱ�棬�����˳���Ϸ

#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************\n");
	printf("*******    1. play     *******\n");
	printf("*******    0. exit     *******\n");
	printf("******************************\n");
}
void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand ����������һ��0 - 32767֮�������
	//ʱ�� - ʱ���



	int ret = rand() % 100 + 1;//%100��������0 - 99��Ȼ��+1����Χ����1- 100
	//printf("%d\n", ret);
	
	//2.������
	int guess = 0;
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
			break;
		}
	}
}
	
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}