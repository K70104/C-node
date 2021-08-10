#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	const str1[] = { "hello bit." };
	const str2[] = { "hello bit." };
	const char* str3 = "hello bit.";
	const char* str4 = "hello bit.";

	if (str1 == str2) //������ �Ƚ������ַ�����Ԫ�ص�ַ
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are same\n");
	//�����ַ��� -�����޸ĵ�
	//str3 str4����һ�� ָ��ͬһ�ַ����׵�ַ

	return 0;
}
//����ָoffer��


//ָ������
char* arr[5]; //ar�Ǵ���ַ�ָ�������
int* arr2[4]; //arr2�Ǵ������ָ�������


//�����ô�ӡ����Ԫ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	int* arr[4] = { &a, &b, &c, &d };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(arr[i]));
	}

	return 0;
}


//
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { arr1, arr2, arr3 };
	//����������Ԫ�ص�ַ arr1��int*����

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", parr[i][j]); // p[i] == *(p+i)
			// parr[i][j] == *(parr[i]+j)
		}
		printf("\n");
	}

	return 0;
}


//�ַ�ָ���ʼ��
int main()
{
	const char* arr[5] = { "abcdef", "bcd", "hehe", "haha", "hello" };
	//���ÿ���ַ�������Ԫ�ص�ַ
	//�����ַ��� ���ܸ� ��const
	
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}



//==����ָ��==     

//��ָ��
int* p; //����ָ�� - ָ�����ε�ָ��

//ȡ�����ַ-��������ָ����
int main()
{
	int a = 10;
	int* pi = &a; //���εĵ�ַ���������ָ����

	char ch = 'w';
	char* pc = &ch; //�ַ��ĵ�ַ������ַ�ָ����

	int arr[10] = { 0 };
	int* p = arr; //������Ԫ�صĵ�ַ

	//int* parr[10]; ����д������
	int (*parr)[10] = &arr; //ȡ����������ĵ�ַ��Ӧ�ô��������ָ����

	return 0;
}


int main()
{
	int arr[10] = { 0 };
	//arr; //����������Ԫ�صĵ�ַ
	//&arr[0]; //��Ԫ�صĵ�ַ
	//
	//&arr; //ȡ������ĵ�ַ

	printf("%p\n", arr); //arr������int*
	printf("%p\n", &arr[0]); //int*
	printf("%p\n", &arr); //����ĵ�ַ���ͣ�int(*)[10] 
	//int(*p)[10] = &arr;

	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr+1);

	return 0;
}


//����ָ������
int main()
{
	int* arr[10];
	int* (*p)[10] = &arr;

	return 0;
}


//����ָ���ʹ��
//�±�
void print1(int arr[], int sz)
{
	int i = 0; 
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//ָ��
void printf2(int* arr, int sz)
{
	int i = 0; 
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
}

//����ָ��
void print3(int(*parr)[10], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", parr[0][i]); //�ӵ�һ��Ԫ�������
		printf("%d ", *(parr +0)[i]);
		printf("%d ", *(parr)[i]); //(*parr) �൱��parrָ��������������
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print1(arr, sz);
	print2(arr, sz);
	print3(&arr, sz); //һά���鲻�ʺ�

	return 0;
}


//��ά���鴫��
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0; 
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			//*(p + i)//��i�ҵ��� ��j�ҵ�Ԫ�� ������
			//printf("%d ", *(*p + i) + j);
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	print1(arr, 3, 5); //��ά���鴫��
	printf("\n");

	print2(arr, 3, 5); //��Ԫ�ص�ַ ָ�����
	//��ά���� ����Ԫ�� ��һά���� ������һά����ĵ�ַ
	//��Ԫ�ؾ��Ƕ�ά����ĵ�һ�� 1 2 3 4 5
	//*pָ�� 5��Ԫ�� ÿ��Ԫ����int����

	return 0;
}


//�ж�
int arr[5]; //��������

int *parr1[10]; 
//parr1��һ�����飬10��Ԫ�أ�ÿ��Ԫ����int*�ģ�����parr1��һ�����ָ�������

int (*parr2)[10]; 
//parr2��һ������ָ�룬��ָ��ָ���������10��Ԫ�أ�ÿ��Ԫ����int��

int (*parr3[10])[5]; 
//parr3��һ�����飬������10��Ԫ�أ�ÿ��Ԫ��ʯ��һ������ָ�룬
//��ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
