#include <stdio.h>


int itemCode;

int level = 1;

void Stage()
{
	level += 1;
}

void Score()
{
	// ���� ������ �� �� ���� �ʱ�ȭ�� �̷������ �����Դϴ�. 
	static int score = 0;

	score++;

	printf("score ������ �� : %d\n", score);
}

int main()
{
#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ { } �������� ������ �� ������, 
	// { }�� ����� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�. 

	// int data = 100;
	// 
	// {
	// 	int data = 200;
	// 
	// 	// ���� ����� ��ġ�� �ִ� data ������ �����մϴ�. 
	// 	printf("data ������ �� : %d\n", data); //200
	// }
	// 
	// printf("data ������ �� : %d\n", data);

#pragma endregion

#pragma region  ���� ����
	// �Լ� �ܺο� ����� ������, ��𿡼����� ������ �����ϸ�, 
	// ���α׷��� ����� �� �����ǰ�, ���α׷��� ����� �� �޸𸮿��� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�.

	// Stage();

	// printf("level ������ �� : %d\n", level);
	// printf("itemCode ������ �� : %d\n", itemCode);


#pragma endregion

#pragma region ���� ����
	// static�̶�� Ű���带 ����ϰ�, 
	// ���� ������ Ư���� �����鼭 ���� ������ Ư¡�� ������ �ִ� �����Դϴ�. 

	// score();
	// score();
	// score();
#pragma endregion

#pragma region ���μ�����
	// int data = 0;
	// 
	// 
	// printf("���� �Է����ּ���: ");
	// scanf_s("%d", &data);
	// 
	// for (int i = 2; i <= data; i++)
	// {
	// 	if (data % i == 0)
	// 	{
	// 
	// 
	// 		data /= i;
	// 
	// 		printf("%d ", i);
	// 
	// 		i--;
	// 	}
	// 
	// }

#pragma endregion
















	return 0;
}