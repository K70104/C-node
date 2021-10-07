#define _CRT_SECURE_NO_WARNINGS 1

//һ��fseek
//�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int fseek ( FILE * stream, long int offset, int origin );
#include <stdio.h>

int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return -1;
	}

	// ���ļ� �����д
	// 1����a
	//int ch = fgetc(pf);
	//printf("%c\n", ch); // a

	// 2�������һ�ξ�Ҫ��ȡ'c'
	fseek(pf, 2, SEEK_SET); // ����ʼλ��ƫ��2ָ��c
	int ch = fgetc(pf);
	printf("%c\n", ch); // c

	// 3����'b'
	// ����c ָ��d Ҫ��ȡb��Ҫ�ӵ�ǰλ�ÿ�ʼƫ��-2
	fseek(pf, -2, SEEK_CUR);
	ch = fgetc(pf);
	printf("%c\n", ch); // b

	fclose(pf);
	pf = NULL;

	return 0;
}



//����ftell
//�����ļ�ָ���������ʼλ�õ�ƫ����
//long int ftell ( FILE * stream );

// �����ļ�ָ���������ʼλ�õ�ƫ����
#include <stdio.h>

int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return -1;
	}

	// ��ȡ'c'
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);
	printf("%c\n", ch);

	// ��'b'
	fseek(pf, -2, SEEK_CUR);
	ch = fgetc(pf);
	printf("%c\n", ch);

	// ����ƫ����
	// ��ȡb��ָ��c ƫ��������ʼλ��Ϊ2
	int ret = ftell(pf);
	printf("%d\n", ret); // 2

	fclose(pf);
	pf = NULL;

	return 0;
}



//����rewind
//���ļ�ָ���λ�ûص��ļ�����ʼλ��
//void rewind ( FILE * stream );

#include <stdio.h>

int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return -1;
	}

	// ��ȡ'c'
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);
	printf("%c\n", ch);

	// ��'b'
	fseek(pf, -2, SEEK_CUR);
	ch = fgetc(pf);
	printf("%c\n", ch);

	// ����ƫ����
	int ret = ftell(pf);
	printf("%d\n", ret); // 2

	// ��ָ��ص���ʼλ��
	// �ٴδ���ʼλ�ô�ӡ ����a
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch); // a

	fclose(pf);
	pf = NULL;

	return 0;
}



// �ġ��ı��ļ��Ͷ������ļ�
//00000000000000000010011100010000
// ʮ����10000�Ķ����ƴ洢��
// ASCII��ʽ / ��������ʽ
// 5�ֽ�       4�ֽ�
#include <stdio.h>

int main()
{
	FILE* pf = fopen("data.txt", "wb");
	if (NULL == pf)
	{
		perror("fopen");
		return -1;
	}

	// �Զ�������ʽд�ļ�
	int a = 10000;
	fwrite(&a, 4, 1, pf);

	fclose(pf);
	pf = NULL;

	return 0;
}



// �塢�ļ������ж�
// �ַ����뺯��fgetc����int������������ļ���������EOF
// �����fgetc��ȡ�ļ��������ж�fgetc�ķ���ֵ�Ƿ���EOF�����ж��ļ��Ƿ��ȡ����
#include <stdio.h>

int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return -1;
	}

	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}

	fclose(pf);
	pf = NULL;

	return 0;
}


// �ı������뺯��fgets������ʼ��ַ������������ļ���������NULL


/*
1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF ��fgetc��������NULL��fgets��
���磺
fgetc�ж��Ƿ�ΪEOF.
fgets�жϷ���ֵ�Ƿ�ΪNULL.
2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
���磺
fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
*/

// feof 
// feof���������ж��ļ��Ƿ��ȡ������

// �ı��ļ������ӣ�
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c; // ע�⣺int����char��Ҫ����EOF
	FILE* fp = fopen("test.txt", "r");
	if (!fp) {
		perror("File opening failed");
		return EXIT_FAILURE;
	}

	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
	{
		putchar(c);
	}

	//�ж���ʲôԭ�������
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");

	fclose(fp);
	fp = NULL;
}

//// �������ļ������ӣ�
#include <stdio.h>

enum { SIZE = 5 };

int main(void)
{
	double a[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ

	fwrite(a, sizeof(*a), SIZE, fp); // д double ������
	fclose(fp);

	fp = fopen("test.bin", "rb");

	// �� double ������
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
	{
		printf("%lf\n", b);
	}

	if (feof(fp))
		printf("Error reading test.bin: unexpected end of file\n");
	else if (ferror(fp)) {
		perror("Error reading test.bin");
	}

	fclose(fp);
	fp = NULL;
}

// �ܽ᣺feof�ǵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
// ferror ��;���ļ���ȡ�����ˣ��ж��ǲ�������������ȡ����



// �ļ�������
// ���Դ��룺
#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf); // �Ƚ�������ڻ�����

	printf("˯��10s �Ѿ�д������ ��test.txt�ļ� �����ļ�û������\n");
	Sleep(10000);

	printf("ˢ�»�����\n");
	fflush(pf); // ˢ�»�����ʱ �Ž����������������д���ļ������̣�

	printf("��˯��10s ��ʱ �ٴδ�test.txt�ļ� �ļ���������\n");
	Sleep(10000);
	// ע��fclose�ر��ļ���ʱ�� Ҳ��ˢ�»�����
	pf = NULL;

	return 0;
}

// ���ۣ�
// ��Ϊ�л������Ĵ��ڣ�C�����ڲ����ļ�ʱ����Ҫ��ˢ�»������������ļ���������ʱ
// �ر��ļ���fclose�ر��ļ���ʱ�� Ҳ��ˢ�»���������������ܵ��¶�д�ļ�����
