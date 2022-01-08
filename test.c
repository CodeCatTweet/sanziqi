
#include"game.h"

void menu()
{//打印菜单界面
	printf("*********************************\n");
	printf("**********   1.play    **********\n");
	printf("**********   0.exit    **********\n");
	printf("*********************************\n");
}
void game()
{
	//游戏过程
	
	char board[ROW][COL];//创建棋盘数组
	Initboard(board,ROW,COL);//初始化棋盘 棋子位置都为空格
	DisplayBoard(board,ROW,COL);//打印棋盘
	//下棋
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret=IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret=IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	char input = 0;//定义菜单选择值
	do
	{
		menu();//打印菜单
		printf("请选择>");
		scanf("%c", &input);//获取选择值
		switch(input)
		{
			case '1'://开始游戏
				printf("三子棋\n");
				game();//游戏过程
				getchar();//清除缓存区
				break;
			case '0'://退出游戏
				printf("退出游戏\n");
				getchar();
				break;
			default://输入其他东西时
				printf("输入错误\n");
				getchar();
				break;

		}
	} while (input!='0');//非0数字为真 0为假
	
	return 0;
}
