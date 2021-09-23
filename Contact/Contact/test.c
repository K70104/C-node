#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("************************************\n");
	printf("*****   1. add     2. del      *****\n");
	printf("*****   3. search  4. modify   *****\n");
	printf("*****   5. show    6. sort     *****\n");
	printf("*****   0. exit                *****\n");
	printf("************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};

int main()
{
	int input = 0;

	// ����һ��ͨѶ¼
	struct Contact con;
	// ��ʼ��ͨѶ¼
	InitContact(&con);
	// �����3���˵���Ϣ���ռ䲻����������

	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			// ����ͨѶ¼
			DestroyContact(&con);
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}
