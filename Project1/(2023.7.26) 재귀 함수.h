#pragma once
#include<stdio.h>

#pragma region ��� �Լ�
// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ�
// �۾��� �����ϴ� �Լ��Դϴ�.

void Function()
{
	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ�
	// ���� �����÷ο찡 �߻���.
	printf("�Լ� ȣ��\n");
	Function();
}
#pragma endregion


// void CountDown(int count)
/*
{
	// ��� �ڵ�
	if (count <= 0)
	{
		return;
	}

	printf("count�� �� : %d\n", count);
	CountDown(count - 1);
}
*/
// ���丮��

// !5(120) !4(24) !3(6)
// 3! = 1 * 2 * 3
// 4! = 1 * 2 * 3 * 4
// 5! = 1 * 2 * 3 * 4 * 5

// void Count(int a)
/*
{
	if (a <= 0)
	{
		return;
	}
	printf("%d\n", a);
	Count(a * a - 1);
}
*/


int main()
{
	// Count(3);

	int data = 20;

	int* ptr = &data;

	// 0a 00 00 00


	// �� ����� ���
	// ��Ʈ��ũ <- ����

	// ��Ʋ ����� ���
	// ���� �ּҿ� �������� ���� byte���� 
	// �����ϴ� ���



	// ���α׷��� ���������� ����Ǿ��� ��
	// 0�̶�� ��ȯ�մϴ�.
	return 0;
}