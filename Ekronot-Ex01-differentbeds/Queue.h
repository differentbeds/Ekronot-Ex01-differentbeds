#ifndef QUEUE_H
#define QUEUE_H

#define DNE -1

/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* _queueArray;
	unsigned int _maxSize;
	unsigned int _count;
	unsigned int _front;
	
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);
bool isQueueExist(Queue* s);

#endif /* QUEUE_H */