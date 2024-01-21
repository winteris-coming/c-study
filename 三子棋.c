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
	initBoard(board, ROW, COL);//���̳�ʼ��
	playboard(board, ROW, COL);//��ʾ����
	

	while(1)

	{	//�����
		person_move(board, ROW, COL);
		playboard(board, ROW, COL);
		//�ж�
		ret=iswin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//������
		computer_move(board, ROW, COL);
		playboard(board, ROW, COL);
		//�ж�
		ret=iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret=='#')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='*')
	{
		printf("����Ӯ\n");
	}
	else if(ret=='q')
	{
		printf("ƽ��\n");
	}

}
int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));//��ʼ�������������
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
			printf("����������������룺");
		}
	}
	return 0;


}