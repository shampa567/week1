#include <iostream>
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
	unsigned int i = 0;
	Stack* stack;
	initStack(stack);
	for (i = 0; i < size; i++)
	{
		push(stack, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(stack);
	}
	cleanStack(stack);
}

int* reverse10()
{
	int size = 10;
	unsigned int i = 0;
	int* nums = new int[size];
	for (i = 0; i < size; i++)
	{
		std::cout << "Enter number:\n";
		std::cin >> nums[i];
	}
	reverse(nums, size);
	return nums;
}