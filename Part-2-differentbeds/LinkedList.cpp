#include "LinkedList.h"
#include <iostream>

/*
* Add a node at the beginning of the linked list
* Input: a pointer to the head of the linked list (to modify its value in main), value to add (unsigned int)
* Output: N/A
*/
void addNode(Node** head, unsigned int value)
{
	if (!head) // if invalid main head double pointer provided
	{
		return;
	}

	Node* n = new Node;
	n->data = value;
	n->next = *head;
	*head = n;
}

unsigned int removeNode(Node** head)
{
	int removedValue = 0;
	Node* temp = nullptr;

	removedValue = (int)((*head)->data);
	temp = *head;
	*head = (*head)->next;
	delete(temp);

	return removedValue;
}

void cleanList(Node** head)
{
	if (!head || !(*head))
	{
		std::cout << "Nothing to clean" << std::endl;
		return;
	}

	Node* curr = *head;
	Node* next = nullptr;

	while (curr)
	{
		next = curr->next;
		delete(curr);
		curr = next;
	}

	*head = nullptr; // dangling pointer handling
}