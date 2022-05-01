#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strlen

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	//int len = strlen(arr);//strlen��ȡ '\0' ֮ǰ
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//�������޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}

//strcpy

//int main()
//{
//	char arr[20] = { 0 };
//	//char* p = "hello";//��ֵ��ȥh�ĵ�ַ
//
//	strcpy(arr, "hello");//copy string 
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//strcat

//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.��Ŀ���ַ����е�\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.׷��Դ�ַ���,����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);//�ַ���׷��(����)  ʹ��ʱҪ��֤Ŀ��ռ����㹻�Ŀռ�ȥ׷�Ӵ��
//	my_strcat(arr1, arr2);//ģ��ʵ��strcat
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = "ABCD";
//	strcat(arr, arr);//����ʵ���Լ�׷���Լ�����Ϊ"ABCD"����\0���滻�ˣ��Ҳ���������־
//	return 0;
//}

//strcmp - �ַ����Ƚϴ�С�����ǳ��ȣ�

//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	if (strcmp(p, q) < 0)
//	{
//		printf("p < q\n");
//	}
//	else if (strcmp(p, q) > 0)
//	{
//		printf("p > q\n");
//	}
//	else
//		printf("p == q\n");
//	return;
//}

//ģ��ʵ��һ��strcmp
//#include <assert.h>
//int my_strcmp(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char* p = "abcdef";//char* ���͵�ָ���ŵ���char���ͱ����ĵ�ַ
//	char* q = "abbb";
//	int ret = my_strcmp(p, q);
//	
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else
//	{
//		printf("p == q\n");
//	}
//	return 0;
//}

//strncpy

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);//��ʱ��Ҫ���ǿռ��Ƿ��㹻
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncmp

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//��arr1�в����Ƿ����arr2����
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%s\n", ret);
//	}
//	return 0;
//}

//
//KMP - �ַ��������㷨��   - �Լ��˽�
//


//strtok - �и��ַ���

//int main()
//{
//	char arr[] = "zio@bitedu.tech";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//ret = strtok(tmp, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}

//ʹ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ�ܵ�ʱ�򣬶������ô�����
//

//strerror - ���ش����룬����Ӧ����Ϣ������ӡ��
//perror - 1.��������ת��Ϊ������Ϣ 2.��ӡ������Ϣ���������Զ�����Ϣ��

//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	//���ļ�ʧ�ܵ�ʱ�򣬻᷵��NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	// 
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�ַ����ຯ��

//isdigit - �ж�ch�ǲ��������ַ�
//islower - �ж�ch�ǲ���Сд�ַ�

//#include <ctype.h>
//
//int main()
//{
//	char ch = 'a';
//	//isdigit ����������ַ������ط�0��ֵ��������������ַ�������0
//	
//	//int ret = isdigit(ch);
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ַ�ת������

//tolower - ת��ΪСд��ĸ
//toupper - ת��Ϊ��д��ĸ

//#include <ctype.h>
//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}


//�ڴ��������

//memcpy - ֻҪʵ���˲��ص������Ϳ����ˣ���VS�е�ʵ�ּȿ��Կ������ص���Ҳ���Կ����ص��ڴ�
//memove - ���Դ����ڴ��ص������

//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//ǰ -> ��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�� -> ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	memcpy(arr1+2, arr1, 20);//20�����ֽ�
//	//my_memcpy(arr2, arr1, 20);
//	//memmove(arr1 + 2, arr1, 20);
//	//my_memmove(arr1 + 2, arr1, 20);
//
//	//��ӡ�����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr2[i]);
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//memcmp - �ڴ�Ƚ�

//int main()
//{
//	float arr1[] = { 1.0, 2.0, 3.0, 4.0 };
//	float arr2[] = { 1.0, 3.0 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp - strcmp ʵ�ֵķ�ʽʮ������
//	printf("%d\n", ret);
//
//	return 0;
//}

//memset - �ڴ�����

//int main()
//{
//	int arr[10] = { 0 };//20���ֽ����ó�1
//	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ��
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}

//�Զ�������

//�ṹ��
//������һ����ͬ���͵�Ԫ�صļ���
//�ṹ��Ҳ��һЩֵ�ļ��ϣ��ṹ��ÿ����Ա�����ǲ�ͬ����
