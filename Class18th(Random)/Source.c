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
	// ViewHP(5);
	// while (1)
	// {
	// 	time(NULL);
	// 	srand(time(NULL));
	// 	
	// 	int number = (rand() % 31);
	// 	int answer = NULL;
	// 	int flag = 0;
	// 
	//      
	// 
	// 	 system("cls");
	// 
	// 	 printf("\n");
	// 	 
	// 	
	// 	 printf("정답을 입력하세요 : ");
	// 	 scanf_s("%d", &answer);
	// 
	// 	 for(int i = 0; i < 4; i ++)
	// 	 {
	// 		 system("cls");
	// 		
	// 		 if (answer == number)
	// 		 {
	// 			 printf("정답입니다\n");
	// 			 flag = 1;
	// 			 break;
	// 	     }
	// 		 else
	// 		 {
	// 			 printf("틀렸습니다\n");	
	// 			 ViewHP(health--);
	// 			 
	// 			 printf("\n");
	// 			 if(number > answer)
	// 			 {
	// 				 printf("UP\n");
	// 			 }
	// 			 else
	// 			 {
	// 				 printf("DOWN\n");
	// 			 }
	// 		 }
	// 		 printf("정답을 입력하세요 : ");
	// 		 scanf_s("%d", &answer);
	// 	}
	// 	 system("cls");
	// 	 if (flag == 1)
	// 	 {
	// 		 printf("Victory\n");
	// 		 break;
	// 	 }
	// 	 else(flag == 0);
	// 	 {
	// 		 printf("Defeat\n");
	// 		 break;
	// 	 }
	// }
#pragma endregion


	return 0;
}