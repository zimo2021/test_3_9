#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//指针笔试题
//int main()
//{
//	char arr[] = "abcdef";//其实为"abcdef\0"
//	printf("%d\n", sizeof(arr));//7  计算字符串的大小（包括\0）
//	printf("%d\n", sizeof(arr+0));//4 计算地址的大小位4或8个字节
//	printf("%d\n", sizeof(*arr));//1 字符
//	printf("%d\n", sizeof(arr[1]));//1 字符
//	printf("%d\n", sizeof(&arr));//4 地址
//	printf("%d\n", sizeof(&arr+1));//4  地址
//	printf("%d\n", sizeof(&arr[0]+1));//4 地址
//	return 0;
//}——————————————————————————

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6  strlen中放的东西要为地址 , strlen从该地址往后数，直到出现0或\0;
//	printf("%d\n", strlen(arr+0));//6
//	//printf("%d\n", strlen(*arr));//   *arr为字符，不符合要求，程序挂掉
//	//printf("%d\n", strlen(arr[1]));//  arr[1]为字符，不符合要求，程序挂掉
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//&arr为整个数组，加一则跳到数组最后，结果为随机值
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
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr+0));//随机值
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr+1));//随机值减6
//	printf("%d\n", strlen(&arr[0]+1));//随机值减1
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
//	printf("%d\n", strlen(&arr+1));//随机值
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
//	printf("%d\n", strlen(&p));//随机值  p的地址为0x00cffae4  小端存储为e4 fa cf 00  strlen 从头开始数  遇到0则结束（不包含0）
//	printf("%d\n", strlen(&p+1));//随机值
//	printf("%d\n", strlen(&p[0]+1));//5
//	return 0;
//}
//二维数组
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0]+1));//4  a[0]+1为第一行第二个元素的地址，*(a[0]+1)与a[0][1]等价
//	printf("%d\n", sizeof(*(a[0]+1)));//4
//	printf("%d\n", sizeof(a+1));//4  其中a代表首元素地址（二维数组的首元素地址为第一行的地址），a+1则为第二行的地址
//	printf("%d\n", sizeof(*(a+1)));//4--16  *(a+1)代表第二行所有元素  所以为16
//	printf("%d\n", sizeof(&a[0]+1));//4  第二行地址  4个字节
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16    第二行所有元素的大小
//	printf("%d\n", sizeof(*a));//4--16  第一行所有元素的大小
//	printf("%d\n", sizeof(a[3]));//16   看似有误，但计算字节是并没有进入函数内部，所以a[3]系统直接查看a[3][4] ,默认一行为四个元素，所以为16
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);//&a+1跳过整个数组
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
//}*p;//结构体指针
////以知p的地址为0x100000  结构体test类型大小为20个字节（即4*5=20）
//int main()
//{
//	p = (struct test*)0x100000;
//	printf("%p\n", p + 0x1);//0x1为十六进制的1  相当于p+1  跳过一个结构体，即20个字节，转换为十六进制为14（1*16^1+4*16^0）,所以为00100014（00是系统补的）
//	printf("%p\n",(unsigned long) p + 0x1);//(unsigned long)将p强制转换为整数，加一后再转换为地址，结果为0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//(unsigneg int*)将p强制转换为整形指针，加一跳过4个字节，结果为0x00100004
//	return 0;
//}
