#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		// �ж�y�Ƿ�Ϊ����
		// 1. �ܱ�4���� ���ܱ�100����
		// 2. �ܱ�400����������
		if (y % 4 == 0 && y % 100 != 0)
			printf("%d ", y);
		else if (y % 400 == 0)
			// else��ʡ��
			printf("%d ", y);
	}
	return 0;
}


// 2 err ����
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
				printf("%d ", y);
		}
		else if (y % 400 == 0)
			printf("%d ", y);
	}
	return 0;
}


// 3
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
			printf("%d ", y);
	}

	return 0;
}


// ��ӡ1-100������
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		// �ж��Ƿ�Ϊ����
		// ������������ - ֻ�ܱ�1������������������
		// ��2-i-1֮��������Գ�i
		int j = 0;
		int flag = 1;
		for (j = 2; j < i; j++)
		{
			// ��j�Գ�i
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i); // ������ӡ
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}


// ��ƽ���Ƚ� i=a*b ��a��b��������һ������<=sqrt(i)    ��ƽ��
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	// sqrt - ��ƽ������ѧ�⺯��
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
// �Ż� for (i = 101; i <= 200; i+=2) �ų�����ż�� ���Ч��
// ����������n�־��硷


// ��ҵ�� 1.����1-100���ٸ�����9  -- �ж��ٸ�9��������9������
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	// 9 19 29 39... 99ʮ�� 90 91 92... 99ʮ�� 
	printf("count = %d\n", count);
	return 0;
}


// 2. ������� ����1/1 - 1/2 + 1/3 - 1/4 +1/5... +1/99 -1/100 ��ֵ
#include <stdio.h>

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}


// 3. ��ӡ10�����е����ֵ
int main()
{
	int arr[10] = { 0 };
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	int max = arr[0]; // �����һ��Ԫ�ؾ������ֵ
	// ��ʣ�µľŸ����ֺ�max�Ƚ�
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	printf("%d\n", max);

	return 0;
}


#include <stdio.h>

int main()
{
	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
	int max = arr[0]; // ���ܵ���0 ���⸺���Ƚ� �ӵ�һ������ʼ 
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}


// 4. ����Ļ�����9*9�˷��ھ���
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		// ��ӡһ��
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			// ��ӡһ��
			printf("%d*%d=%-2d ", i, j, i * j); // -2�����
		}
		printf("\n");
	}
	return 0;
}