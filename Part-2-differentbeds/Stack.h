#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

#define DNE -1

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	Node* _first;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);
bool isFull(Stack* s);

bool isStackExist(Stack* s);

#endif // STACK_H
