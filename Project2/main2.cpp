#include <iostream>
#include "LINKEDLIST.H"

int main()
{
	LinkedList* list = new LinkedList;
	enqueue(list, 10);
	enqueue(list, 20);
	dequeue(list);
	return 0;
}