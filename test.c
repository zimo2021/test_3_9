#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ָ�������
//int main()
//{
//	char arr[] = "abcdef";//��ʵΪ"abcdef\0"
//	printf("%d\n", sizeof(arr));//7  �����ַ����Ĵ�С������\0��
//	printf("%d\n", sizeof(arr+0));//4 �����ַ�Ĵ�Сλ4��8���ֽ�
//	printf("%d\n", sizeof(*arr));//1 �ַ�
//	printf("%d\n", sizeof(arr[1]));//1 �ַ�
//	printf("%d\n", sizeof(&arr));//4 ��ַ
//	printf("%d\n", sizeof(&arr+1));//4  ��ַ
//	printf("%d\n", sizeof(&arr[0]+1));//4 ��ַ
//	return 0;
//}����������������������������������������������������

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6  strlen�зŵĶ���ҪΪ��ַ , strlen�Ӹõ�ַ��������ֱ������0��\0;
//	printf("%d\n", strlen(arr+0));//6
//	//printf("%d\n", strlen(*arr));//   *arrΪ�ַ���������Ҫ�󣬳���ҵ�
//	//printf("%d\n", strlen(arr[1]));//  arr[1]Ϊ�ַ���������Ҫ�󣬳���ҵ�
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//&arrΪ�������飬��һ������������󣬽��Ϊ���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//5
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//		printf("%d\n", sizeof(arr));//6
//		printf("%d\n", sizeof(arr+0));//4
//		printf("%d\n", sizeof(*arr));//1
//		printf("%d\n", sizeof(arr[1]));//1
//		printf("%d\n", sizeof(&arr));//4
//		printf("%d\n", sizeof(&arr+1));//4
//		printf("%d\n", sizeof(&arr[0]+1));//4
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr+0));//���ֵ
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr+1));//���ֵ��6
//	printf("%d\n", strlen(&arr[0]+1));//���ֵ��1
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//5
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p+1));//4
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p+1));//4
//	printf("%d\n", sizeof(&p[0]+1));//4
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p+1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ  p�ĵ�ַΪ0x00cffae4  С�˴洢Ϊe4 fa cf 00  strlen ��ͷ��ʼ��  ����0�������������0��
//	printf("%d\n", strlen(&p+1));//���ֵ
//	printf("%d\n", strlen(&p[0]+1));//5
//	return 0;
//}
//��ά����
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0]+1));//4  a[0]+1Ϊ��һ�еڶ���Ԫ�صĵ�ַ��*(a[0]+1)��a[0][1]�ȼ�
//	printf("%d\n", sizeof(*(a[0]+1)));//4
//	printf("%d\n", sizeof(a+1));//4  ����a������Ԫ�ص�ַ����ά�������Ԫ�ص�ַΪ��һ�еĵ�ַ����a+1��Ϊ�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(a+1)));//4--16  *(a+1)����ڶ�������Ԫ��  ����Ϊ16
//	printf("%d\n", sizeof(&a[0]+1));//4  �ڶ��е�ַ  4���ֽ�
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16    �ڶ�������Ԫ�صĴ�С
//	printf("%d\n", sizeof(*a));//4--16  ��һ������Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[3]));//16   �������󣬵������ֽ��ǲ�û�н��뺯���ڲ�������a[3]ϵͳֱ�Ӳ鿴a[3][4] ,Ĭ��һ��Ϊ�ĸ�Ԫ�أ�����Ϊ16
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);//&a+1������������
//	printf("%d,%d", *(a + 1), *(p - 1));//2,5
//	return 0;
//}
//struct trst
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;//�ṹ��ָ��
////��֪p�ĵ�ַΪ0x100000  �ṹ��test���ʹ�СΪ20���ֽڣ���4*5=20��
//int main()
//{
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);//0x1Ϊʮ�����Ƶ�1  �൱��p+1  ����һ���ṹ�壬��20���ֽڣ�ת��Ϊʮ������Ϊ14��1*16^1+4*16^0��,����Ϊ00100014��00��ϵͳ���ģ�
//	printf("%p\n",(unsigned long) p + 0x1);//(unsigned long)��pǿ��ת��Ϊ��������һ����ת��Ϊ��ַ�����Ϊ0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//(unsigneg int*)��pǿ��ת��Ϊ����ָ�룬��һ����4���ֽڣ����Ϊ0x00100004
//	return 0;
//}
