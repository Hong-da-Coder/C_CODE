#define _CRT_SECURE_NO_WARNINGS 1 

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch1[] = "bit";
//	char ch2[] = {'b', 'i', 't'};
//	printf("%d\n", strlen(ch1));
//	printf("%d\n", strlen(ch2));
//
//	return 0;
//}

//һά�����ʹ��
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - �±����ò�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//		return 0;
//}


//1.һά�������ڴ�����������ŵ�
//2.���������±����������ַ���ɵ͵��߱仯��
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;//��������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//��ά����
//int main()
//{
//	//����
//	//int arr[3][4];//����3��4�е����飬���п��Բ������е����֣����Ǳ��������е�����
//	//char ch[3][4];
//	//��ʼ�� - ������ͬʱ��ֵ
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};//��ȫ��ʼ��
//	//int arr[3][4] = {1,2,3,4,5,6,7};//����ȫ��ʼ�������ಿ�ֲ�0
//	int arr[3][4] = { {1,2},{3,4},{4,5} };//ÿ����������������һ�У�������ÿһ����
//	
//
//	return 0;
//}

//��λ�����ʹ��
//��ά�������ڴ���Ҳ��������ŵģ�����Ҳ��������
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	int*p = &arr[0][0];
//
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d]%p ",i, j, &arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}

//void bubble_sort(int arr[],int sz)//
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//��������Ԫ�صĸ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����Ϊ���� - ð������
//	bubble_sort(arr,sz);//���鴫�Σ����ݵ���������Ԫ�صĵ�ַ
//
//	return 0;
//}

//��������ʲô
//����������Ԫ�صĵ�ַ
//������2������
//1.sizeof���������� - ��������ʾ�������� - ���������������Ĵ�С����λ���ֽ�
//2.&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
//

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	//������Ȼ���߳�ʼֵ��ͬ����Ԫ�ص�ַ��ͬ���������±��1ʱ�����߽������ͬ
//	
//
//	//printf("%p\n", &arr);//1 ȡ��������������ĵ�ַ
//	//printf("%p\n", arr);//2
//	//printf("%p\n", &arr[0]);//3  2��3д����ͬ
//
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);
//
//	return 0;
//}

