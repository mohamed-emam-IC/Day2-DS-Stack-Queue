#include <iostream>
#include "CircularQueue .h"

using namespace std;

int main() {
    CircularQueue q(5);  // Create a circular queue with capacity 5

    // Test the queue operations
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);

    q.display();  // Display queue

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.deQueue();
    q.display();  // Display queue after dequeue

    q.enQueue(60);
    q.display();  // Display queue after enqueuing 60

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();

    q.display();  // Display queue after dequeuing all elements

    return 0;
}
