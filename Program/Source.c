#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

int width = 120;
int height = 30;

HANDLE screen[2];  // ���۸� �����մϴ�. 
				// screen[0] : front buffer
				// screen[1] : back buffer


// HANDLE �ε����� �����ؼ� ���۸� ��ü��Ű�� ����
int screenIndex = 0; 

void GotoXY(int x, int y)
{
	COORD position = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// ���۸� �ʱ�ȭ�ϴ� �Լ�
void InitalizeScreen()
{
	CONSOLE_CURSOR_INFO cursor; 

	// ������ ���� ������, ���� ������ 
	COORD size = { width, height };

	// left, top, right, bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// front buffer�� �����մϴ�. 
	screen[0] = CreateConsoleScreenBuffer
	(GENERIC_READ | GENERIC_WRITE,   0,       NULL,    CONSOLE_TEXTMODE_BUFFER,   NULL);
	// �б�             ����      �������   ���ȼӼ�       ���۸��            ���ȼӼ�


	// ������ ����� �����մϴ�.
	SetConsoleScreenBufferSize(screen[0], size);

	// ������ ��ġ�� �����մϴ�
	SetConsoleWindowInfo(screen[0], TRUE, &rect); // TRUE : ������ ��ġ�� �����մϴ�. 

	
	
	// back buffer�� �����մϴ�.
	screen[1] = CreateConsoleScreenBuffer
	(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	
	SetConsoleScreenBufferSize(screen[1], size);

	
	SetConsoleWindowInfo(screen[1], TRUE, &rect);  

	// Ŀ���� Ȱ��ȭ ����
	// false : Ŀ���� ����ϴ�. 
	// true : Ŀ���� ���Դϴ�. 

	cursor.bVisible = FALSE; 
	
	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);

} 

// ���۸� ��ü�ϴ� �Լ�
void FlipScreen()
{
	// ���۸� �ϳ��� Ȱ��ȭ��ų �� �ִ� �Լ�
	SetConsoleActiveScreenBuffer(screen[screenIndex]);

	//    0             1
	screenIndex = !screenIndex;
}

// ��ü�� ���۸� �����ִ� �Լ�
void ClearScreen()
{
	COORD position = { 0, 0 };

	DWORD written;

	FillConsoleOutputCharacter   // ȭ�鿡 ���ڸ� �׷��ִ� �Լ� 
	(
		screen[screenIndex],	 // ȭ�� ����
		' ',					 // ȭ�鿡 �׷��� ����	
		width * height,			 // ȭ�鿡 �׷��� ������ ����
		position,				 // ȭ�鿡 �׷��� ������ ��ġ
		&written				 // ������ ���� 
	);
}

// ���۸� �����ϴ� �Լ� 
void ReleaseScreen()
{
	CloseHandle(screen[0]); // ���۸� �����մϴ�. 
	CloseHandle(screen[1]);
}

// ���۸� ����ϴ� �Լ�
void DrawScreen(int x, int y, const char * string)
{
	COORD position = { x, y };
	DWORD written;
	SetConsoleCursorPosition(screen[screenIndex], position); // ������ ��ġ�� �����մϴ�. 

	WriteFile
	(
		screen[screenIndex],  // ����
		string,				  // ���ڿ�
		strlen(string),		  // ���ڿ��� ����
		&written,             // ���ڿ��� ����
		NULL				  // ���ȼӼ�
	); // ���ۿ� ���ڿ��� ����մϴ�. 
}

typedef struct Star
{
	int x;
	int y;
	const char* shape;
}Star;


int main()
{
	
	// 1. ���۸� �ʱ�ȭ�մϴ�. (�ѹ���)
	InitalizeScreen();
	srand(time(NULL));
	int x = rand() % 120;
	int y = rand() % 30; 
	
	Star star = { x, y, "��" };

	while (1)
	{
		int direction = rand() % 4;
		DrawScreen(star.x, star.y, star.shape);

		for (int i = 0; i < 5; i++)
		{

			// 2. ���۸� ��ü�մϴ�. 
			FlipScreen();

			if (direction == 0)
			{
				DrawScreen(star.x--, star.y, star.shape);
			}
			else if (direction == 1)
			{
				DrawScreen(star.x, star.y--, star.shape);
			}
			else if (direction == 2)
			{
				DrawScreen(star.x++, star.y, star.shape);
			}
			else if (direction == 3)
			{
				DrawScreen(star.x, star.y++, star.shape);
			}
			Sleep(100);
		// 3. ��ü�� ������ ������ �����մϴ�. 
		ClearScreen();
		}


		



	}
	// 4. ���۸� �����մϴ�. 
	ReleaseScreen();


	
	return 0;
}