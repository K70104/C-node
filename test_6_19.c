#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��֧����ѭ�����

// if���
int main()
{
	// ��䣺һ���ֺŸ�������һ�����
	; // �����
	return 0;
}


int main()
{
	int age = 25;

	if (age < 18)
		printf("������\n");
	else if (age >= 18 && age < 30)
		printf("����\n");
	else if (age >= 30 && age < 50)
		printf("����\n");
	else if (age >= 50 && age < 80)
		printf("����\n");
	else
		printf("������\n");

	return 0;
}


// 0Ϊ�� ��0Ϊ��

// ����������Ҫִ�ж�����䣬ʹ�ô����{}


// ����else
int main()
{
	int a = 0;
	int b = 2;
	// ����ӡ
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");
	return 0;
}


// ��д�淶
int main()
{
	int num = 3;
	// �����ͱ����Ƚ���ȵ�ʱ��
	// ����������߸���һЩ
	if (5 == num)
	{
		printf("hehe\n");
	}
	return 0;
}


// �ж�һ�����Ƿ�Ϊ����
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
	{
		printf("%d������\n", num);
	}
	else
	{
		printf("%d��������\n", num);

	}
	return 0;
}


// ���1-100������
int main()
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	return 0;
}


// ���ַ���
int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}
	return 0;
}


// switch���
// switch������ͱ��ʽ
// case�����γ������ʽ�������Ǳ������������ַ�'a'
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
		printf("����1\n");
		break; // break ֹͣ
	case 2:
		printf("����2\n");
		break;
	}
	return 0;
}


int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	// default û��˳��
	default:
		printf("�������������1-7������\n");
		break;
	}
	return 0;
}


// ��ϰ
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		// switch����Ƕ��ʹ��
		case 1:
			n++; // 
		case 2:
			m++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n); // 5 3
	return 0;
}


// ѭ�����
// while
int main()
{
	while (1)
	// ��ѭ�� ��Ϊ��
	{
		printf("hehe\n");
	}
	return 0;
}


// while��ӡ1-10
int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}
	return 0;
}


int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;
		printf("%d", i);
		i++;
	}
	// 1 2 3 4
	// braek�����õ���ֹѭ����
	return 0;
}


int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;
		printf("%d", i);
		i++;
	}
	// 1 2 3 4 ��ѭ��
	// continue���ã�
	// ��������ѭ��continue��ߵĴ��룬ֱ������whileѭ�����жϲ���
	return 0;
}


int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;
		printf("%d", i); // 2 3 4 6 7 8 9 10 11
	}
	return 0;
}


// getchar - �Ӽ��̻�ȡ�ַ�
// putchar - ���ַ���ӡ����Ļ
int main()
{
	int ch = 0;

	ch = getchar();
	putchar(ch);

	return 0;
}


int main()
{
	int ch = 0;
	// EOF - end of file - �ļ������ı�־
	// ctrl+z ֹͣ

	// getchar��ȡʧ��ʱ�᷵��EOF
	// 1. ���ص��ַ������������ַ�Ҳ��ASCII��ֵ��������
	// 2. getchar�����������Ƿ�������
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}


int main()
{
	int ch = 0;
	char password[20] = { 0 };
	printf("����������>:");
	scanf("%s", password);
	// ����
 	// getchat(); // ����ȡ
	while ((ch = getchar()) != '\n');

	printf("��ȷ������(Y/N)>:");
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		// 0-47��58-127��ASCII��ֵ����ӡ
		// ר�Ŵ�ӡ����
			continue;
		putchar(ch);
	}
	return 0;
}