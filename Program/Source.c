#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Character.h"
#define WIDTH 11
#define HEIGHT 11
char maze[WIDTH][HEIGHT];




void Initialize()
{
	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1000100002");
	strcpy(maze[2], "1010101111");
	strcpy(maze[3], "1010101001");	
	strcpy(maze[4], "1010101001");
	strcpy(maze[5], "1010101001");
	strcpy(maze[6], "1010101001");
	strcpy(maze[7], "1010101001");
	strcpy(maze[8], "1011101001");
	strcpy(maze[9], "1000000001");
	strcpy(maze[10],"1111111111");
	
}

void Renderer()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if(maze[i][j] == '1')
			{
				printf("¡á");
			}
			else if (maze[i][j] == '2')
			{
				printf("¡Ý");
			}
		}
		printf("\n");
	}
}

int main()
{
	Character character = { 2, 1 , "¡Ú" };

	Initialize();

	while (1)
	{
		Renderer();

		GotoXY(character.x, character.y);

		printf("%s", character.shape);

		system("cls");
	}
	
	return 0;
}