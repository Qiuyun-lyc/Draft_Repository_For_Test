#define _CRT_SECURE_NO_WARNINGS 
#include"game1.h"
//1.���õ���
//ɨ�ף��Ų��ף�
//3.�����в����׵�λ�ö��ҵ���ʣ�µĶ����ף���Ϸ����
//���ļ�����
//test.c------ɨ����Ϸ�Ĳ���
//game.c------ɨ����Ϸ��ʵ��
//game.h------ɨ����Ϸ����������
void menu()
{
	printf("********************************\n");
	printf("************* 1.play ***********\n");
	printf("************* 0.exit ***********\n");
	printf("********************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����ų��׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//DisplayBoard(mine, ROW, COL);

	//��������
	SetMine(mine, ROW, COL);
	//�Ų�����
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ����Ϸ׼���У��εܼ�����\n");
			printf("30s����Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ,�һ������\n");
			break;
		default:
			printf("��ѡţħ�أ�������1/0��Ϻ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}















