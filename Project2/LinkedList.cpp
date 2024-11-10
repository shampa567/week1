#include <iostream>
#include "LinkedList.h"

void enqueue(LinkedList* q, unsigned int newValue)
{
	LinkedList* node = new LinkedList;
	node->num = newValue;
	node->next = q;
	q = node;
}

void dequeue(LinkedList* q)
{
    if (q == nullptr) 
    {
        std::cout << "Queue is empty\n";
    }
    else 
    {
        LinkedList* temp = q;
        q = q->next;
        delete temp;
    }
}