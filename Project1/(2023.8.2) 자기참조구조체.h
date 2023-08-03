#pragma once
#include <stdio.h>

#pragma region typedef

typedef int int16_m;

typedef struct Node
{
	int data;
	char name[10];
	// const char * name[10];
	Node* next;
}Node;

#pragma endregion


int main()
{
#pragma region typedef

	// int data = 100;
	// int16_m value = 200;

	// size_t

	Node node1 = { 100, "Node1", NULL };
	Node node2 = { 200, "Node2", NULL };
	Node node3 = { 300, "Node3", NULL };

	node1.next = &node2;
	node2.next = &node3;

	// [N][o][d][e] [1][][][]
	// node1.name = "Node10";

	// printf("node1.next : %p\n", node1.next);
	// printf("node1.next->next : %p\n", node1.next->next);
	// printf("node1.next->next->next : %p\n", node1.next->next->next);



	Node* currentNode = &node1;

	while (currentNode != NULL)
	{
		printf("currentNode가 가리키는 data의 값 %d\n", currentNode->data);

		currentNode = currentNode->next;
	}


#pragma endregion	
	return 0;
}