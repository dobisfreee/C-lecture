#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int health = 5;
void ViewHP(int health)
{
	for (int i = 1; i < health; i++)
	{
		printf("��");
	}

}

int main()
{
#pragma region Rand()�Լ�

	// time(NULL) : UCT �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ����� �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.
	// srand(time(NULL)); // ���� �߻��⸦ �ʱ�ȭ�ϴ� �Լ��Դϴ�. 
	// 
	//               
	// // printf("result ������ �� : %d\n", result);
	// for (int i = 0; i < 10; i++)
	// {
	// int result = (rand() % 10) + 1; // 0 ~ 32767 ������ ������ �����ϴ� �Լ��Դϴ�. 
	// 	printf("%d\n", result);
	// }
#pragma endregion
#pragma region UP-DOWN GAME
	 int health = 5;
	 srand(time(NULL));
	 int computer = rand() % 31;
	 int player = NULL;
	 printf("%d", computer);
	 while (health > 0)
	 {
	 	ViewHP(health);
	 
	 	printf("���� �Է����ּ��� : ");
	 	scanf_s("%d", &player);
	 		system("cls");
	 
	 	if (player > computer)
	 	{
	 		health--;
	 
	 		printf("DOWN");
	 		printf("\n");
	 
	 	}
	 	else if (player < computer)
	 	{
	 		
	 		health--;
	 
	 		printf("UP");
	 		printf("\n");
	 	}
	 	else
	 	{
	 		system("cls");
	 		break;
	 	}
	 }
	 if (health > 0)
	 {
	 	printf("vicotory");
	 }
	 else
	 {
	 	printf("defeat");
	 }
#pragma endregion


	return 0;
}