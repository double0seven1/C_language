#include "game.h"
void menu()
{
	printf("0.exit/1.play\n");
}

void game()
{
	while (1)
	{
		char rec = ' ';
		char board[ROW][COL];
		init_board(board, ROW, COL);
		display_board(board, ROW, COL);

		player_move(board, ROW, COL);
		rec = is_win(board, ROW, COL);
		if (rec == '&')
		{
			printf("玩家获胜\n");
			break;
		}
		if (rec == 'H')
		{
			printf("和局\n");
			break;
		}
		computer_move(board, ROW, COL);

		//暴力算出赢得情况。
		rec = is_win(board, ROW, COL);
		if (rec == '#')
		{
			printf("电脑获胜\n");
			break;
		}
		if (rec == 'H')
		{
			printf("和局\n");
			break;
		}
		if (rec == 'C')
			;
	}

}

void text()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入数字");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏");
			break;
		case 1:
			game();
			break;
		default:
			printf("请输出正确的数字");
			break;
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	text();
	return 0;
}