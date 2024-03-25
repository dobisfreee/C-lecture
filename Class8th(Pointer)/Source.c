#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소값을 반환하는 연산자입니다. 

	//int data = 10;

	// %p : 변수의 주소를 출력하는 서식 지정자
	//printf("data 변수의 주소 : %p", &data);

	// 데이터의 주소값은 해당 데이터가 저장된 메모리의 시작 주소를 의미하며, 
	// 메모리의 공간은 1 byte의 크기로 나누어 표현합니다. 
#pragma endregion

#pragma region  sizeof() 연산자
	// 변수의 메모리 크기를 반환하는 연산자입니다. 
	//float health = 100.0f;
	//
	//printf("int 변수의 메모리 크기 : %u\n", sizeof(int)); //자료형 or
	//printf("int 변수의 메모리 크기 : %u\n", sizeof(health)); //변수

#pragma endregion

#pragma region  포인터
	// 메모리의 주소값을 저장할 수 있는 변수입니다. 

	//int value = 100;
	//
	//int* ptr = NULL; // (변수의 초기화)
	//
	//ptr = &value;
	//
	//
	//printf("ptr의 값 : %p\n", ptr); // ptr에 &(reference)를 넣게 되면 ptr의 메모리 주소를 출력한다.
	//printf("ptr의 메모리 주소 : %p\n", &ptr);
	//printf("value의 메모리 주소 : %p\n", &value);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리키게 됩니다. 

	//int attack = 50; 
	//
	//int* iptr = &attack; //참조하는중
	//
	//printf("attack의 값: %d\n", attack);
	//
	//*iptr = 99; //역참조하는중
	//
	//printf("attack의 값: %d\n", attack); 



	// 변수의 주소는 프로그램이 실행될 때마다 변경되며, 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로 
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다. 

	//float damage = 7.5f;
	//
	//int* ptr1 = &damage;
	//
	//printf("ptr1 변수가 가리키는 값 : %f\n", * ptr1);

	// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과 포인터 변수의 자료형과
	// 포인터 변수의 자료형이 일치해야 합니다. 

	//float* fptr = NULL; 

	//printf("fptr 포이너 변수의 메모리 크기 : %d\n", sizeof(fptr));

	// 포인터 변수의 크기는 중앙 처리 장치(CPU)가 한 번에 처리할 수 있는 크기로 정해지며,
	// 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다. 

	//float* fptr = NULL; 
	//float x = 0.0f;
	//float y = 0.0f;
	//
	//fptr = &x;
	//
	//printf("x의 메모리 주소 : %p\n", &x);
	//
	//*fptr = 65.194f;
	//
	//printf("fptr 변수가 가리키는 값 : %f\n", x);
	//
	//fptr = &y;
	//
	//printf("y의 메모리 주소 : %p\n", &y);
	//
	//*fptr = 99.825f;
	//
	//printf("y의 값은 : %f\n", y);


#pragma endregion

#pragma region  상수 지시 포인터
	// 포인터 변수를 상수로 선언하여, 
	// 포인터 변수가 가리키고 있는 주소에 존재하는 값을 변경할 수 없도록 설정할 수 있습니다. 

	//int a = 10;
	//int b = 20;
	//
	//const int * cptr = NULL;
	//
	//cptr = &a;
	//
	//printf("cptr의 값 : %p\n", cptr);
	//// *cptr = 99;
	//
	//cptr = &b;//(다른 변수의 주소를 가리킬 수는 있다.)

	// 상수로 선언한 포인터는 해당 변수의 값을 변경할 수 없지만, 
	// 다른 변수의 주소는 가리킬 수 있습니다. 
#pragma endregion

#pragma region 포인터 상수화 

		//	int v = 10;
		//	int w = 20;
		//	
		//	int* const reference = &v;
		//	
		//	*reference = 100; 
		//	
		//	printf("v 변수의 값 :%d\n", v);

		//reference = &w; (에러 남)

		// 포인터 상수화는 새로운 메모리의 주소를 저장할 수 없습니다. 
#pragma endregion







}