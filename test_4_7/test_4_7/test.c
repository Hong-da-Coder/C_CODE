#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//ָ�������

//������1

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//������2

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014  ָ��+1����20���ֽ�
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001  ת��Ϊlong int���ͺ�+1����1���ֽ�
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004  ת��Ϊ�޷���ָ��֮�󣬼�1����4���ֽ�
//	return 0;
//}

//������3����Ҫ���С�˴洢��

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}

//������4

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//()���Ƕ��ű��ʽ��������Ϊ�����Ҷ˵���
//                                             //��ά�����ʼ��Ӧ����{}
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);//1
//    return 0;
//}

//������5���������ڴ�֪ʶ��

//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//������6

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//    //��ά�����ŵ���һά����ĵ�ַ
//    return 0;
//} 

//������7

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//������8���Լ���ͼ��������ѣ�

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	//cpp������ָ������� cpp[-1] == *(cpp-1)  cpp[-1][-1] == *(*(cpp-1)-1)
	return 0;
}
