#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*****************************************\n");
	printf("***********      1. play       **********\n");
	printf("***********      0. exit       **********\n");
	printf("*****************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 }; // ���úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 }; // ����Ų�����׵���Ϣ
	
	// ��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	// ��ӡ����
	//DisplayBoard(mine, ROW, COL); // ��ӡ�ź��׵����� ֻ�������9*9
	//DisplayBoard(show, ROW, COL);

	// ������
	SetMine(mine, ROW, COL); // �׷���mine�����9*9��
	//DisplayBoard(mine, ROW, COL); // ���ú��׺� ��ӡ
	DisplayBoard(show, ROW, COL);

	// �Ų���
	FindMine(mine, show, ROW, COL); // �漰mine��show����
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}