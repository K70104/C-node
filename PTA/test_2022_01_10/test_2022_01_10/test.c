#define _CRT_SECURE_NO_WARNINGS 1

// 7-26 ���ʳ���
#include <stdio.h>

// ���ÿ�����ʳ��� �ж�����
int main() 
{
	int len = 0; // �ܳ�
	char cur = 0;
	char next = 0;
	scanf("%c", &next);
	int flag = 1; // �жϼӿո�
	while (next != '.') 
	{
		cur = next;
		if (cur != ' ') 
		{
			len++;
		}
		scanf("%c", &next);
		// cur ��Ϊ�� next Ϊ�� --> �˵��ʽ���
		if (cur != ' ' && next == ' ') 
		{
			if (flag == 1) 
			{
				printf("%d", len);
				flag = 0;
			}
			else {
				printf(" %d", len);
			}
			len = 0; // ��һ�μ���
		}
	}
	// ���һ��
	if (cur != ' ' && len != 0) 
	{
		if (flag == 1)
		{
			printf("%d", len);
		}
		else {
			printf(" %d", len);
		}
	}
	return 0;
}
