#include <iostream>
#include "Stack.h"

void push(Stack* s, unsigned int element)
{
	enqueue(&s->head, element);
}

int pop(Stack* s)
{
	if (isEmpty(s) == true)
	{
		return -1;
	}
	int value = s->head->num;
	dequeue(&s->head);
	return value;
}

void initStack(Stack* s)
{
	s->head = nullptr;
}

void cleanStack(Stack* s)
{
	while (isEmpty(s) == true)
	{
		pop(s);
	}
}

bool isEmpty(Stack* s)
{
	return s->head == nullptr;
}

bool isFull(Stack* s)
{
	return false;
}
