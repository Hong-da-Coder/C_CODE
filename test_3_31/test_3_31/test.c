#define _CRT_SECURE_NO_WARNINGS 1 


#include <stdio.h>

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//
//	printf("%d\n", strlen(a));//输出结果为255
//	return 0;
//}


//浮点型的存储 

//int main()
//{
//	int n = 9;
//
//	float* pFloat = (float*)&n;
//  //n - 000000000000000000000000000001001
//  //n(float*) - 0 00000000 00000000000000000001001
//  //            s   E               M
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：&f\n", *pFloat);
//
//
//	return 0;
//}

//int main()
//{
//	float f = 5.5f;
//	//101.1
//	//1.011 * 2^2
//	//s = 0 M = 1.011 E = 2
//	//s = 0 M = 011 E = 2 + 127
//	//
//	//0 10000001 01100000000000000000000
//	//40 b0 00 00
//
//	return 0;
//}