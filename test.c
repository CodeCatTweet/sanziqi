#include"game.h"

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
				getchar();//���������
				game();//��Ϸ����
				break;
			case '0'://�˳���Ϸ
				getchar();
				printf("�˳���Ϸ\n");
				break;
			default://������������ʱ
				getchar();
				printf("�������\n");
				break;

		}
	} while (input!='0');//��0����Ϊ�� 0Ϊ��
	
	return 0;
}
