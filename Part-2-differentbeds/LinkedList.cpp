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

/*
* Remove the first node of a linked list
* Input: linked list head double pointer (Node)
* Output: the removed value, or -1 if the linked list doesn't exist/is empty
* 
* Note: the linked list is of type unsigned int and this will not work for numbers beyond the bounds
* of a signed int. However, this also applies to the queue and the given header file disregarded this.
* For that reason I will be doing the same here and returning just a regular int value
* The other option would be to assume the linked list exists and is not empty, and return an unsigned int
*/
int removeNode(Node** head)
{
	int removedValue = DNE;

	if (!head || !(*head))
	{
		std::cout << "Nothing to remove" << std::endl;
		return DNE;
	}

	Node* temp = nullptr;

	removedValue = (*head)->data;
	temp = *head;
	*head = (*head)->next;
	delete(temp);

	return removedValue;
}

/*
* Clean a linked list (remove and deallocate all of the nodes)
* Input: linked list head double pointer (Node)
* Output: n/a
*/
void cleanList(Node** head)
{
	if (!head || !(*head))
	{
		std::cout << "Nothing to clean" << std::endl;
		return;
	}

	Node* curr = nullptr;

	while (*head)
	{
		curr = (*head)->next;
		delete(*head);
		*head = curr;
	}

	*head = nullptr; // dangling pointer handling
}