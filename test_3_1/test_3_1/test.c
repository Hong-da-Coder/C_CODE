#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//���������������
//ȫ�ֱ����������������̣��ֲ����������ڱ������ڵľֲ���Χ

//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	printf("n = %d\n", a);
//
//	return 0;
//}

//1.���泣��
//3.14;
//10;
//'a';
//"asdf";

//2. const���εĳ�����
//const int num = 10;//num ���ǳ����� - ���г����ԣ�����ͨ����ֵ���ı������ԣ�
//int main()
//{
//	int num = 10;
//	num = 20;
//	printf("num = %d\n", num);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//10��Ԫ��
//	int n = 10;
//	//int arr2[n] = { 0 };//n�Ǳ����ģ����ܷ������������Ӧ�÷��볣��ֵ
//	//��ʹ��const����֮��Ҳ�����ԣ���ʱn�����ϻ��Ǳ���
//	
//	//3. #define ����ı�ʶ������(���ܱ��޸�)
//	//���� #define MAX = 10000; ��ʱ ���������и�ֵ�޷��ı�MAX��ֵ
//
//	return 0;
//}

//4.ö�ٳ���
	//����һһ�оٵĳ���
    //ö�ٳ���Ĭ�ϴ�0��ʼ��Ȼ�����
    //����ͨ����ö�ٳ����е�һ���ֵ���ı�����ֵ
//enum Sex
//{
//	����ö�����͵ı�����δ������ȡֵ
//	MALE=3,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//
//	enum Sex s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//5.�ַ����� - ������һ����ͬ���͵�Ԫ��
//�ַ����ڽ�β��λ��������һ��\0���ַ�
// \0���ַ����Ľ�����־
//int main()
//{
//    //char arr[] = "hello";
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' ,'\0'};//���� '\0' ��ϵͳ�ռ�����δ֪����ӡʱ������
//    //��ӡ�ַ���         
//   // printf("%s\n", arr1);
//   // printf("%s\n", arr2);
//
//    //���ַ�������
//    int len = strlen("abc");// string length  
//    //ʹ�� strlen ��������Ҫ����ͷ�ļ� #include <string.h>
//    //printf("%d\n", len);
//    printf("%d\n", strlen(arr1));
//    printf("%d\n" ,strlen(arr2));
//                  
//    return 0;
//}

//6.ת���ַ�-��Ҫ�ǳ���ת���ַ�
//  ??) -- ]  ����ĸ��

//int main()
//{
//    printf("%c\n", '\130');//
//    return 0;
//}

//7.ѡ�����

//int main()
//{
//    int input = 0;
//    printf("�ú�ѧϰ");
//    printf("�Ƿ�ú�ѧϰ(1/0)?>:");
//    scanf("%d", &input);
//
//    if (input == 1)
//    {
//        printf("good job");
//    }
//    else
//    {
//        printf("bad job");
//    }
//    return 0;
//}

//8.ѭ�����

//int main()
//{
//    int line = 0;
//    while (line < 30000)
//    {
//        printf("д����:%d\n",line);
//        line++;
//    }
//    if (line == 30000)
//    {
//        printf("good offer\n");
//    }
//    return 0;
//}
//

//9.����
//�ú����ķ�ʽ�����Ҫ���庯��
//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    scanf("%d%d", &num1, &num2);
//    int sum = Add(num1, num2);
//    printf("%d\n", sum);
//
//    return 0;
//}

//10.���� 
//һ����ͬ����Ԫ�صļ���
//10������1-10������
//�����±꣬��0��ʼ

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//   // char ch[5] = { 'a','b','c'};//����ȫ��ʼ����ʣ��Ԫ��Ĭ��Ϊ0
//    int i = 0;
//    while (i < 10)
//    {
//        printf("%d", arr[i]);
//        i++;
//    }
//
//    return 0;
//}