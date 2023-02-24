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
			printf("��һ�ʤ\n");
			break;
		}
		if (rec == 'H')
		{
			printf("�;�\n");
			break;
		}
		computer_move(board, ROW, COL);

		//�������Ӯ�������
		rec = is_win(board, ROW, COL);
		if (rec == '#')
		{
			printf("���Ի�ʤ\n");
			break;
		}
		if (rec == 'H')
		{
			printf("�;�\n");
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
		printf("����������");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ");
			break;
		case 1:
			game();
			break;
		default:
			printf("�������ȷ������");
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