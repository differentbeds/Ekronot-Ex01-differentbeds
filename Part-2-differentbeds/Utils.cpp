#include "Utils.h"
#include "Stack.h"

#include <iostream>

void reverse(int* nums, unsigned int size)
{
	Stack* stk = new Stack;
	initStack(stk);

	for (int i = 0; i < size; i++)
	{
		push(stk, nums[i]);
	}

	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(stk);
	}

	cleanStack(stk);
	delete(stk);
}

int* reverse10()
{
	int* nums = new int[SIZE];

	std::cout << "Enter " << SIZE << " integers: " << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> nums[i];
	}

	reverse(nums, SIZE);
	return nums;
}