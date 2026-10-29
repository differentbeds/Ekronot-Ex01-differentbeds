#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/*
* A positive-integer linked list node
*/
typedef struct Node
{
	unsigned int data;
	Node* next;
} Node;

void addNode(Node** head, unsigned int value);
unsigned int removeNode(Node** head);
void cleanList(Node** head); // deletes all nodes in the list

#endif // LINKEDLIST_H