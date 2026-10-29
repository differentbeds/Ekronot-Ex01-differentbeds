#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define DNE -1

/*
* A positive-integer linked list node
*/
typedef struct Node
{
	unsigned int data;
	Node* next;
} Node;

void addNode(Node** head, unsigned int value);
int removeNode(Node** head);
void cleanList(Node** head); // deletes all nodes in the list

#endif // LINKEDLIST_H