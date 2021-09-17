#define _CRT_SECURE_NO_WARNINGS 1

// 1��ģ��ʵ��memmove
#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);

	if (dest < src)
	{
		// ǰ->��
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		// ��->ǰ
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}

	return ret;
}

void print_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	my_memmove(arr+2, arr, 16);
	//my_memmove(arr, arr+2, 16);

	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);

	return 0;
}


// 2��memcmp - �Ƚ��ڴ��������
#include <stdio.h>

int main()
{
	int arr1[] = { 1,2,3,3,5 }; // 01 00 00 00 02 00 00 00 03 00 00 00 03 00 00 00 05 00 00 00
	int arr2[] = { 1,2,3,5,7 }; // 01 00 00 00 02 00 00 00 03 00 00 00 05 00 00 00 07 00 00 00

	int ret = memcmp(arr1, arr2, 13); // ����С��0������

	return 0;
}


// 3��memset - memory set �ڴ�����
// ��ÿ���ֽڳ�ʼ����1
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };

	memset(arr, 1, 24);

	return 0;
}


// 4��strerror - ���ش������Ӧ�Ĵ�����Ϣ

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", strerror(0)); // No error
	printf("%s\n", strerror(1)); // Operation not permitted
	printf("%s\n", strerror(2)); // No such file or directory
	printf("%s\n", strerror(3)); // No such process

	return 0;
}


// C���Կ⺯������ʧ�ܵ�ʱ�򣬻�Ѵ����룬�洢��error������

// fopen - ���ļ�
// ���ļ� ��r�������ķ�ʽ ����FILE*��ָ�����
// �򿪳ɹ����ŵ�ַ����ʧ�ܣ���NULL
int main()
{
	FILE* pf = fopen("test.txt", "r");

	// strerror - ���Է���C�������õĴ������Ӧ�Ĵ�����Ϣ

	if (pf == NULL)
	{
		printf("%s\n", strerror(errno)); // No such file or directory
	}
	else
	{
		printf("���ļ��ɹ�\n");
	}

	return 0;
}


// strerror - �Ѵ�����ת���ɴ�����Ϣ����Ҫ�Լ���ӡ
// perror - ����ֱ�Ӵ�ӡ 
int main()
{
	FILE* pf = fopen("test.txt", "r");

	if (pf == NULL)
	{
		perror("���ԣ�"); // ���ԣ�: No such file or directory
	}
	else
	{
		printf("���ļ��ɹ�\n");
	}

	return 0;
}



// �����Զ������ͣ��ṹ�壬ö�٣�����
// C�����������ͣ�char short int long float double
// �Զ�������/�������ͣ��ṹ�壬ö�٣�����

// �ṹ��
// 1�����������
// �������ṹ���ʱ�򣬿��Բ���ȫ������

// �����ṹ��
struct
{
	int a;
	char c;
	double d;
}s1, s2; // correct

int main()
{
	struct s3; // err
	return 0;
}

// �����ṹ������
struct
{
	int a;
	char c;
	double d;
}s1, s2;

struct
{
	int a;
	char c;
	double d;
}*ps;

int main()
{
	ps = &s1; // ��=��: �ӡ�*������*�������Ͳ�����
	// ���������������������������ȫ��ͬ���������ͣ� �ǷǷ���

	return 0;
}


// 2���ṹ��������

// ���ݽṹ���������������ڴ��д洢�Ľṹ
// �������ݽṹ��˳�������

// ͬ���ͽڵ��ҵ�ͬ���ͽڵ�
// ����д����
struct Node
{
	int date;
	struct Node n; // ���ߵݹ� err
};

// ��ȷд�������ַ
struct Node
{
	int date; // ������
	struct Node* next; // ָ����
};


// ���´�����������θ���
typedef struct
{
	int date;
	Node* next;
	
}Node;
// �������ṹ��������������ʹ��ʱ��û�в���

// �������
typedef struct Node
{
	int date;
	struct Node* next;

}Node;


// 3���ṹ������Ķ���ͳ�ʼ��
// ��������ʼ��
struct Point
{
	int x;
	int y;
}p1 = { 5,6 }, p2; // ȫ��

struct Point p2 = { 1,2 }; // ȫ��

int main()
{
	struct Point p1 = { 3,4 }; // �ֲ�
	// �������е��˴���
	// ȫ�ֱ����ڳ�������ǰ�ʹ�����

	return 0;
}

// �ṹ��Ƕ�׳�ʼ��
struct Point
{
	int x;
	int y;
}p1 = { 5,6 }, p2;

struct Point p2 = { 1,2 };

struct S
{
	double d;
	struct Point p;
	char name[20];
};

int main()
{
	struct Point p1 = { 3,4 };

	struct S s = { 3.14, {1, 5}, {"zhangsan"}};

	return 0;
}


// ��ӡ�ṹ��
#include <stdio.h>

struct Point
{
	int x;
	int y;
}p1 = { 5,6 }, p2;

struct Point p2 = { 1,2 };

struct S
{
	double d;
	struct Point p;
	char name[20];
	int date[20];
};

int main()
{
	struct Point p1 = { 3,4 };

	struct S s = { 3.14, {1, 5}, {"zhangsan"}, {1,2,3} };

	printf("%lf\n", s.d); // 3.140000
	printf("%d %d\n", s.p.x, s.p.y); // 1 5
	printf("%s\n", s.name); // zhangsan
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ", s.date[i]); // 1 2 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	}

	return 0;
}


// 4���ṹ���ڴ����
// ΪʲôS1��S2���͵ĳ�Աһģһ��������S1��S2��ռ�ռ�Ĵ�С����һЩ����
#include <stdio.h>

struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s = { 'x', 100, 'y' };

	printf("%d\n", sizeof(struct S1)); // 12
	printf("%d\n", sizeof(struct S2)); // 8
	printf("%d\n", sizeof(s)); // 12

	return 0;
}

// �ڴ����

// �ṹ���ڴ�������
// 1. �ṹ��ĵ�һ����Ա��Զ���ڽṹ����ʼλ��ƫ��Ϊ0��λ��
// 2. �ṹ���Ա�ӵڶ�����Ա��ʼ�����Ƿ���ƫ��Ϊһ��==������==����������
//		������ = ������Ĭ�ϵĶ������ͱ��������С�Ľ�Сֵ
//		Linux - û��Ĭ�϶������������С���Ƕ�������
//		VS - Ĭ�϶�������8
// 3. �ṹ����ܴ�С�����Ǹ�����Ա�Ķ�����������Ǹ���������������

// ��ϰ��
struct S3
{
	double d;
	char c;
	int i;
};
// 16

// �ṹ��Ƕ�������
#include <stdio.h>

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

int main()
{
	printf("%d\n", sizeof(struct S4));

	return 0;
}
// ����4�����Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ�����������������������
// �ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������


// Ϊʲô�����ڴ����?
/* 1. ƽ̨ԭ��(��ֲԭ��)�� �������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨����ĳЩ��ַ
��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
2. ����ԭ�� ���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣 ԭ�����ڣ�Ϊ�˷���δ������ڴ棬������
��Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��� */

// ������˵ 
// �ṹ����ڴ�������ÿռ�����ȡʱ���������

// ����ƽṹ���ʱ�����Ǽ�Ҫ������룬��Ҫ��ʡ�ռ䣬���������
// ��ռ�ÿռ�С�ĳ�Ա����������һ��
