#include<string.h>
#pragma once
void menu();
void game();
void initBoard(char board[ROW][COL], int row, int col);
void playBoard(char board[ROW][COL], int row, int col);
void person_move(char board[ROW][COL],int row,int col);
void computer_move(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
int board_full(char board[ROW][COL], int row, int col);