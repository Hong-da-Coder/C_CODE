#define _CRT_SECURE_NO_WARNINGS 1 

//��д������һ�£�1 �� 100 �������������ж��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int  i = 0;
//	int count = 0;
//	for (i = 0; i < 101; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//����1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...... + 1/99 - 1/100��ֵ������ӡ���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//			flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//��10�����������ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	//����
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d  - ��ӡ��λ���������ÿո񲹳䣨�Ҷ��룩
//											   //%-2d - ��ӡ��λ���������ÿո񲹳䣨����룩
//		}
//		printf("\n");
//	}
//	return 0;
//}


//дһ������reverse_string(char* string) ���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲�ʹ��C�������е��ַ�������������

//�ǵݹ�ʵ��
//#define N 10
//#include <stdio.h>
//int My_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void Reverse_string(char* str)
//{
//    int right = My_strlen(str) - 1;
//    int left = 0;
//    while (left < right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[N];
//    scanf("%s", str);
//    printf("��תǰ��%s\n", str);//��תǰ
//    Reverse_string(str);
//    printf("��ת��%s", str);//��ת��
//}

//�ݹ�ʵ��
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	//�ж�����
//	if(my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//
//	printf("%s\n", arr);
//	return 0;
//}

//#define N 10
//#include <stdio.h>
//int My_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void Reverse_string(char* str, int left, int right)
//{
//    char tmp = str[left];
//    str[left] = str[right];
//    str[right] = tmp;
//    if (left < right)
//    {
//        left++;
//        right--;
//        Reverse_string(str, left, right);
//    }    
//}
//int main()
//{
//    char str[N];
//    scanf("%s", str);
//    int left = 0;
//    int right = My_strlen(str) - 1;
//    printf("��תǰ��%s\n", str);//��תǰ
//    Reverse_string(str, left, right);
//    printf("��ת��%s", str);//��ת��
//}

/// <summary>
/// дһ���ݹ麯��Digitsum(n)������һ���Ǹ����������������������֮��

//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = Digitsum(num);
//
//	printf("%d\n", sum);  
//	return 0;
//}

//��дһ������ʵ��n��k�η����õݹ�ʵ��
//#include <stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}