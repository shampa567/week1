#include <iostream>
#include "Queue.h"

int main()
{
    Queue queue;
    initQueue(&queue, 3);  // Initialize queue with size limit 3

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    std::cout << "Attempting to enqueue 40 (should be full):\n";
    enqueue(&queue, 40);  // This should print "Queue is full"

    std::cout << "Dequeuing elements:\n";
    std::cout << "Dequeued: " << dequeue(&queue) << "\n";  // Should return 10
    std::cout << "Dequeued: " << dequeue(&queue) << "\n";  // Should return 20
    std::cout << "Dequeued: " << dequeue(&queue) << "\n";  // Should return 30

    std::cout << "Attempting to dequeue from empty queue:\n";
    std::cout << "Dequeued: " << dequeue(&queue) << "\n";  // Should print "Queue is empty"

    cleanQueue(&queue);  // Clean up any remaining nodes
	return 0;
}