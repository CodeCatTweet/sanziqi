#include"game.h"

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
				getchar();//清除缓存区
				game();//游戏过程
				break;
			case '0'://退出游戏
				getchar();
				printf("退出游戏\n");
				break;
			default://输入其他东西时
				getchar();
				printf("输入错误\n");
				break;

		}
	} while (input!='0');//非0数字为真 0为假
	
	return 0;
}
