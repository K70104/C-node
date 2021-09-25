#define _CRT_SECURE_NO_WARNINGS 1

// ��̬�ڴ����

// Ϊʲô���ڶ�̬�ڴ����
/* 1. �ռ俪�ٴ�С�ǹ̶���
2. ������������ʱ�򣬱���ָ������ĳ��ȣ�������Ҫ���ڴ��ڱ���ʱ���� */

// 1. ����
// 2. malloc calloc realloc free

// malloc
// void* malloc(size_t t);
// �ڶ���������size_t��С�Ŀռ� �������ռ����ʼλ��

// 1��malloc��free
/* ����������ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ�롣
1. ������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
2. �������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
3. ����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
4. ������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ������� */
/*  free���������ͷŶ�̬���ٵ��ڴ档
1. ������� ptr ָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
2. ������� ptr ��NULLָ�룬����ʲô�¶������� */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 1. ���ٿռ�
	int* p = (int*)malloc(40); // ����40��С�ռ� ����ʼ��ַǿתΪint* ����p

	if (p == NULL)
	{
		return -1;
	}
	// ���ٳɹ��� ����ʹ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}

	// 2. �ͷſռ�
	free(p);
	p = NULL; // 

	return 0;
}


// 2��calloc
// void* calloc (size_t num, size_t size);
// ��malloc�к�����
/* malloc����ֻ�����ڶ�������ռ䣬���ҷ�����ʼ��ַ������ʼ���ռ�
calloc�����ڶ���������ռ䣬�����ڷ�����ʼ��ַ֮ǰ�������ÿ���ֽڳ�ʼ��Ϊ0 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	// ����ɹ�
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	// �ͷſռ�
	free(p);
	p = NULL;

	return 0;
}


// 3��realloc
// �ö�̬�ڴ����������
// void* realloc (void* ptr, size_t size);
/* ptr ��Ҫ�������ڴ��ַ
size ����֮���´�С
����ֵΪ����֮����ڴ���ʼλ�á�
�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ��� �� �Ŀռ� */
// ���������
// 1. ����ռ��С���ã�ֱ���ں��濪��
// 2. �ռ䲻�����ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�ã������������ص���һ���µ��ڴ��ַ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}

	// �ռ䲻�������ӿռ���20int
	int* ptr = (int*)realloc(p, 20 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
	}
	else
	{
		return -1;
	}
	// ���ӳɹ���ʹ��
	for (i = 10; i < 20; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;

	return 0;
}


// 4����������
// 1. ��malloc����ֵ�ж�
//int* p = (int*)malloc(20);
//*p = 0; // �з���
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(20);

	if (p == NULL)
	{
		return -1;
	}
	*p = 0;

	return 0;
}

// 2. �Զ�̬�ڴ�ռ��Խ�����
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(200);

	if (p == NULL)
	{
		return -1;
	}

	int i = 0;
	for (i = 0; i < 80; i++)
	{
		*(p + i) = 1;
	}

	for (i = 0; i < 80; i++)
	{
		printf("%d ", *(p + i));
	}

	free(p);
	p = NULL;

	return 0;
}

// 3���ͷŷǶ�̬�ڴ�ռ�
int main()
{
	int a = 10;
	int* p = &a;

	free(p); // err
	p = NULL;

	return 0;
}

// 4��ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return -1;
	}

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p++ = 1;
	}

	free(p);
	p = NULL;

	return 0;
}
// �ı���p ����ָ����ʼλ�� ��ʱ�ͷŵĲ��� ��ʼλ��

// 5����ͬһ�鶯̬�ڴ����ͷ�
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return -1;
	}

	free(p);
	free(p); // err
}

int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return -1;
	}

	free(p);
	p = NULL;

	free(p); // ok
}

// 6����̬�����ڴ������ͷţ��ڴ�й©��

// �ڶ���������ռ䣬��2�ֻ��շ�ʽ��
// 1. free
// 2. �����˳�ʱ������Ŀռ����
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return -1;
	}
	// û���ͷ�

	return 0;
}


// 5������ı�����
