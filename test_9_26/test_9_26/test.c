#define _CRT_SECURE_NO_WARNINGS 1


// �ļ�
// �����ϵ��ļ�
// ���ļ����ܷ��ࣺ
// �����ļ���Դ�����ļ�test.c Ŀ���ļ�test.obj ��ִ�г���test.exe
// �����ļ���data.txt


// ÿһ���򿪵��ļ������һ������ƥ���==�ļ���Ϣ�� struct FILE f;==���洢�ļ���Ϣ



// ���ļ� - fopen
// �ر��ļ� - fclose

// "r" - ��
//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// ���ļ�
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
// fopen: No such file or directory
// �ļ�������


//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\Chloe\\Desktop\\data.txt", "r"); // ����·��
//	// FILE* pf = fopen("data.txt", "r"); // ���·��
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// ���ļ�
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



// "w" - д
//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("C:\\Users\\Chloe\\Desktop\\data.txt", "w"); // ������һ���ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// ���ļ�
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



// ˳���д

 //fputc - �ַ�������� дһ���ַ�
 //fgetc - �ַ����뺯�� ��һ���ַ�

/* Read a character from a stream (fgetc, fgetwc) or stdin (_fgetchar, _fgetwchar).
int fgetc( FILE *stream );
 */
//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen ("C:\\Users\\Chloe\\Desktop\\data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// д�ļ�
//	fputc('b', pf); // ��data.txt��д��bit
//	fputc('i', pf);
//	fputc('t', pf);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	 
//	return 0;
//}


// 
//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen ("C:\\Users\\Chloe\\Desktop\\data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// ���ļ�
//	int ch = fgetc(pf);                                            
//	printf("%c\n", ch); // a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch); // b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch); // c
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	 
//	return 0;
//}

// Ҳ���Դӱ�׼�������Ҳ���Ǽ���
//#include <stdio.h>
//
//int main()
//{
//	fputc('b', stdout);
//	// putchar printf("%c", ch);
//
//	int ch = fgetc(stdin);
//	// getchar scanf("%c", ch);
//	printf("%c\n", ch);
//}


// �����߶ȳ���ĸ���
 //C���Եĳ���ֻҪ������������Ĭ�ϴ�����������
 //stdout - ��׼�����
 //stdin  - ��׼������
 //stderr - ��׼������
 //���Ͷ��� FILE*

//#include <stdio.h>
//
//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//}


//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// д�ļ�
//	// дһ������
//	fputs("hello world\n", pf);
//	fputs("hello bit\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//}


//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// ���ļ�
//	// ��һ������
//	char arr[20] = { 0 };
//	fgets(arr, 20, pf); // �������5���ַ��Ž�arr
//	printf("%s\n", arr);
//
//	fgets(arr, 20, pf); // �������5���ַ��Ž�arr
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//
//struct S
//{
//	int n;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// ���ļ�
//	fscanf(pf, "%d %lf", &(s.n), &(s.d));
//
//	printf("%d %lf", s.n, s.d);
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//
//struct S
//{
//	int n;
//	double d;
//	char name[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.24, "zhangsan"};
//
//	FILE* pf = fopen("data.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// �Զ����Ʒ�ʽд
//	fwrite(&s, sizeof(s), 1, pf);
//
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//
//struct S
//{
//	int n;
//	double d;
//	char name[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.24, "zhangsan" };
//
//	FILE* pf = fopen("data.txt", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// ���ļ� - �Զ����Ʒ�ʽ��
//	fwrite(&s, sizeof(s), 1, pf);
//
//	// ��ӡ�ļ�
//	printf("%d %lf %s\n", s.n, s.d, s.name); // 100 3.240000 zhangsan
//
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#include <stdio.h>
//
//struct S
//{
//	int n;
//	double d;
//	char name[10];
//};
//
//int main()
//{
//	char arr[100] = { 0 };
//	struct S s = { 100, 3.14, "zhangsan" };
//
//	// ��һ����ʽ��������ת�����ַ���
//	sprintf(arr, "%d %lf %s\n", s.n, s.d, s.name);
//
//	//  ��ӡ
//	printf("%s\n", arr);
//
//	return 0;
//}


#include <stdio.h>

struct S
{
	int n;
	double d;
	char name[10];
};

int main()
{
	char arr[100] = { 0 };
	struct S s = { 100, 3.14, "zhangsan" };

	struct S tmp = { 0 };

	// ��һ����ʽ��������ת�����ַ���
	sprintf(arr, "%d %lf %s\n", s.n, s.d, s.name);

	// ���ַ�����ʽ��ӡ
	printf("%s\n", arr); // 100 3.140000 zhangsan

	// ��arr�е��ַ�������ȡһ����ʽ��������
	sscanf(arr, "%d %lf %s", &(tmp.n), &(tmp.d), tmp.name);

	// ���ո�ʽ������ʽ��ӡ��
	printf("%d %lf %s\n", tmp.n, tmp.d, tmp.name); // 100 3.140000 zhangsan
	
	return 0;
}