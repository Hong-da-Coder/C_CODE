#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}

//C���Գ���������������Ĭ�ϴ���3����
//FILE*     stdin - ��׼������ - ����
//          stdout - ��׼����� - ��Ļ
//          stderr - ��׼������ - ��Ļ

//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//
//	return 0;
//}

//ʹ��fgetc ���ļ����ж�ȡ����
//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}

//fgetc �ӱ�׼��������ȡ
//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//д�ļ� - ��������д
//	fputs("abcdef\n", pf);
//	fputs("qwertyuiop\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	//���ļ� - ��������д
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//
//	//�Ը�ʽ�������ݽ���д�ļ�
//	FILE* pf = fopen("test.dat", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	//fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//���ļ�
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//��ӡ
//	fprintf(stdout, "%s %d %f\n", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//�����ƵĶ�д

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { "abcdef", 10, 5.5f };
//	//�����Ƶ���ʽд
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fread��ȡ

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//�����Ƶ���ʽ��
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//scanf - ��Ա�׼����ĸ�ʽ����������� - stdin
//fscanf - ��������������ĸ�ʽ�����������
//sscanf - ��һ���ַ����ж�ȡһ����ʽ��������

//printf - ��Ա�׼����ĸ�ʽ�������� - stdout
//fprintf - �������������ĸ�ʽ��������
//sprintf - ��һ����ʽ��������ת�����ַ���


//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello", 20, 5.5f };
//	struct S tmp = { 0 };
//
//	char buf[100] = { 0 };
//	//sprintf ��һ����ʽ�������ݣ�ת�����ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//
//	printf("%s\n", buf);
//	//��buf�ַ����л�ԭ��һ���ṹ������
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//
//	printf("%s %d %f", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}

//�ļ��������ȡ
//fseek - �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//ftell - ��֪�ļ�ָ���ƫ����

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�����ļ�ָ��
//	fseek(pf, -2, SEEK_END);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fgetc�����ڶ�ȡ������ʱ�򣬻᷵��EOF
//������ȡ��ʱ�򣬷��ص��Ƕ�ȡ�����ַ���ASCII��ֵ

//fgets�����ڶ�ȡ������ʱ�򣬻᷵��NULL
//������ȡ��ʱ�򣬷��ش���ַ����Ŀռ���ʼ��ַ

//fread�����ڶ�ȡ��ʱ�򣬷��ص���ʵ�ʶ�ȡ��������Ԫ�صĸ���
//�����ȡ����������Ԫ�صĸ���С��ָ����Ԫ�ظ�������������һ�ζ�ȡ��

//#include <stdio.h>
//#include <windows.h>
////VS2013 WIN10��������
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}

