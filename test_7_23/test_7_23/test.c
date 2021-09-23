#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ����
// һ�����ͳ����е�ĳ���ִ��� ��һ������������� �������ĳ���ض����� ���ж�����
// һ�������������ͷ���ֵ �ṩ�Թ��̵ķ�װ��ϸ�ڵ�����

// C�����к����ķ���:�⺯�� �Զ��庯��
// 
// ���ѧ��ʹ�ÿ⺯��
// http://www.cplusplus.com/reference/
//
// strcpy
#include <string.h>

int main()
{
	char arr1[20] = { 0 }; // Ŀ��ռ�
	char arr2[] = "hello";

	strcpy(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}


int main()
{
	char arr1[20] = "xxxxxxxxx"; // Ŀ��ռ�
	char arr2[] = "hello";

	char* ret = strcpy(arr1, arr2);

	printf("%s\n", arr1); // hello 
	printf("%s\n", ret); // hello
	// \0 �ַ����Ľ�����־

	return 0;
}



// memset
int main()
{
	char arr[] = "hello bit";
	char* ret = (char*)memset(arr, 'x', 5);

	printf("%s\n", ret); // xxxxx bit

	return 0;
}


int main()
{
	int arr[10] = { 0 };
	//memset( arr,1,5 * sizeof(int) ); // ��ǰ5������ 20���ֽ���Ƴ�1
	// memset���ֽ�Ϊ��λ��ʼ��

	return 0;
}



// �Զ��庯��
// ��⺯��һ�� �к�����������ֵ����������
// ��һ��������Щ���������Լ������ �кܴ�ķ��ӿռ�

// ���������
//  ret_type fun_name(paral, *)
//  {
//  	statement; // �����
//  }
//  �������� ������ ��������

// 1.дһ�����������ҳ��������������ֵ
int get_max(int x, int y) // ��ʽ����
{
	return (x > y ? x : y);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	int max = get_max(a, b); // ʵ�ʲ���
	printf("max = %d\n", max);

	return 0;
}


// дһ���������Խ����������α���������
// �޺���
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	printf("����ǰ��a=%d b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("������a=%d b=%d\n", a, b);

	return 0;
}


// ����
// err
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(a, b);
	// ʵ��a��b �����β�x,yʱ���βν���ʵ�ε�һ����ʱ����
	// �ı�ʵ�α���x,y����Ӱ��ʵ��a,b
	printf("������a=%d b=%d\n", a, b);

	return 0;
}


void Swap(int* px, int* py)
{
	int z = 0;

	z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	printf("����ǰ��a=%d b=%d\n", a, b);
	// ����
	Swap(&a, &b);

	printf("������a=%d b=%d\n", a, b);

	return 0;
}




// ��������
//
// ʵ�ʲ��� 
// ʵ�ο����ǣ����� ���� ���ʽ ����
int get_max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	int max = get_max(a, get_max(3, 5));
	//int max = get_max(b, 20-1);

	printf("max = %d\n", max);

	return 0;
}


// ��ʽ����
// ֻ���ں������õĹ����вŻ����ռ� ������ɺ����� �����ʽ����ֻ�ں�������Ч




// ��������
// ��ֵ���� ��ַ����

void Swap1(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

void Swap2(int* px, int* py)
{
	int z = 0;

	z = *px;
	*px = *py;
	*py = z;
}

int main()
{
	int a = 10;
	int b = 20;

	Swap1(a, b); // ��ֵ����
	// �β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��

	Swap2(&a, &b); // ��ַ����
	// �Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
	// �����ú����ͺ�����ı���������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���

	return 0;
}




// ��ϰ

// 1. дһ�������ж�һ�����ǲ�������
#include <math.h>

int is_prime(int n)
{
	// �Գ���
	// 2 ~ n-1
	// 2~sqrt(n)
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	int cnt = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\ncnt = %d\n", cnt);

	return 0;
}


// 2. дһ�������ж��ǲ�������
int is_leap_year(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}
}


// 3. дһ������ ʵ��һ��������������Ķ��ֲ���
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
			return mid;
	}

	// �Ҳ���
	return -1; // 0�п������±�
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int ret = binary_search(arr, k, sz); // TDD - ������������

	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	return 0;
}


// ���Ʒ�Χ ��3�Ҳ���
int binary_search(int arr[], int k, int left, int right)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
			return mid;
	}

	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int ret = binary_search(arr, k, 5, 9);

	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	return 0;
}


// 4. дһ������ ÿ����һ��������� �ͻὫnum��ֵ����һ��
void Add(int* p)
{
	*p = *p + 1;
}

int main()
{
	int num = 0;

	Add(&num);
	printf("%d\n", num); // 1

	Add(&num);
	printf("%d\n", num); // 2

	Add(&num);
	printf("%d\n", num); // 3

	return 0;
}


int Add(int* n)
{
	return n + 1;
}

int main()
{
	int num = 0;

	num = Add(num);
	printf("%d\n", num); // 1

	num = Add(num);
	printf("%d\n", num); // 2

	num = Add(num);
	printf("%d\n", num); // 3

	return 0;
}




// ������Ƕ�׵��ú���ʽ����

// ��������Ƕ�׵��ã�������Ƕ�׶���
int main()
{
	// ����Ƕ�׶��� - err
	/*void test()
	{
		printf("hehe\n");
	}*/

	return 0;
}


// ��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
int main()
{
	int len = strlen("abc");

	printf("%d\n", len);

	printf("%d\n", strlen("abc")); // ��ʽ����

	return 0;
}


int main()
{
	char arr1[20] = "xxxxxxxxx";
	char arr2[] = "abc";

	// strcpy(arr1, arr2);

	printf("%s\n", strcpy(arr1, arr2));

	return 0;
}


// ��ӡʲô
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	// printf �������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	// ����������� �����ظ���
/*	printf("%d", printf("%d", 2)); // 43��2λ��
	// 43
	printf("%d", 1);
	// 432
	// 4321
*/
	return 0;
}