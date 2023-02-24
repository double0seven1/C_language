#include <stdio.h>
#include <time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void init_board(char board[ROW][COL], int row, int col);

void display_board(char board[ROW][COL], int row, int col);

void player_move(char board[ROW][COL], int row, int col);

void computer_move(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col);
