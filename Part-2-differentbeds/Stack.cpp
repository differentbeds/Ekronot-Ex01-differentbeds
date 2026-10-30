#include "Stack.h"
#include <iostream>

/*
* Check if a stack exists (if the given pointer is valid)
* Input: a stack pointer
* Output: true if the stack exists, false otherwise
*/
bool isStackExist(Stack* s)
{
	if (!s)
	{
		std::cout << "Stack does not exist" << std::endl;
		return false;
	}

	return true;
}

/*
* Check if the stack is full
* Input: a stack pointer
* Output: always false
*/
bool isFull(Stack* s)
{
	return false; // the linked list implementation of a stack can never be false
}

/*
* Check if the stack is empty
* Input: a stack pointer
* Output: true if the stack is empty, false otherwise
*/
bool isEmpty(Stack* s)
{
	if (!isStackExist(s))
	{
		return false; // a nonexistent stack cannot be empty
	}

	return s->_first == nullptr;
}

/*
* Initiate a stack
* Input: a stack pointer
* Output: n/a
*/
void initStack(Stack* s)
{
	s->_first = nullptr;
}

/*
* Clean a stack (deallocate all of the nodes in it)
* Input: a stack pointer
* Output: n/a
*/
void cleanStack(Stack* s)
{
	cleanList(&(s->_first));
}

/*
* Add an element at the top of the stack
* Input: stack pointer, element to be added
* Output: n/a
*/
void push(Stack* s, unsigned int element)
{
	if (isStackExist(s))
	{
		addNode(&(s->_first), element);
	}
}

/*
* Remove the first element from the stack
* Input: stack pointer
* Output: value removed, or -1 if the stack is empty/doesn't exist
*/
int pop(Stack* s)
{
	if (isStackExist(s) && !isEmpty(s))
	{
		return removeNode(&(s->_first));
	}
	return DNE;
}