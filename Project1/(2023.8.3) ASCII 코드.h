#pragma once
#include<stdio.h>
#include<limits.h>

#pragma region ������
// ���� ������ ����� ����.
enum State
{
	IDLE,
	ATTACK = 100,
	DIE

	// enum�� ������ ���� ������ �� ������, 
	// �������� �� �� �������� ������ ���� ������ ������ ���� +1�� �����ȴ�.
};

#pragma endregion


int main()
{

#pragma region ������

	enum State state;

	// state = IDLE;
	// printf("state�� IDLE �� : %d\n", state);		// 0�� ���
	// state = ATTACK;
	// printf("state�� ATTACK �� : %d\n", state);	// 100�� ���
	// state = DIE;
	// printf("state�� DIE �� : %d\n", state);		// 101�� ���

	// state = ATTACK;
	// 
	// switch (state)
	// {
	// case IDLE: printf("��� ����\n");
	//	break;
	// case ATTACK: printf("���� ����\n");
	// 	break;
	// case DIE: printf("���� ����\n");
	// 	break;
	// }

#pragma endregion

#pragma region �� ����ϱ�

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

#pragma region 1~10������ ��

	//	int sum = 0;
	//	
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		sum = sum + i;
	//	}
	//	printf("1~10������ ���� = %d", sum);

#pragma endregion

#pragma region ASCII �ڵ�
	// 1963�� �̱� ANSI���� ǥ��ȭ�� ������ȯ�� 7��Ʈ ��ȣü���̴�.

	// 128���� ����, ����, Ư������, ����ڰ� ǥ���ȴ�.

	//	char alphabet = 90;

	// �����ڵ�

	//	printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
	//	printf("alphabet ������ �� : %d\n", alphabet);


	// A ~ Z���� ���

	//	for (alphabet = 65; alphabet <= 90; alphabet++)
	//	{
	//		printf("%c ", alphabet);
	//	}
#pragma endregion

#pragma region �ִ񰪰� �ּڰ�

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
	printf("�ִ��� : %d\n", max);
	printf("�ּڰ��� : %d\n", min);

#pragma endregion


	return 0;
}
