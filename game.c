
#include"game.h"

//初始化棋盘 棋子位置都为空格
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)//玩家下棋
{
	printf("玩家走:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标>：");//玩家输入1~ROW；1~COL对应数组底标row-1；col-1
		scanf("%d %d", &x, &y);
		if (((x >= 1) && (x <= row)) && ((y >= 1) && (y <= col)))
		{
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已有棋子,请重新输入\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}

}
void ComputerMove(char board[ROW][COL], int row, int col)//电脑下棋
{
	printf("电脑走:>\n");
	int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
		//电脑随机生成坐标
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
		else
			{
				//该位置已有棋子,重新生成
			}
		
	}


}
int IsFull(char board[ROW][COL],int row,int col)//判断棋盘是否满了
{ 
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
int IsWin(char board[ROW][COL], int row, int col)//判断输赢
{
	//返回四种情况
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2])&&(board[i][2]!=' '))
		{
			return board[i][0];
		}
	}
	//判断列
	for (i = 0; i < row; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[2][i] != ' '))
		{
			return board[0][i];
		}
	}
	//判断对角线
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[2][2] != ' '))
	{
		return board[1][1];
	}
	if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]) && (board[2][0] != ' '))
	{
		return board[1][1];
	}
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';

}//over