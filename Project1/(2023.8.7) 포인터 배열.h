#pragma once
#include<stdio.h>

int main() {
#pragma region ������ �迭

	//	int a = 10;
	//	int b = 20;
	//	int c = 30;

	//	int* arrayPtr[3] = { &a, &b, &c };
	// arrayPtr[0] = &a
	// arrayPtr[1] = &b

	// int** ptr2 = &arrayPtr[1];		����������

	// printf("ptr2 �� �� : %d\n", **ptr2);
	//	printf("arrayPtr[1]�� �� : %p\n", arrayPtr[1]);
	//	printf("b�� �ּ� : %p\n", &b);

	//	*arrayPtr[1] = 200;

	//	printf("arrayPtr[1]�� ����Ű�� �� : %d\n", *arrayPtr[1]);

#pragma endregion

#pragma region ¦���� Ȧ��

	//	int num;

	//	printf("������ �Է��ϼ��� : ");
	//	scanf_s("%d", &num);

	//	if (num % 2 == 0)
	//	{
	//		printf("¦���Դϴ�!");
	//	}
	//	else if (num % 2 == 1)
	//	{
	//		printf("Ȧ���Դϴ�!");
	//	}

#pragma endregion


#pragma region 2���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭

	// 2���� �迭 ���� �������� �޸� ������ ���·� ����Ǹ�,
	// 2���� �迭�� ũ�⸦ ������ �� �迭�� ���� ũ�⸸ ������ �� �ִ�.

	//	int array2D[][3] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };

	//	 printf("array2D[1][1]�� �� : %d", array2D[1][1]);


	// 2���� �迭�� ��� ���� ���еǸ� �տ� �ִ� �迭��
	// ���� �ǹ̶���, �ڿ� �ִ� �迭�� ���� �ǹ��Ѵ�.
	// 
	//	for (int i = 0; i <= 2; i++)
	//	{
	//		for (int j = 0; j <= 2; j++)
	//		{
	//			printf("array2D[%d][%d]�� �� : %d\n", i, j, array2D[i][j]);
	//		}
	//	
	//	}

	//	int(*ptr)[3] = array2D;

	//	printf("array2D�� ���� �ּ� : %p\n", array2D);
	// array[0][0]�� �ּҰ� ��µ�
	//	printf("ptr�� �� : %p\n", ptr);

	//	printf("ptr + 1�� ���� �ּ� : %p\n", ptr + 1);
	//	printf("array2D + 1�� ���� �ּ� : %p\n", array2D + 1);



#pragma endregion

#pragma region ���μ� ����

	// 12 = 2 2 3
	// 5 = 5
	// 15 = 3 5
	// 16 = 2 2 2 2

	int a;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	for (int i = 2; i <= a; i++)
	{
		while (a % i == 0)
		{
			a /= i;
			printf("%d\n", i);
		}
	}


#pragma endregion


}