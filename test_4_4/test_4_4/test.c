#define _CRT_SECURE_NO_WARNINGS 1  

#include <stdio.h>

//int i;
//int main()
//{
//	i--;
//	//sizeof ���������������Ľ����������unsigned int
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
//������2+22+222+2222+22222

//int main()
//{
//	//��a���ǰn��֮�� - ���������
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret ;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//дһ��������ӡarr��������ݣ������������±꣬ʹ��ָ�롣
//arr��һ������һά����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	int i = 0;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	return 0;
//}

//����⣺���0 - 100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮�͵��ڸ��鱾��
//�磺153 = 1^3+5^3+3^3,��153��һ����ˮ�ɻ�����

//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����n��λ�� - n
//		int n = 1;
//		int tmp = i; 
//		while (tmp / 10 )
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//pow��������η��ĺ���
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//дһ�������������ַ�������
//#include <assert.h>
//#include <string.h>
//void reverse(char* str)
//{
//	assert(str != NULL);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	 
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//��ӡһ������
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		��ӡһ��
//		�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	��
//	for (i = 0; i < line - 1; i++)
//	{
//		��ӡһ��
//		�ո�
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����⣺����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�������������ˮ
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//
//	if (money > 0)
//		total = 2 * money - 1;
//	//total = money;
//	//int empty = money;
//	////��ʼ�û�
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d\n", total);
//	return 0;
//}

//����⣺������ż��˳��
//��Ŀ���ݣ���������ʹ����ȫ����λ��ż��ǰ��

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//��ǰ������һ��ż��
//		while (left<right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while (left<right && arr[right] & 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//    }
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//����⣺����Ļ�ϴ�ӡ�������

//int main()
//{
//	int arr[10][10]= {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j>=1)
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����⣺�ж�˭������
//A���Ҳ������� B��������C C��������D D��C�ں�˵

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != D) == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//
//	return 0;
//}

//����⣺������
//5λ�˶�Ա�μ�10��̨��ˮ����������������Ԥ��������
//A˵��B��һ���ҵ��� B˵���ҵڶ���E���� C˵���ҵ�һ��D�ڶ�
//D˵��C����ҵ��� E˵���ҵ��ģ�A��һ
//ȷ��������ʵ����

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e ++ )
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//						{
//							if(a * b * c * d * e == 120)
//							printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//    print_arr1(arr, 3, 5);
//    //������arr����ʾ��Ԫ�صĵ�ַ
//    //���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//    //�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//    //��������ָ��������
//    print_arr2(arr, 3, 5);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int line = 0;
//    printf("������һ������\n");
//    while ((scanf("%d", &line)) % 2 != 1)
//    {
//        printf("�����������������\n");
//    }
//
//          //��
//    int i = 0;
//    int mid = line / 2 + 1;
//    for (i = 0; i < mid; i++)
//    {
//        //��ӡһ��
//        //�ո�
//        int j = 0;
//        for (j = 0; j < mid - i - 1; j++)
//        {
//            printf(" ");
//        }
//        //*
//        for (j = 0; j < 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //��
//    for (i = 0; i < mid - 1; i++)
//    {
//        //��ӡһ��
//        //�ո�
//        int j = 0;
//        for (j = 0; j < i + 1; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * (mid - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}