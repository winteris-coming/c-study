#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<string.h>
#include<time.h>
#include"game.h"
void game()
{
	char board[ROW][COL] = {0};
	char ret = ' ';
	initBoard(board, ROW, COL);//棋盘初始化
	playboard(board, ROW, COL);//显示棋盘
	

	while(1)

	{	//玩家走
		person_move(board, ROW, COL);
		playboard(board, ROW, COL);
		//判断
		ret=iswin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//电脑走
		computer_move(board, ROW, COL);
		playboard(board, ROW, COL);
		//判断
		ret=iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret=='#')
	{
		printf("玩家赢\n");
	}
	else if(ret=='*')
	{
		printf("电脑赢\n");
	}
	else if(ret=='q')
	{
		printf("平局\n");
	}

}
int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));//初始化随机数发生器
	char board[ROW][COL] = { 0 };
	
	while(1)
	{
		menu();
		scanf("%d", &num);
		if (num == 1)
		{
			game();
		}
		else if (num == 0)
		{
			break;
		}
		else
		{
			printf("输入错误，请重新输入：");
		}
	}
	return 0;


}