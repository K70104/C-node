#include <stdio.h>

// д���뽫�������������Ӵ�С���
// ���룺2 3 1
// �����3 2 1
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	// ����
	scanf_s("%d %d %d", &a, &b, &c);

	// ����
	int tmp = 0;

	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}

	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}

	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}

	// ���
	printf("%d %d %d", a, b, c);

	return 0;
}


// дһ�������ӡ1 - 100֮������3�ı���������
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}

	printf("\n");

	for (i = 3; i <= 100; i += 3)
	{
		printf("%d ", i);
	}

	return 0;
}


// ���������������������������Լ��
// 1. �������
int main()
{
	int a = 0;
	int b = 0;
	scan_s("%d %d", &a, &b);

	// �������������Լ��
	// ����a��b�������Լ��
	int m = (a > b ? b : a);
	
	while (1)
	{
		if (a % m == 0 && b % m == 0)
		{
			printf("���Լ���ǣ�%d\n", m);
			break;
		}
		m--;
	}

	return 0;
}


// 2. շת�����
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	int r = 0;
	while (a % b)
	{
		r = a % b;
		a = b;
		b = r;
	}

	printf("%d\n", b);

	return 0;
}
 
// ��С��������a * b / ���Լ�� 