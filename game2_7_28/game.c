#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

// ��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


// ��ӡ����
// 11*11�±�0-11  ����9*9������1-9 ��1��ʼ
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 0; i <= 9; i++) // ��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) // ��1��ʼ С�ڵ���9
	{
		int j = 0;
		printf("%d ", i); // ��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------------\n");
}


// ������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;

	while (count)
	{
		// 1. �������ֵ�±�
		// main�������rand
		int x = rand() % row + 1; // row��9 %9��0-8 ��һ��1-9
		int y = rand() % col + 1;

		if (board[x][y] != '1')
		{
			board[x][y] = '1'; // �ж����û���� ������
			count--; // ���óɹ�--
		}
	}
}


// �Ų���
int GetMineCount(char mine[ROWS][COLS], int x, int y) // �����׵ĸ���
{
	// �����ַ� ���ַ�0�������� һ��8��
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT) // 71
	{
		printf("������Ҫ�Ų������:>\n");
		scanf("%d %d", &x, &y);
		// �ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź��㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y); // ����Χ�м�����
				show[x][y] = count + '0'; // ��'3'-'0'=3 ��ӡ�����ַ� ����Ҫ���ַ�0
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�����������\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}