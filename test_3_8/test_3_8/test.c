#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//C�����ǽṹ���ĳ����������
//��Ϊ���֣�˳��ṹ��ѡ��ṹ��ѭ���ṹ
// 
// ��������Ϊ���ࣺ
// 1.�����ж����Ҳ�з�֧��䣺if��䡢switch��䣻
// 2.ѭ��ִ����䣺do while��䡢while��䡢for��䣻
// 3.ת����䣺break��䡢goto��䡢continue��䡢return��䡣
 

//��֧���
//1.if���


//int main()
//{
//	int age = 170;
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���");
//		
//
//	//if (age >= 18)
//	//	printf("����\n");
//	//else 
//	//	printf("δ����\n");//if else��ֻ�ܿ���һ����䣬����{}����Կ��ƶ������
//
//
//	/*if (age >= 18)
//		printf("����\n");*/
//	return 0;
//}

//����else����
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else//else�����������ifƥ��
//            printf("haha\n");
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}

//int main()
//{
//	int mum = 3;
//	//if (num = 5)//����д����ʧ��һ��= �������ɿ������У����Ǵ˴�����ѷ���
//	if(5 == num)//����д�����ײ������󣬶�ʧһ��=ʱ�������޷���ֵ������
//		printf("hehe\n");
//
//	return 0;
//}

//��ϰ
//1.�ж�һ�����Ƿ�Ϊ����
//2.���1-100֮�������

//1.
//int main()
//{
//	int num = 115;
//	if (num % 2 == 1)
//		printf("����\n");
//
//	return 0;
//}

//2.
//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//			a++;
//		}
//		else
//		{
//			a++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//}

//2.switch���
//switch���
//��ʽ��
//switch�����α��ʽ��
//{
//     ����
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch�ڵı��ʽ���������ͳ���
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�����������������\n");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}