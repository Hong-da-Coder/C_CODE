#define _CRT_SECURE_NO_WARNINGS 1 

//ָ����ҵ

//��̬�ڴ濪�٣�
//p = malloc();
//���룺malloc
//ʹ��
//�ͷţ�free(p);
//p = NULL;  p������������ΪNULL����Ҫ�ֶ�ȥ�޸�

//int* p = malloc(40);
//ʹ��pָ���40���ֽڵĿռ�
//free(p);   �Ѹոտ��ٵĿռ��ͷţ���������ϵͳ������ʱp��ŵĻ���֮ǰ���ٵĵ�ַ
//ͨ���ֶ� p = NULL; ����Ƿ�����

//int(* (*F)(int,int) )(int)
//����ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ��
//���ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ���

//�����
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д���������ڸ��ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N);

//1 2 3 
//2 3 4 
//4 5 6 

//1 2 3
//4 5 6
//7 8 9
#include <stdio.h>

//int find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//
//	while (x<r && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("%d %d\n", x, y);
//			return 1;
//		}
//	}
//}

//int find_num(int arr[3][3], int *px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x < *px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			//printf("�ҵ��ˣ�%d %d", x, y);
//			return 1;//�ҵ���
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//N - ���ҵĴ�������������N�Σ� 2N 3N
//	int k = 7;
//	//����ҵ�����1���Ҳ�������0
//	int x = 3;
//	int y = 3;
//	//&x, &y 
//	//1.�������
//	//2.����ֵ
//
//	//int ret = find_num(arr, 3, 3, k);
//	int ret = find_num(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�i = %d j = %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//	//int i = 0;
//	//int j = 0;
//	//int input = 0;
//	//scanf("%d", &input);
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 3;j >= 0; j--)
//	//	{
//	//		if (arr[i][j] < input)
//	//			break;
//	//		else if (arr[i][j] > input)
//	//			continue;
//	//		else
//	//			break;
//	//	}
//	//	if (arr[i][j] == input)
//	//		break;
//	//}
//	//printf("�ҵ���\n");
//
//	 
//
//
//	//O(1)
//	//N - 3 5 7  ������
//	//
//	//ʱ�临�Ӷȣ�������������Ҫ�����Ĵ���N�η������
//	//N*N N*(N-1) -- O(n^2)
//	//����һ�����֣�����˵7
//	// 
//	//�����ķ���������Ҫ��
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		if(arr[i][j] = 7)
//	//		{
//	//		}
//	//	}
//	//}
//	return 0;
//}

//����һ��ָ����10��Ԫ�ص������ָ�룬����ÿ��Ԫ�ص������ָ�룬����ÿ��Ԫ����һ������ָ�룬�ú����ķ���ֵ��int
//������int*
//int((*p)[10])(int*)

//�����
//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//void string_left_rotation(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������һ���ַ�
//		char tmp = *str;//1
//		//2.�����n-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp�������
//		*(str + n - 1) = tmp;
//	}
//}

//#include <assert.h>
////������ת��
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotation(char* str, int k)
//{
//	assert(str);
//
//	int n = strlen(str);
//	//1.�������
//	reverse(str, str + k - 1);
//	//2.�ұ�����
//	reverse(str + k, str + n - 1);
//	//3.��������
//	reverse(str, str + n - 1);
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotation(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//�飺����Ա�������

//����⣺дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD �� s2 = BCDAA������1
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#include <string.h>
//1.������ٷ�
//int is_string_left_rotation(char* str1, char* str2)
//{
//		int i = 0;
//		int n = strlen(str1);
//		for (i = 0; i < n; i++)
//		{
//			//ÿ������һ���ַ�
//			char tmp = *str1;//1
//			//2.�����n-1���ַ���ǰŲ��
//			int j = 0;
//			for (j = 0; j < n - 1; j++)
//			{
//				*(str1 + j) = *(str1 + j + 1);
//			}
//			//3.tmp�������
//			*(str1 + n - 1) = tmp;
//			if (strcmp(str1, str2) == 0)
//			{
//				return 1;
//			}
//		}
//		return 0;
//}

//#include <string.h>
////2.
//int is_string_left_rotation(char* str1, char* str2)
//{
//	//���Ȳ���ȣ��϶�������ת�õ����ַ���
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//
//	//1.str1�ַ����ĺ���׷��һ��str1
//	//AABCDAABCD
//	int len = strlen(str1);
//	strncat(str1, str1, 5);
//
//	//2.�ж�str2�Ƿ�Ϊstr1���Ӵ�
//	char* ret = strstr(str1, str2);
//	return ret != NULL;
//
//	//if (ret == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	return 1;
//	//}
//
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_left_rotation(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}

//void test(char* arr[]); 1
//void test(char** arr);  2
// 1  2 ����д���ȼ� char* arr ÿ�δ����䣨��ռ�ֽ�n�η������ֽڵ����鳤�ȵ��βΣ�����֪������ĳ���
// char** arrÿ��ֻ��������ռ�ֽڳ��ȵı�������֪������ĳ��ȣ���Ҫ�������λ����
//char* arr[5] = {"hello", "bit"};
//test(arr);���θ�test���� 

