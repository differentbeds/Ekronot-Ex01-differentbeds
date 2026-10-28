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
