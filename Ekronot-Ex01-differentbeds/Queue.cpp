#include <iostream>
#include "Queue.h"

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
* Check if a given queue exist, i.e., valid pointer and initialized array)
* Input: a pointer to a queue
* Output: true if the queue exists, false otherwise
*/
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
bool isEmpty(Queue* s)
{
	if (!isQueueExist(s))
	{
		return false;
	}
	
	return s->count == 0;
}

/**
* Check if a queue is full
* Input: a pointer to a queue
* Output: true if the queue is full, false otherwise
*/
bool isFull(Queue* s)
{
	if (!isQueueExist(s))
	{
		return false;
	}

	return s->count == s->maxSize;
}

/**
* Add a new value at the end of the queue
* Input: a pointer to a queue and the new value to add
* Output: n/a
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (!isQueueExist(q))
	{
		return;
	}

	if (isFull(q))
	{
		std::cout << "Queue is full, cannot add more values" << std::endl;
		return;
	}

	(q->queueArray)[q->count] = newValue;
	(q->count)++;
}

int dequeue(Queue* q)
{
	int firstElement = DNE; // the value of the first element will be stored here. for now, it does not exist (DNE)

	if(!isQueueExist(q))
	{
		return DNE;
	}
	else if (isEmpty(q))
	{
		std::cout << "Queue is empty, cannot remove more values" << std::endl;
		return DNE;
	}

	firstElement = (q->queueArray)[0]; // save the first element before removing from the queue

	for (int i = 1; i < q->maxSize; i++)
	{
		(q->queueArray)[i - 1] = (q->queueArray)[i];
	}

	(q->count)--;
	return firstElement;
}