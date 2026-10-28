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
