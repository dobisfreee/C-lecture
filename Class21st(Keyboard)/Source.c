#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
	// x��� y�� ��ǥ ����
	COORD position = { x,y };

	// Ŀ�� �̵� �Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	// GetStdHandle(STD_OUTPUT_HANDLE) : ǥ�� ��� �ڵ��� �����ɴϴ�.
	// SetConsoleCursorPosition : �ܼ�â�� Ŀ���� �̵��մϴ�. 

}






int main()
{

	// key = 0;
	//
	//x = 2;
	//y = 5;
	//
	//GotoXY(x, y);
	//printf("��");
	//
	//
	//
	//
	//e (1)
	//
	//if (_kbhit())
	//{
	//	
	//	key = _getch(); // Ű���� �Է��� �޽��ϴ�. 
	//	system("cls");
	//	if (key == -32)
	//	{
	//		key = _getch();
	//	}
	//	
	//
	//	switch (key)
	//	{
	//	case UP: if(y >0)
	//		y--;
	//	
	//		break;
	//	case LEFT: if( x>0) x -= 2;
	//		break;
	//	case RIGHT: if(x <118) x += 2;
	//		break;
	//	case DOWN: if(y < 30) y++;
	//		break;
	//
	//	}
	//	
	//	GotoXY(x, y);
	//	printf("��");

}

	



















	return 0;
}