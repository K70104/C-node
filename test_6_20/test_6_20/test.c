#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// forѭ��
// ��ʼ�� �ж� ����

// ��ӡ1-10
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}


// F10 - ����ִ�У�����̣�
// F11 - ����ִ�У�����䣩 - �����Զ�����������뺯������F11


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;
		printf("%d ", i); // 1 2 2 4 6 7 8 9 10
	}
	return 0;
}
// forѭ���е�continue����continue��ߵĴ���
// ȥ�˵������֣�����ѭ�������������������ѭ��

// whlieѭ���У�continue����continue��ߵĴ��룬ֱ��ȥ�жϲ���


// for����ѭ�����Ʊ���
// 1. ������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			printf("%d ", i);
	}
	return 0;
}

// 2. ����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


// forѭ����һЩ����
// 1. ��ʼ�� �ж� ���� �������ֶ�ʡ����
int main()
{
	int i = 0;
	for (;;)
	{
		printf("hehe\n"); // ��ѭ��
		// 1. ����ʡ��
		// 2. �жϲ���ֻҪʡ���ˣ�����ζ���жϺ�Ϊ���桱
		// 3. ������Ҫʡ��
	}
	return 0;
}


int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
		// i=0 j=0 ��ӡ10��hehe ���� ��ʱj=10 ������ ֻ��ӡ10hehe
	}
	return 0;
}


// һ��������
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		// �жϸ�ֵΪ0 ��
		k++;
	return 0;
}


// do...whileѭ��
int main()
{
	int i = 1;

	do
	{
		printf("%d", i);
		i++;
	} while (i <= 10);

	return 0;
}


int main()
{
	int i = 1;

	do
	{
		if (i == 5)
			break;
		printf("%d ", i); // 1 2 3 4
		i++;
	} while (i <= 10);

	return 0;
}


int main()
{
	int i = 1;

	do
	{
		if (i == 5)
			continue;
		printf("%d ", i); // 1 2 3 4 ��ѭ��
		i++;
	} while (i <= 10);

	return 0;
}


// ��ϰ
// 1. ����n�Ľ׳�
int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	int ret = 0;
	for (i = 1; i < n; i++)
	{
		ret = ret * i;
	}

	printf("%d", ret);

	return 0;
}


// 2. ����1��+2��+3��+...+10!
int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}

	printf("%d", sum);

	return 0;
}


// 3. ��һ�����������в��Ҿ����ĳ������n
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// ����������arr����7
	// �ҵ��˴�ӡ�±꣬�Ҳ�����ӡ���Ҳ���
	int i = 0;
	int k = 7;

	// �������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
			break;
		}
	}

	if (i == sz)
	{
		printf("�ҵ���\n");
	}

	return 0;
}


// �۰���ҷ�/����
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int k = 7;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}

	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


// 4. ��ʾһ���ַ��������ƶ� ���м���
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main()
{
	char arr1[] = "hello world!!!";
	char arr2[] = "##############";
	int len = strlen(arr1);

	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); // 1000����=1s
		system("cls");	// �����Ļ
		// system�ǿ⺯��������ִ��ϵͳ�����
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}


// 5. ģ���û���¼�龰 ����ֻ�ܵ�¼���Σ�������ȷ��ʾ��¼�ɹ��������˳�����
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	// ���������� abcdef

	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);

		// �����ַ����Ƚϣ�����ʹ��==
		if (strcmp(password, "abcdef") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������!\n");
		}
	}

	if (i == 3)
	{
		printf("����������������˳�����\n");
	}

	return 0;
}


// C���Թ涨 ����Ҫ�����ڵ�ǰ������ǰ��


// goto���
int main()
{
again:
	printf("hehe\n"); // ��ѭ��
	goto again;

	return 0;
}


// goto�������������Ƕ��ѭ��


// �ػ�����
// ����������������ʱ�ػ���1���������롰��������ȡ���ػ�
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);

	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}


int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);

		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}