#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct LinkedList
{
    unsigned int num;
    LinkedList* next;
} LinkedList;

void enqueue(LinkedList* q, unsigned int newValue);
void dequeue(LinkedList* q);

#endif /* LINKEDLIST_H */
