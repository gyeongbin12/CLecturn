#pragma once
#include<stdio.h>
#include<limits.h>

#pragma region 열거형
// 명명된 정수형 상수의 집합.
enum State
{
	IDLE,
	ATTACK = 100,
	DIE

	// enum에 설정된 값을 변경할 수 있으며, 
	// 변경했을 때 그 다음으로 설정된 값은 변경한 이후의 값에 +1로 설정된다.
};

#pragma endregion


int main()
{

#pragma region 열거형

	enum State state;

	// state = IDLE;
	// printf("state의 IDLE 값 : %d\n", state);		// 0값 출력
	// state = ATTACK;
	// printf("state의 ATTACK 값 : %d\n", state);	// 100값 출력
	// state = DIE;
	// printf("state의 DIE 값 : %d\n", state);		// 101값 출력

	// state = ATTACK;
	// 
	// switch (state)
	// {
	// case IDLE: printf("대기 상태\n");
	//	break;
	// case ATTACK: printf("공격 상태\n");
	// 	break;
	// case DIE: printf("죽음 상태\n");
	// 	break;
	// }

#pragma endregion

#pragma region 별 출력하기

	// *
	// **
	// ***
	// ****
	// *****

	//	for (int i = 0; i < 5; i++)
	//	{
	//		for (int j = 0; j <= i; j++)
	//		{
	//			printf("*");
	//		}
	//		printf("\n");
	//	}


#pragma endregion

#pragma region 1~10까지의 합

	//	int sum = 0;
	//	
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		sum = sum + i;
	//	}
	//	printf("1~10까지의 합은 = %d", sum);

#pragma endregion

#pragma region ASCII 코드
	// 1963년 미국 ANSI에서 표준화한 정보교환용 7비트 부호체계이다.

	// 128개의 숫자, 문자, 특수문자, 제어문자가 표현된다.

	//	char alphabet = 90;

	// 유니코드

	//	printf("alphabet 변수의 ASCII 코드의 값 : %c\n", alphabet);
	//	printf("alphabet 변수의 값 : %d\n", alphabet);


	// A ~ Z까지 출력

	//	for (alphabet = 65; alphabet <= 90; alphabet++)
	//	{
	//		printf("%c ", alphabet);
	//	}
#pragma endregion

#pragma region 최댓값과 최솟값

	// [10] [5] [11] [1] [3] 

	int max = 0;
	int min = INT_MAX;

	int num[5] = { 10, 5, 11, 1, 3 };


	for (int i = 0; i < 5; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}

		else if (min > num[i])
		{
			min = num[i];
		}

	}
	printf("최댓값은 : %d\n", max);
	printf("최솟값은 : %d\n", min);

#pragma endregion


	return 0;
}
