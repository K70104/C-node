#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ָ��
int main()
{
	int a = 10; // ���ڴ�����4���ֽڿռ䣬������10
	printf("%p\n", &a); // & - ȡ��ַ������ ��Ŀ
	// %p - ����ַ�ķ�ʽ��ӡ

	int* pa = &a;
	// pa ��һ����ŵ�ַ�ı�������Ϊָ�����
	// int* ָ�����������

	char ch = 'w';
	char* pa = &ch;

	return 0;
}


int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20; // * - �����ò�����
	printf("%d\n", a);
	return 0;
}


int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	printf("%c\n", ch);
	return 0;
}


// ָ������Ĵ�С
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}


// �ṹ��
struct Student
{
	char name[20];
	int age;
	char sex[5];
	char id[12];
};

int main()
{
	struct Student s1 = { "����", 20, "��", "1905468128" };
	struct Student s1 = { "����", 19, "Ů", "1904927125" };

	return 0;
}


// ��ӡ
struct Book
{
	char name[20];
	int price;
	char author;
};

int main()
{
	struct Book b1 = { "����¶�", 55, "�����˹" };

	struct Book* pb = &b1;
	printf("%s %d %s\n", (*pb).name, (*pb).price, (*pb).author);
	printf("%s %d %s\n", pb->name, pb->price, pb->author);

	// . �ṹ�����.��Ա��
	// -> �ṹ��->��Ա��
	return 0;
}