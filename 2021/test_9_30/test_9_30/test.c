#define _CRT_SECURE_NO_WARNINGS 1

// ģ��ʵ��atoi
#include <stdio.h>
#include <string.h>

int my_atoi(const char* str)
{
	int is_negative = 0; // �ж�������
	int ret = 0; // ���շ�����
	char tmp = '0';

	const char* p = str;

	if (NULL == p)
	{
		return -1;
	}

	int len = strlen(str);

	if (*p == '-')
	{
		is_negative = 1;
	}

	int i = 0;
	for (i = 0; i < len; i++)
	{
		tmp = *p++;
		if (tmp > '9' || tmp < '0') // �ų��������ַ�
		{
			continue;
		}
		if (tmp != '0' || ret != '0') // �ų���ʼ��0
		{
			tmp -= '0';
			ret = ret * 10 + tmp;
		}
	}
	if (is_negative == 1)
	{
		ret = -ret;
	}

	return ret;
}

int main()
{
	char arr[20] = { 0 };

	strcpy(arr, "98993489");
	int ret = my_atoi(arr);
	printf("�ַ���ֵ��%s\n����ֵ��%d\n", arr, ret);

	strcpy(arr, "runoob.com");
	ret = my_atoi(arr);
	printf("\n�ַ���ֵ��%s\n����ֵ��%d\n", arr, ret);

	strcpy(arr, "-0123");
	ret = my_atoi(arr);
	printf("\n�ַ���ֵ��%s\n����ֵ��%d\n", arr, ret);

	return 0;
}