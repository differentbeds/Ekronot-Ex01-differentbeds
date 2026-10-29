#include "Stack.h"
#include <iostream>

bool isStackExist(Stack* s)
{
	if (!s)
	{
		std::cout << "Stack does not exist" << std::endl;
		return false;
	}

	return true;
}

