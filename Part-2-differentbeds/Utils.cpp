#include "Utils.h"
#include "Stack.h"

#include <iostream>

/*
* Reverse an array using stack
* Input: integer array, size of integer array
* Output: n/a
*/
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

/*
* Populate an array of size 10 from user input and reverse it
* Input: n/a
* Output: the reversed array
*/
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