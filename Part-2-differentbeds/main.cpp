#include <iostream>
#include "LinkedList.h"

int main()
{
	Node* head = nullptr;

	// test adding nodes
	addNode(&head, 1);
	addNode(&head, 2);
	addNode(&head, 3);

	std::cout << head->data << std::endl;
	std::cout << head->next->data << std::endl;
	std::cout << head->next->next->data << std::endl;

	for(int i = 0; i < 3; i++)
	{
		std::cout << removeNode(&head) << std::endl;
	}
	
	// test clean
	addNode(&head, 4);
	addNode(&head, 5);

	cleanList(&head);
	delete(head);

	system("pause");
	return 0;
}