#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("************  1.play  ************\n");
	printf("************  2.exit  ************\n");
	printf("**********************************\n");
}

void game()
{
	//�洢�׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�Ų��׵���Ϣ
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("ɨ��\n");
				game();
				break;
			case 2:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
		break;
	} while (input);

}

int main()
{
	test();
	return 0;
}