#include <stdio.h>


void main() 
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� ����.

	int buffer[5] = { 0,1,2 };

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������
	// �޸� ������ ������ �ȴ�.
	buffer[0] = 100;

	// �迭�� ��� ù ��° ���Ҵ� 0���� ����
	// printf("buffer�� 0�� ° index�� : %d\n", buffer[0]);
	// printf("buffer�� 1�� ° index�� : %d\n", buffer[1]);
	// printf("buffer�� 2�� ° index�� : %d\n", buffer[2]);
	// printf("buffer�� 3�� ° index�� : %d\n", buffer[3]);
	// printf("buffer�� 4�� ° index�� : %d\n", buffer[4]);

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����ȴ�.
	float dataList[] = { 1.11f, 2.22f, 3.33f };

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����Ų��.
	// printf("dataList�� �ּ� : %p\n", dataList);
	// printf("dataList[0]�� �ּ� : %p\n", dataList[0]);

	float* floatPtr = dataList;
	
	/*
	printf("floatPtr�� ����Ű�� �ּ� : %p\n", floatPtr);
	printf("floatPtr�� ����Ű�� �� : %f\n", *(floatPtr +0));

	floatPtr = floatPtr + 1;

	printf("floatPtr�� ����Ű�� �ּ� : %p\n", floatPtr);
	printf("floatPtr�� ����Ű�� �� : %f\n", *(floatPtr));
	*/

	// �迭�� ũ�⸦ ����� �����͸� ������ �� �����ϴ�.
	// ex) dataList[4] = 36.1f;		ERROR

#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������ ����

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� �����
	// ����Ű���� �� �� ������, ���ڿ� ����� ������
	// ������ �б� ���� ������ ����Ǳ� ������ ���ڿ���
	// ���� ������ �� �����ϴ�.

	const char* character = "Level";

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ
	// �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ�
	// ���� ���ڰ� �߰��ȴ�.
	character = "Cla\0ss";

	// ���ڿ��� ��� ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ�
	// ��ȿ�� ���ڱ����� ���ڿ��� ����Ѵ�.

	// "%s"
	printf("character�� �� : %s\n", character);
	printf("character�� �� : %c", *(character+1));

#pragma endregion

}