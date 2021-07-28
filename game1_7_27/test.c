// ������
// test.c - ������Ϸ
// game.h - ��Ϸ����������
// game.c - ��Ϸ��ʵ��

#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


// ��ӡ�˵�
void menu()
{
	printf("*********************************\n");
	printf("*********    1. play    *********\n");
	printf("*********    0. exit    *********\n");
	printf("*********************************\n");
}

// ������Ĺ���
void game()
{
	char board[ROW][COL]; // ��������

	// ��ʼ������ - board��Ԫ�ض����ո�
	InitBoard(board, ROW, COL);

	// ��ӡ����
	DisplayBoard(board, ROW, COL);

	// ����
	char ret = 0;
	while (1)
	{
		// �������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL); // �������һ�� ��ӡ����

		// �ж���Ϸ��Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') // ����C���� �����ж�
		{
			break;
		}

		// ��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL); // ��ӡ��������

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);

	return 0;
}