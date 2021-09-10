#define _CRT_SECURE_NO_WARNINGS 1

// test
#include <stdio.h>
#include <string.h>

void left_move(char* arr, int k)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		// ����1���ַ�
		// 1�������һ���ַ�
		char tmp = *arr;
		// 2���Ѻ������ַ�������ǰ�ƶ�
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		// 3���ѱ���õĵ�һ���ַ���������
		*(arr + len - 1) = tmp;
	}
}

int main()
{
	char arr[] = "abcdef";

	left_move(arr, 2);

	printf("%s\n", arr);

	return 0;
}


#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse(char* l, char* r)
{
	assert(l && r);

	while (l < r)
	{
		char tmp = *l;
		*l = *r;
		*r = tmp;

		l++;
		r--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	k %= len;

	reverse(arr, arr + k - 1); // �������
	reverse(arr + k, arr + len - 1); // �����ұ�
	reverse(arr, arr + len - 1); // ���������ַ���
}

int main()
{
	char arr[] = "abcdef";

	left_move(arr, 2);

	printf("%s\n", arr);

	return 0;
}



#include <stdio.h>
#include <assert.h>
#include <string.h>

void reverse(char* l, char* r)
{
	assert(l && r);

	while (l < r)
	{
		char tmp = *l;
		*l = *r;
		*r = tmp;

		l++;
		r--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	k %= len;

	reverse(arr, arr + k - 1); // �������
	reverse(arr + k, arr + len - 1); // �����ұ�
	reverse(arr, arr + len - 1); // ���������ַ���
}

// �ж�arr2�Ƿ���arr1��ת�õ���
int is_left_move(char arr1[], const char arr2[])
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(arr1, 1);
		if (strcmp(arr1, arr2) == 0)
			return 1;
	}
	return 0;
}

int main()
{
	char arr1[] = "ABCDEF";
	char arr2[] = "BCDEFA";

	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}



#include <stdio.h>
#include <assert.h>
#include <string.h>

void reverse(char* l, char* r)
{ 
	assert(l && r);

	while (l < r)
	{
		char tmp = *l;
		*l = *r;
		*r = tmp;

		l++;
		r--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	k %= len;

	reverse(arr, arr + k - 1); // �������
	reverse(arr + k, arr + len - 1); // �����ұ�
	reverse(arr, arr + len - 1); // ���������ַ���
}

// �ж�arr2�Ƿ���arr1��ת�õ���
int is_left_move(char arr1[], char arr2[])
{
	assert(arr1 && arr2);

	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
		return 0;
	
	// 1����arr1�ĺ���׷��һ��arr1�ַ���
	strncat(arr1, arr1, len1);
	// 2���ж�arr2�Ƿ�Ϊarr1���Ӵ�
	if (NULL == strstr(arr1, arr2))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr1[20] = "AABCD";
	// AABCDAABCD ��arr1׷��arr1
	char arr2[] = "BCDAA";

	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}


// �ַ���׷��
int main()
{
	char arr[20] = "abc";
	// strcat - �ַ���׷��
	strcat(arr, "def");
	// strncat - �ַ���׷���Լ�
	strncat(arr, arr, 3);


	char arr1[] = "abcdefabcdef";
	char arr2[] = "def";
	// strstr - �����ַ���
	char* ret = strstr(arr1, arr2); // ����arr1����û��arr2������arr1�е�һ�γ��ֵ�arr2����ʼ��ַ
	if (ret == NULL)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ�%s\n", ret);
	}	
}



#include <stdio.h>

void find_k(int arr[3][3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1; // �����Ͻǿ�ʼ��

	while (x < r && y>= 0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y] > k)
			y--;
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d %d\n", x, y);
			return;
		}
	}
	printf("�Ҳ���\n");
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;

	find_k(arr, k, 3, 3);

	return 0;
}


// ���ҵ����������
#include <stdio.h>

void find_k(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1; // �����Ͻǿ�ʼ��

	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y] > k)
			y--;
		else
		{
			*px = x; // ����main�е�x��y
			*py = y;

			return;
		}
	}
	*px = -1;
	*py = -1;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int x = 0;
	int y = 0;

	// &x &y
	// ���� ���
	// �����Ͳ���
	find_k(arr, k, &x, &y);
	printf("�ҵ��ˣ������ǣ�%d %d\n", x, y);

	return 0;
}



// �ַ��������ַ����������ڴ溯��

// 1��strlen
#include <stdio.h>

int main()
{
	char arr[] = "abcdef";
	
	// size_t - unsigned int
	
	// size_t sz = strlen("abcdef");
	size_t sz = strlen(arr);

	printf("%u\n", sz);

	return 0;
}


#include <stdio.h>

int main()
{
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf("haha\n");
	}
	else
	{
		printf("hehe\n");
	}

	return 0;
}

int main()
{
	if ((int)strlen("abc") - (int)strlen("abcdef") > 0)
	{
		printf("haha\n");
	}
	else
	{
		printf("hehe\n");
	}

	return 0;
}

// strlen��ģ��ʵ��
// 1����������2��ָ��-ָ�룬3���ݹ�


// 2��strcpy
int main()
{
	char arr1[] = "xxxxxxxxxxxxxxxx";
	char arr2[] = "hello";
	// ����arr2�е��ַ���������\0��hello\0

 strcpy(arr1, arr2);
 
	return 0;
}

int main()
{
	char arr1[] = "xxxxxxxxxxxxxxxx";
	char arr2[] = "hello\0abc";
	// ������\0ֹͣ
	// hello\0

	return 0;
}

// strcpyģ��ʵ��
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest, char* src)
{
	assert(dest && src);

	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "xxxxxxxxx";
	char arr2[] = "abc";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}
