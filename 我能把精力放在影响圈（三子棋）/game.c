#include "game.h"

void init_board(char board[ROW][COL], int row, int col)
{
	int m = 0;   int n = 0;
	for (m = 0; m < row; m++)
	{
		for (n = 0; n < col; n++)
			board[m][n] = ' ';
	}
}

void display_board(char board[ROW][COL], int row, int col)
{
	int m = 0;  int n = 0; int j = 0;
	for (m = 0; m < row; m++)
	{
		for (n = 0; n < col; n++)
		{
			printf(" %c ",board[m][n]);
			if (n < row - 1)
				printf("|");
		}
		printf("\n");
		if (m < row - 1)
		{
			for (j=0;j<col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	while (1)
	{
		printf("请输入坐标:");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
				board[x - 1][y - 1] = '&';
			else
				printf("该坐标已被占用\n");
		}
		else
			printf("输入坐标错误\n");
	}
}

void computer_move(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;  int y = rand() % col;
		if (board[x][y] == ' ')
			board[x][y] = '#';
		else
			;
	}
}

char is_win(char board[ROW][COL], int row, int col)
{
	int m = 0; int n = 0;  int sum = 0;
	for (m = 0; m < row; m++)//判断行
	{
		if (board[m][0] == board[m][1] && board[m][1] == board[m][2] && board[m][0] != ' ')
		{
			return board[m][0];
		}
	}
	for (n = 0; n < col; n++)//判断列
	{
		if (board[0][n] == board[1][n] && board[1][n] == board[2][n] && board[0][n] != ' ')
		{
			return board[0][n];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] != board[0][2] != ' ')
		return board[0][2];
	
	for (m = 0; m < row; m++)
	{
		for (n = 0; n < col; n++)
		{
			if (board[m][n] == ' ');
			sum++;
		}
	}
	if (sum == 0)
		return 'H';

	return 'C';
}