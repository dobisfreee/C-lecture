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
	// 	 printf("������ �Է��ϼ��� : ");
	// 	 scanf_s("%d", &answer);
	// 
	// 	 for(int i = 0; i < 4; i ++)
	// 	 {
	// 		 system("cls");
	// 		
	// 		 if (answer == number)
	// 		 {
	// 			 printf("�����Դϴ�\n");
	// 			 flag = 1;
	// 			 break;
	// 	     }
	// 		 else
	// 		 {
	// 			 printf("Ʋ�Ƚ��ϴ�\n");	
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
	// 		 printf("������ �Է��ϼ��� : ");
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