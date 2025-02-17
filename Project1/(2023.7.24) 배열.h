#pragma once
#include <stdio.h>


void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합.

	int buffer[5] = { 0,1,2 };

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된
	// 메모리 공간을 가지게 된다.
	buffer[0] = 100;

	// 배열의 경우 첫 번째 원소는 0부터 시작
	// printf("buffer의 0번 째 index는 : %d\n", buffer[0]);
	// printf("buffer의 1번 째 index는 : %d\n", buffer[1]);
	// printf("buffer의 2번 째 index는 : %d\n", buffer[2]);
	// printf("buffer의 3번 째 index는 : %d\n", buffer[3]);
	// printf("buffer의 4번 째 index는 : %d\n", buffer[4]);

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정된다.
	float dataList[] = { 1.11f, 2.22f, 3.33f };

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은
	// 배열의 시작 주소를 가리킨다.
	// printf("dataList의 주소 : %p\n", dataList);
	// printf("dataList[0]의 주소 : %p\n", dataList[0]);

	float* floatPtr = dataList;

	/*
	printf("floatPtr이 가리키는 주소 : %p\n", floatPtr);
	printf("floatPtr이 가리키는 값 : %f\n", *(floatPtr +0));

	floatPtr = floatPtr + 1;

	printf("floatPtr이 가리키는 주소 : %p\n", floatPtr);
	printf("floatPtr이 가리키는 값 : %f\n", *(floatPtr));
	*/

	// 배열의 크기를 벗어나서 데이터를 저장할 수 없습니다.
	// ex) dataList[4] = 36.1f;		ERROR

#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합

	// 문자열의 경우 포인터를 이용하여 문자열 상수를
	// 가리키도록 할 수 있으며, 문자열 상수는 데이터
	// 영역의 읽기 전용 공간에 저장되기 때문에 문자열의
	// 값을 변경할 수 없습니다.

	const char* character = "Level";

	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기가
	// 결정되며, 마지막에 문자열의 끝을 알려주는
	// 제어 문자가 추가된다.
	character = "Cla\0ss";

	// 문자열의 경우 문자 배열 사이에 무효의 문자를 넣게 되면
	// 무효의 문자까지만 문자열을 출력한다.

	// "%s"
	printf("character의 값 : %s\n", character);
	printf("character의 값 : %c", *(character + 1));

#pragma endregion

}