#include <stdio.h>	
#include <stdarg.h>
#include <math.h>
struct Enemy
{
	int x;
	int y;
};

struct Player
{
	int x;
	int y;

};

double Add(double x, double y)
{
	return x + y;
}

double Substract(double x, double y)
{
	return x - y;
}
double Multiply(double x, double y)
{
	return x * y;
}
double Divide(double x, double y)
{
	return x / y;
}

void Calculator(double (*ptr)(double x, double y), double u, double v)
{
	printf("%lf\n", ptr(u, v));
}

void Debug(int count, ...)
{
	// va_list : 가변 길이 목록을 저장하는 변수
	va_list list = NULL;

	// va_start : 가변 길이 목록을 사용하기 위해 초기화하는 함수
	va_start(list, count);

	// va_arg : 가변 길이 목록에서 값을 가져오고 특정 자료형의 크기만큼 이동하는 함수
	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(list, int));
	}

	// va_end : 가변 길이 목록을 사용 후 포인터를 NULL로 초기화하는 함수
	va_end(list);
}

int main()
{
#pragma region 가변 길이 목록
	// 매개 변수의 개수가 정해지지 않은 매개 변수를 받을 때 사용하는 인수입니다. 

	// Debug(3, 10, 20, 30);
	// 
	// printf("\n");
	// 
	// Debug(5, 10, 20, 30, 40, 50);
#pragma endregion

#pragma region 두 점 사이의 거리

	// printf("100의 제곱근 : %lf\n", sqrt(100));
	// printf("2에 2 승 : %lf\n", pow(2, 2));

	// struct Enemy enemy = { 0, 0 };
	// struct Player player = { 5, 5 };
	// 
	// int x = player.x - enemy.x;  // 순서대로 단계를 명시
	// int y = player.y - enemy.y;
	// 
	// double distance = sqrt(pow(x, 2) + pow(y, 2));
	// double distance = sqrt(pow((enemy.y - player.y), 2) + pow((enemy.x - player.x), 2)); // 가독성 낮음

	// if (distance <= 5)
	// {
	// 	printf("적의 시야에 들어왔습니다");
	// }
	// else
	// {
	// 	printf("적의 시야 밖입니다");
	// }

#pragma endregion

#pragma region 함수 포인터
	// 함수의 주소값을 저장하고 가리킬 수 있는 변수입니다. 
	// Calculator(Add, 10, 20);
	// Calculator(Substract, 10, 20);
	// Calculator(Multiply, 10, 20);
	// Calculator(Divide, 10, 20);

	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이 일치해야 합니다. 
#pragma endregion



	return 0;
}