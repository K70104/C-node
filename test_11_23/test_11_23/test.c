#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

/*
�ַ���ƥ���㷨��BF  KMP
str������
sub���Ӵ�
����ֵ�������������Ӵ��е��±� ��������� ����-1
*/
int BF(char* str, char* sub) 
{
	assert(str && sub);
	if (str == NULL || sub == NULL)
	{
		return -1;
	}

	int i = 0;
	int j = 0;
	int len_str = strlen(str);
	int len_sub = strlen(sub);

	while (i < len_str && j < len_sub)
	{
		if (str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}

	if (j >= len_sub)
	{
		return i - j;
	}
	return -1;
}


int main()
{
	printf("%d\n", BF("ababcabcdabcda", "abcd")); // 5
	printf("%d\n", BF("ababcabcdabcda", "abcc")); // -1
	printf("%d\n", BF("ababcabcdabcda", "ab")); // 0

	return 0;
}
