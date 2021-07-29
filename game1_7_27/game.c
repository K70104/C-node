#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

// ��ʼ���ɿո�
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


// ��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	// ֻ�ܴ�ӡ3*3����
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	 ��ӡ����
	//	printf(" %c | %c | %c \n", board[i][0], board[i][2], board[i][2]);
	//	 ��ӡ�ָ���
	//	if (i < row - 1) // ֻ��2��
	//	{
	//		printf("---|---|---\n");
	//	}
	//}

	// ��ѭ�� ���Կ��� �����ӡ
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// ��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			// �����ӡ
			printf(" %c ", board[i][j]); 
			if (j < col - 1) // " %c "��|��һ��
				printf("|");
		}
		printf("\n"); // ����һ��" %c | %c | %c "���д�ӡ"---|---|---"
		// ��ӡ�ָ���
		if (i < row - 1) // �ָ��еĴ�ӡ��һ�� ���ж�
		{
			for (j = 0; j < col; j++)
			{
				printf("---"); // ---��|��һ��
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n"); // ����һ�зָ��л���
	}
}


// �������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("����ߣ�\n");

	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������:>");
		scanf("%d%d", &x, &y);  // �û�����2 1 ����������ʵ��1 0
		// ���û��ںϷ���Χ������
		if (x >= 1 && x <= row && y >= 1 && y <= col) // �ж��Ƿ��ںϷ���Χ
		{
			// �жϸ������Ƿ��¹���
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ���������Χ\n");
		}
	}
}


// ��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");

	while (1)
	{
		// ����������꣨�����������srand ͷ�ļ�stdlib.h time.h��
		x = rand() % row; // row��3  x��0-2��Χ
		y = rand() % col;
		if (board[x][y] == ' ') // �жϸ������Ƿ��¹��� ���Բ������� ���ü�1 ֱ��ѭ��
		{
			board[x][y] = '#';
			break;
		}
	}
}


// �ж���Ϸ��Ӯ
IsFull(char board[ROW][COL], int row, int col) // �ж�ƽ��
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ') // �ж��Ƿ��пո�
			{
				return 0; // ����
			}
		}
	}
	return 1; // �������� ����1
}

char IsWin(char board[ROW][COL], int row, int col)
{
	// ����
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// �ж��Ƿ���� �Ҳ����ǿո� �����ȷ���
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	// ����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	// �����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	
	// �ж�ƽ�֣���ǰ���ж�û����Ӯ��
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	// ��Ϸ������û����Ӯû��ƽ�֣�
	return 'C';

}