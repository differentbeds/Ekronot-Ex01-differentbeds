#include <iostream>
#include "Stack.h"

int main()
{
	Stack* s = new Stack;
	initStack(s);

	push(s, 1);
	push(s, 2);
	push(s, 3);

	std::cout << pop(s) << std::endl;
	std::cout << pop(s) << std::endl;
	std::cout << pop(s) << std::endl;
	
	// pop from empty stack test
	std::cout << pop(s) << std::endl;

	cleanStack(s);
	delete(s);

	system("pause");
	return 0;
}