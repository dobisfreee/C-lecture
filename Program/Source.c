#include <stdio.h>

void Awake()
{
	printf("Awake\n");

	Awake();
}

void Recursive(int count)
{
	if (count >= 4)
	{
		return;
	}
	printf("count ������ �� : %d\n", count);
	
	
	Recursive(count + 1);
}

inline void Process(int data)
{
	printf("%d %%��ŭ �����Ͱ� ó���Ǿ����ϴ�.", data);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�, 
	// ������ �� �ζ��� �Լ��� �����Ѵ��� ��Ȳ�� ���� �Ϲ� �Լ��� ��ȯ�Ǳ⵵ �մϴ� by �����Ϸ�. 
}



int main()
{
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�. 

	// Awake();

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������ �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��մϴ�. 

	// Recursive(1);

	// ��� �Լ��� ��� Ư���� �������� �Լ��� ��ȯ�ؾ� �ϸ�, 
	// ��������� ȣ���� �Լ��� ���� �����ӿ� ���� �������� ȣ��� �Լ����� ���ʴ�� ���� �������� �����˴ϴ�. 
#pragma endregion

#pragma region  �ִ񰪰� �ּڰ�

	//	int max = 0;
	//	
	//	int min = 0;
	//	
	//	int array[ ] = { 6, 11, 1, 2, 8 };
	//	
	//	max =  array[0];
	//	
	//	min = array[0];
	//	
	//	for (int i = 1; i < 5; i++)
	//	{
	//		
	//		
	//		if (array[i] > max)
	//		{
	//			max = array[i];
	//		}
	//		
	//		if (array[i] < min)
	//		{
	//			min = array[i];
	//		}
	//	
	//		
	//		
	//	
	//	
	//	}
	//	printf("�ִ� : %d", max);
	//	printf("�ּڰ� : %d", min);
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�. 

	// Process(75);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ��� ��������,
	// �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�. 
#pragma endregion

#pragma region �Ҽ�
	int insert = 0;
	int temp = 0;
	printf("���� �Է����ּ��� : ");
	scanf_s("%d", &insert);
	
	for (int i = 2; i <= insert; i++)
	{
		if (insert % i == 0)
		{
			temp ++;

		}

		
	
	}
	if (temp == 1)
		printf("�Ҽ��Դϴ�");
	else
		printf("�Ҽ��� �ƴմϴ�");
	
#pragma endregion



	return 0;
}