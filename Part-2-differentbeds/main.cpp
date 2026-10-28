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

	system("pause");
	return 0;
}