#include <stdio.h>

void Function()
{
	printf("Function\n");
}

void Damage(int attack)
{
	printf("%d ��ŭ Damage�� �޾ҽ��ϴ�.\n", attack);
}

float Add(float x, float y)
{
	return x + y;
}

void Recovery(float health)
{
	health = 100;
}

void Swap(int* x, int* y)
{
	int temp = *y;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
#pragma region  �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� �����Դϴ�. 

	// Function();

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�. 


#pragma endregion

#pragma region  �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� �����Դϴ�. 

	// Damage(25);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������, �Լ��� ����Ǹ� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�. 

	//printf("Add(10.5f, 20.75f)�� ��� : %f\n", Add(10.5f, 20.75f));	


	// �ϳ��� �Լ����� ���� �ٸ� �ڷ����� �Ű� ������ �Բ� ������ �� ������, ���� ���� �Ű� ������ ������ ���� �ֽ��ϴ�. 
#pragma endregion

#pragma region  �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�. 

	// int health = 50;
	// 
	// Recovery(health);
	// 
	// printf("health ������ �� : %d\n", health);

	// �Լ��� ȣ���� �� ������ ���� �μ��� �����ϰ� �Ǹ� �Լ��� �Ű� ������ ������ ����� ����
	// ���޵Ǳ� ������ �μ��� ������ ������ �Լ� ������ �Ͼ ���꿡 ���� ������ ���� �ʽ��ϴ�. 

	// int a = 10;
	// int b = 20;
	// printf("a ������ �� : %d - b ������ �� : %d\n", a, b);
	// Swap(&a, &b);
	// printf("a ������ �� : %d - b ������ �� : %d\n", a, b);

	// �Լ��� ȣ���� �� ������ �ּҸ� �μ��� �����ϰ� �Ǹ� 
	// ������ ������ �ּҰ� �����Ǿ� �μ��� ������ ������ ���� �Լ� ������ �Ͼ ���꿡 ���� ������ �޽��ϴ�. 

	// swap
	//	int a = 10;
	//	int b = 20; 
	//	int temporary = 0;
	//	printf("a�� �� : %d - b�� �� : %d\n", a, b);
	//	
	//	temporary = a;
	//	a = b;
	//	b = temporary;
	//	
	//	printf("a�� �� : %d - b�� �� : %d\n", a, b);










#pragma endregion


	return 0; //���� �´ٸ� 0�� ��ȯ 









}