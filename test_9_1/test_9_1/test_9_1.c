#define _CRT_SECURE_NO_WARNINGS 1

// �ص�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//void Calc(int (*pf)(int, int))
//{
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//}
//int main()
//{
//	Calc(Add);
//
//	return 0;
//}
/* �ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ
�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸ�
������ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
����������Ӧ�� */




void qsort(void* base, 
			size_t num, // �������Ԫ�ظ���
			size_t width, // һ��Ԫ�صĴ�С����λ���ֽ�
			int(* cmp)(const void* e1, const void* e2) 
			// cmpָ����ǣ�����ʱ�������Ƚ�2��Ԫ�صĺ���
);

// void* - �޾������͵�ָ��
// �ܹ������������͵ĵ�ַ
// ȱ�㣺���ܽ������㣬����+-���������ܽ�����


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�������ͺͽṹ��
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	print_arr(arr, sz);
}


struct Stu
{
	char name[20];
	int age;
};

int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()
{
	struct Stu s[3] = { {"����", 15}, {"����", 30}, {"����", 10} };
	int sz = sizeof(s) / sizeof(s[0]);

	// ������������
	//qsort(s, sz, sizeof(s[0]), cmp_by_name);

	// ������������
	qsort(s, sz, sizeof(s[0]), cmp_by_age);
}

int main()
{
	// ������������
	//test1();

	// ��������ṹ������
	test2();

	return 0;
}




// ��ð�ݺ���ģ��ʵ��qsort���������ͺͽṹ��
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++; //���ֽڽ���
		buf2++;
	}
}

// ʹ�ûص�����ʵ��һ��ͨ�õ�ð��������
void BubbleSort(void* base, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	// ����
	for (i = 0; i < num - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			// �Ƚ�
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
			{
				// ����
				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
			}
		}
	}
}

// �����Զ����BubbleSort();
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);

	print_arr(arr, sz);
}


// �����Զ����BubbleSort() ����ṹ��
struct Stu
{
	char name[20];
	int age;
};

int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test4()
{
	struct Stu s[3] = { {"����", 15}, {"����", 30}, {"����", 10} };
	int sz = sizeof(s) / sizeof(s[0]);

	// ������������
	qsort(s, sz, sizeof(s[0]), cmp_by_name);

	// ������������
	//qsort(s, sz, sizeof(s[0]), cmp_by_age);
}

int main()
{
	//test3();

	test4();

	return 0;
}




// ָ���������������

// һά����
int main()
{
	int a[] = { 1,2,3,4 };

	printf("%d\n", sizeof(a)); // ������a��������sizeof�ڲ�����������ʾ�������飬���������������Ĵ�С
	printf("%d\n", sizeof(a + 0)); // a��ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8�ֽ�
	printf("%d\n", sizeof(*a)); // a��ʾ��Ԫ�صĵ�ַ��*a������Ԫ�� --> a[0]����С����4
	// *a <==> *(a+0) <==> a[0]
	
	printf("%d\n", sizeof(a + 1)); // a��ʾ��Ԫ�صĵ�ַ��a+1�ǵڶ���Ԫ�صĵ�ַ����С����4/8
	printf("%d\n", sizeof(a[1])); // a[1] ���ǵڶ���Ԫ�أ�4
	printf("%d\n", sizeof(&a)); // &a - ����ĵ�ַ - 4/8 - int(*)[4]

	printf("%d\n", sizeof(*&a)); // *&a - &a������ĵ�ַ��������ĵ�ַ�������õ����ǵ����飬���Դ�С��16
	// printf("%d\n", sizeof(&a)); // 16
	
	printf("%d\n", sizeof(&a + 1)); // &a������ĵ�ַ��&a+1������ĵĵ�ַ+1�������������飬��Ȼ���������飬���ǵ�ַ 4/8
	printf("%d\n", sizeof(&a[0])); // ��Ԫ�ص�ַ 4/8
	printf("%d\n", sizeof(&a[0] + 1)); // �ڶ���Ԫ�صĵ�ַ 4/8

	return 0;
}
// 1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С������С���ֽڣ�
// 2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
// 3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
