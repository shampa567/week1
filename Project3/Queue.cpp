#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size) 
{
    q->num = 0;
    q->size = size;
    q->next = nullptr;
}

void cleanQueue(Queue* q) 
{
    Queue* current = q->next;
    while (current != nullptr) 
    {
        Queue* temp = current;
        current = current->next;
        delete temp;
    }
    q->next = nullptr;
}

void enqueue(Queue* q, unsigned int newValue) 
{
    if (isFull(q) == true) 
    {
        std::cout << "Queue is full\n";
    }
    else
    {
        Queue* node = new Queue;
        node->num = newValue;
        node->next = nullptr;
        if (q->next == nullptr)
        {
            q->next = node;
        }
        else
        {
            Queue* current = q->next;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = node;
        }
    }
}

int dequeue(Queue* q) 
{
    if (isEmpty(q) == true) 
    {
        std::cout << "Queue is empty\n";
        return -1;
    }
    Queue* temp = q->next;
    int value = temp->num;
    q->next = temp->next;
    delete temp;
    return value;
}

bool isEmpty(Queue* s) 
{
    return s->next == nullptr;
}

bool isFull(Queue* s) 
{
    unsigned int count = 0;
    Queue* current = s->next;
    while (current != nullptr) 
    {
        count++;
        current = current->next;
    }
    return count == s->size;
}