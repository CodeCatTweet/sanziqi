
#include"game.h"

void menu()
{//��ӡ�˵�����
	printf("*********************************\n");
	printf("**********   1.play    **********\n");
	printf("**********   0.exit    **********\n");
	printf("*********************************\n");
}
void game()
{
	//��Ϸ����
	
	char board[ROW][COL];//������������
	Initboard(board,ROW,COL);//��ʼ������ ����λ�ö�Ϊ�ո�
	DisplayBoard(board,ROW,COL);//��ӡ����
	//����
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret=IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret=IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	char input = 0;//����˵�ѡ��ֵ
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%c", &input);//��ȡѡ��ֵ
		switch(input)
		{
			case '1'://��ʼ��Ϸ
				printf("������\n");
				game();//��Ϸ����
				getchar();//���������
				break;
			case '0'://�˳���Ϸ
				printf("�˳���Ϸ\n");
				getchar();
				break;
			default://������������ʱ
				printf("�������\n");
				getchar();
				break;

		}
	} while (input!='0');//��0����Ϊ�� 0Ϊ��
	
	return 0;
}
