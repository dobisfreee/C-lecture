#include <stdio.h>	
#include <stdlib.h>

typedef struct Vector2
{
	int x;
	int y;
}Vector2;

typedef struct
{
	int x;
	int y;
	int z;
}Vector3;

enum STATUS
{
	// ������ �߰��� ���� �����ϰ� �Ǹ� 
	// �� ������ ���� ������ ���� ������ ���� ���·� �����ϰ� �˴ϴ�.


	IDLE, // 0
	ATTACK,
	DIE

	// �������� 0���� �����ϸ�, 1�� �����մϴ�.
};

int Factorial(int n)
{

	if (n <= 1)
	{
		return 1;
	}
	return n * Factorial(n - 1);

}


int main()
{
#pragma region typedef
	//Vector2 vector2;
	//
	//vector2.x = 10;
	//vector2.y = 20;
	//
	//printf("vector2.x : %d\n", vector2.x);
	//printf("vector2.y : %d\n", vector2.y);
	//
	//Vector3 vector3 = { 5, 10, 15 };
	//
	//printf("vector3.x : %d\n", vector3.x);
	//printf("vector3.y : %d\n", vector3.y);
	//printf("vector3.z : %d\n", vector3.z);

#pragma endregion

#pragma region ������
	// enum STATUS status = ATTACK; 
	// 
	// printf("status�� �� : %d\n", status); // 1
	// 
	// switch (status)
	// {
	// case IDLE: printf("��� ����\n");
	// 	break;
	// case ATTACK :printf("���� ����\n");
	// 	break;
	// case DIE : printf("���� ����\n");
	// 	break;
	// }
#pragma endregion

#pragma region ���丮��
	// int n = 0;
	// int result = 1;

	// printf("�� �Է� : ");
	// scanf_s("%d", &n);
	// for (int i = 0; i < n; i++)
	// {
	// 	result *= (i + 1);
	// }
	// printf("%d", result);

	// scanf_s("%d", &n);
	// printf("%d! = %d\n", n, Factorial(n));


#pragma endregion

#pragma region ���� ������

	// int data = 10;
	// 
	// int* ptr = &data;
	// 
	// int** ptr2 = &ptr;
	// 
	// printf("data ������ �� : %d\n", data);
	// 
	// *ptr = 20;
	// 
	// printf("data ������ �� : %d\n", data);
	// 
	// 
	// **ptr2 = 30;
	// 
	// printf("data ������ �� : %d\n", data);
	// 
	// *ptr2 = 20; // ptr ������ ������ ���� �ʱ�ȭ�Ѵ�.
	// 
	// printf("ptr ������ �� : %d\n", ptr);
#pragma endregion

#pragma region ������ �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// int array2D[3][3] =
	// {
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };
	// 
	// printf("array2D[1][0]�� �� : %d\n", array2D[1][0]);
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 
	// 	printf("{");
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 
	// 		printf("%d ", array2D[i][j]);
	// 	}
	// 	printf("}");
	// 	printf("\n");
	// }

	// 2���� �迭�� ��� ���� ���еǸ�, �տ� �ִ� �迭�� ���� �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�. 
#pragma endregion






	return 0;
}
