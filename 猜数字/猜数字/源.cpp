#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//猜1-100之间的数字
void menu()
{
	printf("***********************************\n");
	printf("****    1.play      0.exit   ******\n");
	printf("***********************************\n");
}
//RAND_MAX-32767
void game()
{
	//生成个随机数
	int ret = 0;
	int guess = 0;//接收猜的数字
	//用时间戳来设置随机数的生成起始点
	//time_t time(time_t*timer)
	ret = rand()%100+1;//生成1-100之间随机数
	//printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字：");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
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
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}

	} while (input);
	return 0;
}