#define _CRT_SECURE_NO_WARNINGS 1

//һ��fseek
//�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ��
//int fseek ( FILE * stream, long int offset, int origin );
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
//	// ���ļ� �����д
//	// 1����a
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch); // a
//
//	// 2�������һ�ξ�Ҫ��ȡ'c'
//	fseek(pf, 2, SEEK_SET); // ����ʼλ��ƫ��2ָ��c
//	int ch = fgetc(pf);
//	printf("%c\n", ch); // c
//
//	// 3����'b'
//	// ����c ָ��d Ҫ��ȡb��Ҫ�ӵ�ǰλ�ÿ�ʼƫ��-2
//	fseek(pf, -2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch); // b
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//����ftell
//�����ļ�ָ���������ʼλ�õ�ƫ����
//long int ftell ( FILE * stream );

// �����ļ�ָ���������ʼλ�õ�ƫ����
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
//	// ��ȡ'c'
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ��'b'
//	fseek(pf, -2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ����ƫ����
//	// ��ȡb��ָ��c ƫ��������ʼλ��Ϊ2
//	int ret = ftell(pf);
//	printf("%d\n", ret); // 2
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//����rewind
//���ļ�ָ���λ�ûص��ļ�����ʼλ��
//void rewind ( FILE * stream );

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
//	// ��ȡ'c'
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ��'b'
//	fseek(pf, -2, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	// ����ƫ����
//	int ret = ftell(pf);
//	printf("%d\n", ret); // 2
//
//	// ��ָ��ص���ʼλ��
//	// �ٴδ���ʼλ�ô�ӡ ����a
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch); // a
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



// �ġ��ı��ļ��Ͷ������ļ�
//00000000000000000010011100010000
// ʮ����10000�Ķ����ƴ洢��
// ASCII��ʽ / ��������ʽ
// 5�ֽ�       4�ֽ�
//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return -1;
//	}
//
//	// �Զ�������ʽд�ļ�
//	int a = 10000;
//	fwrite(&a, 4, 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



// �塢�ļ������ж�

