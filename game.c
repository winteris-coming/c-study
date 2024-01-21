#define ROW 3
#define COL 3
#include"game.h"
void menu()
{
	printf("##################################\n");
	printf("#######1.play    2.quit#########\n");
	printf("请选择：");
}

void initBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j = 0;j<col;j++)
		{
			board[i][j] = '  ';
		}
	}
}
void playboard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i=0;i<row;i++)
	{
		for (j = 0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
void person_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：》\n");
	while(1)
	{
		printf("请输入要下的坐标：》\n");
		scanf("%d%d", &x, &y);
		if (x > 0 && x < 4&&y>0&&y<4)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
				printf("该坐标已存在");
		}
		else
		{
			printf("坐标非法！");
		}
	}

}
void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}

		
		
	}
}

int board_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}

		}
	}
	return 1;
}

char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;

	if(board[0][0]==board[1][1]&& board[1][1]== board[2][2]&&board[0][0]!=' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	for (i=0;i<row;i++)
		if(board[i][0]== board[i][1]&& board[i][1]== board[i][2]&& board[i][0]!=' ')
		{
			return board[i][1];
		}
	for (i = 0; i < col; i++)
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[i][1];
		}
	if (board_full(board,ROW,COL) == 1)
		return 'q';
	if (board_full(board, ROW, COL) == 0)
		return 'C';
}
