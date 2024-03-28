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
	printf("count 변수의 값 : %d\n", count);
	
	
	Recursive(count + 1);
}

inline void Process(int data)
{
	printf("%d %%만큼 데이터가 처리되었습니다.", data);

	// 인라인 함수는 컴파일 시점에 확장되며, 
	// 컴파일 시 인라인 함수로 선언한더라도 상황에 따라 일반 함수로 변환되기도 합니다 by 컴파일러. 
}



int main()
{
#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다. 

	// Awake();

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생합니다. 

	// Recursive(1);

	// 재귀 함수의 경우 특정한 시점에서 함수를 반환해야 하며, 
	// 재귀적으로 호출한 함수는 스택 프레임에 의해 마지막에 호출된 함수부터 차례대로 스택 영역에서 해제됩니다. 
#pragma endregion

#pragma region  최댓값과 최솟값

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
	//	printf("최댓값 : %d", max);
	//	printf("최솟값 : %d", min);
#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다 함수의 코드를 복사하여 전달하는 방식의 함수입니다. 

	// Process(75);

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가 빠르지만,
	// 인라인 함수를 많이 사용하게 되면 함수의 코드가 복사되기 때문에 실행 파일의 크기가 커지게 됩니다. 
#pragma endregion

#pragma region 소수
	int insert = 0;
	int temp = 0;
	printf("값을 입력해주세요 : ");
	scanf_s("%d", &insert);
	
	for (int i = 2; i <= insert; i++)
	{
		if (insert % i == 0)
		{
			temp ++;

		}

		
	
	}
	if (temp == 1)
		printf("소수입니다");
	else
		printf("소수가 아닙니다");
	
#pragma endregion



	return 0;
}