#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#define _CRT_SECURE_NO_WARNINGS

#define SIZE 100000

void Load(const char* name)
{
	FILE* file = fopen(name, "r");

	char buffer[SIZE] = { 0, };

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);

}

int main()
{
#pragma region ���� �����
	// ���� ������� ���ؼ��� ������ ���� �ݴ� ������ �ʿ��մϴ�.  // �� �Ŀ� ���� ������ ������ �Ϻκ� �ս� 
	// ������ ���� ���ؼ��� fopen �Լ��� ����մϴ�.
	// fopen �Լ��� ������ ��ο� ������ ��带 ���ڷ� �޽��ϴ�.
	// ������ ��δ� ������ ��θ� ���ڿ��� �Է��ϸ� �˴ϴ�.
	// 
	// r : �б� ��� // read
	// w : ���� ��� // write
	// a : �߰� ��� // add
	// r+ : �б�/���� ���
	// w+ : �б�/���� ���
	// a+ : �б�/���� ���
	// 
	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Level : 5", file);
	// fputs("Stage : 3", file);
	// fputs("HP : 100", file);
	// 
	// fclose(file);
	// 
	// fclose �Լ��� ������ �����͸� ���ڷ� �޽��ϴ�.
	// ������ ������ ������ �����Ͱ� NULL�� �ʱ�ȭ�˴ϴ�.
	// ������ ���� ������ ������ ��� �����ְ� �Ǿ� �����Ͱ� �սǵ� �� �ֽ��ϴ�.

	// FILE* file = fopen("data.txt", "r");
	// 
	// char buffer[SIZE] = { 0, };
	// 
	// fread(buffer, 1, SIZE, file);
	// 
	// printf("%s", buffer);
	// 
	// fclose(file);

#pragma endregion

#pragma region ASCII Generator


	//Load("Dragon.txt");

	while (1)
	{
		Load("Resources/data.txt");

		system("cls");
	}



#pragma endregion















	return 0;
}