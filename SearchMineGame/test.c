#define _CRT_SECURE_NO_WARNINGS 
#include"game1.h"
//1.布置地雷
//扫雷（排查雷）
//3.把所有不是雷的位置都找到，剩下的都是雷，游戏结束
//多文件负责
//test.c------扫雷游戏的测试
//game.c------扫雷游戏的实现
//game.h------扫雷游戏函数的声明
void menu()
{
	printf("********************************\n");
	printf("************* 1.play ***********\n");
	printf("************* 0.exit ***********\n");
	printf("********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放雷的信息
	char show[ROWS][COLS] = { 0 };//存放排出雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//DisplayBoard(mine, ROW, COL);

	//布置雷区
	SetMine(mine, ROW, COL);
	//排查雷区
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏准备中，牢弟加油咩\n");
			printf("30s后游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏,我会想你的\n");
			break;
		default:
			printf("你选牛魔呢，叫你填1/0，虾啊\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}















