#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "test.h"



//int main()
//{
//    int a = 0x11223344;
//
//    char* pc = (char*)&a;
//    *pc = 0;
//
//    printf("0x%x\n", a);
//
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 0 }; //40�ֽ�
//
//	char* pa = arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		*(pa + i) = 1; //ÿ�θ�1���ֽ�
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//int* p = arr; // arr��������ʾ��Ԫ�ص�ַ &arr[0] - int*
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = 1; // 0x00 00 00 01
//	//	//+1����1������
//	//}
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344; //8��������λ��1�ֽ�
//
//	int* pa = &a;
//	*pa = 1; //����4�ֽ� ���������ڴ��п���
//
//	char* pc = &a;
//	*pc = 0; //ֻ����1�ֽ�
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(unsigned int));
//	printf("%d\n", sizeof(long int));
//	printf("%d\n", sizeof(unsigned long int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//
//	return 0;
//}

//struct Book {
//	char name[20];
//	double price;
//	char id[20];
//};
//
//print1(struct Book b)
//{
//	printf("%s  -  %lf  -  %s\n", b.name, b.price, b.id);
//}
//
//print2(struct Book* pb)
//{
//	printf("%s  -  %lf  -  %s\n", (*pb).name, (*pb).price, (*pb).id);
//	printf("%s  -  %lf  -  %s\n", pb->name, pb->price, pb->id);
//}
//
//int main()
//{
//	struct Book b = { "santi", 35.9, "102"};
//	print1(b);
//	print2(&b);
//
//	strcpy(b.name, "shujujiegou");
//	print1(b);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%p ---- %p\n", &arr[i], arr + i);
//		// &arr[i] �� arr+i ��ӡ�ĵ�ַ��ȫһ��
//		// arr+i - ��������arr�У��±�Ϊi��Ԫ�صĵ�ַ
//	}
//
//	return 0;
//}

//int main()
//{
//	char c = 0;
//	while (scanf("%c", &c) != EOF)
//	{
//		if (c >= 'A' && c <= 'z')
//		{
//			printf("YES!");
//		}
//		else
//		{
//			printf("NO!");
//		}
//		getchar();
//	}
//}

//int main()
//{
//	int n = 15;
//	int arr[20] = { 0 };
//	int i = 0;
//	while (n != 0)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (--i; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
