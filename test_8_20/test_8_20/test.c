#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//void menu()
//{
//	printf("**************************************\n");
//	printf("**********      1. play     **********\n");
//	printf("**********      0. exit     **********\n");
//	printf("**************************************\n");
//}
//
//void game()
//{
//	char board[ROW][COL];
//	InitBoard(board, ROW, COL);
//	DisPlayBoard(board, ROW, COL);
//	char ret = 0;
//	while (1)
//	{
//		PlayerMove(board, ROW, COL);
//		DisPlayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//			break;
//		ComputerMove(board, ROW, COL);
//		DisPlayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//		printf("���Ӯ\n");
//	if (ret == '#')
//		printf("����Ӯ\n");
//	else
//		printf("ƽ��\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//
//
//	} while (input);
//
//	return 0;
//}




//void menu()
//{
//	printf("**************************************\n");
//	printf("**********      1. play     **********\n");
//	printf("**********      0. exit     **********\n");
//	printf("**************************************\n");
//}
//
//void game()
//{
//	char mine[ROWS][ROWS] = { 0 };
//	char show[ROWS][ROWS] = { 0 };
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	SetMine(mine, ROW, COL);
//	DisPlayBoard(show, ROW, COL);
//	FindMine(mine, show, ROW, COL);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ:>\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��:>\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}




//





