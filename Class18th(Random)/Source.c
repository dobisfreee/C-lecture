#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int health = 5;
void ViewHP(int health)
{
	for (int i = 1; i < health; i++)
	{
		printf("♥");
	}

}

int main()
{
#pragma region Rand()함수

	// time(NULL) : UCT 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된 시간을 초(sec)로 반환하는 함수입니다.
	// srand(time(NULL)); // 난수 발생기를 초기화하는 함수입니다. 
	// 
	//               
	// // printf("result 변수의 값 : %d\n", result);
	// for (int i = 0; i < 10; i++)
	// {
	// int result = (rand() % 10) + 1; // 0 ~ 32767 사이의 난수를 생성하는 함수입니다. 
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
	 
	 	printf("값을 입력해주세요 : ");
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