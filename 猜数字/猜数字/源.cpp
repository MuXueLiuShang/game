#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//��1-100֮�������
void menu()
{
	printf("***********************************\n");
	printf("****    1.play      0.exit   ******\n");
	printf("***********************************\n");
}
//RAND_MAX-32767
void game()
{
	//���ɸ������
	int ret = 0;
	int guess = 0;//���ղµ�����
	//��ʱ����������������������ʼ��
	//time_t time(time_t*timer)
	ret = rand()%100+1;//����1-100֮�������
	//printf("%d\n", ret);
	while (1)
	{
		printf("������֣�");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}

	} while (input);
	return 0;
}