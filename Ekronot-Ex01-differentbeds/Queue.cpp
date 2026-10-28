#include <iostream>
#include "Queue.h"

bool isQueueExist(Queue* s)
{
	if (!s || !(s->queueArray))
	{
		std::cout << "Queue does not exist" << std::endl;
		return false;
	}

	return true;
}

/**
* Initialize a queue (allocate memory for its array and assign values to the count & maxSize fields)
* Input: pointer to queue, queue's size (unsigned int)
* Output: n/a
*/
void initQueue(Queue* q, unsigned int size)
{
	q->queueArray = new unsigned int[size];
	q->maxSize = size;
	q->count = 0;
}

/**
* Deallocate a queue's array (clean a queue)
* Input: a pointer to a queue
* Output: n/a
*/
void cleanQueue(Queue* q)
{
	if (!isQueueExist(q))
	{
		return;
	}

	delete[](q->queueArray);
	q->queueArray = nullptr; // ensure no dangling pointer
}

/**
* Check if a queue is empty
* Input: a pointer to a queue
* Output: true if the queue is empty, false otherwise
*/
bool isEmpty(Queue* q)
{
	if (!isQueueExist(q))
	{
		return false;
	}
	
	return q->count == 0;
}

/**
* Check if a queue is full
* Input: a pointer to a queue
* Output: true if the queue is full, false otherwise
*/
bool isFull(Queue* q)
{
	if (!isQueueExist(q))
	{
		return false;
	}

	return q->count == q->maxSize;
}