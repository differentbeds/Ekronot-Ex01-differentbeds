#include <iostream>;
#include "Queue.h"

int main()
{
	Queue* q = new Queue;

	initQueue(q, 2);

	enqueue(q, 3); // add 3
	enqueue(q, 2); // add 2

	// test adding to a full queue
	enqueue(q, 7);

	std::cout << dequeue(q) << std::endl; // remove 3
	enqueue(q, 7); // add 7
	std::cout << dequeue(q) << std::endl; //  remove 2
	std::cout << dequeue(q) << std::endl; // remove 7

	// test adding from an empty queue
	std::cout << dequeue(q) << std::endl;

	// empty and full checkers (q currently empty)
	std::cout << isEmpty(q) << std::endl;
	std::cout << isFull(q) << std::endl;

	// delete queue
	cleanQueue(q);
	delete(q);
	q = nullptr;
	system("pause");
	return 0;
}