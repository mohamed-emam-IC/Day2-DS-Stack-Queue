
#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;      // Array to hold queue elements
    int front;     // Points to the front of the queue
    int rear;      // Points to the rear of the queue
    int size;      // Maximum size of the queue
    int count;     // Current number of elements in the queue

public:
    // Constructor to initialize the queue with a given size
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
        count = 0;
    }

    // Destructor to free allocated memory
    ~CircularQueue() {
        delete[] arr;
    }

    // Function to check if the queue is full
    bool isFull() {
        return count == size;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return count == 0;
    }

    // Function to insert an element into the queue (enQueue)
    void enQueue(int value) {
        if (isFull()) {
            cout << "Queue is full! Cannot enqueue " << value << endl;
            return;
        }
        if (front == -1) {  // If queue is empty
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % size;  // Circular increment
        }
        arr[rear] = value;  // Add the element at the rear
        count++;
        cout << value << " enqueued to the queue\n";
    }

    // Function to remove an element from the queue (deQueue)
    void deQueue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue\n";
            return;
        }
        int removedValue = arr[front];
        if (front == rear) {  // If the queue becomes empty after dequeue
            front = rear = -1;
        } else {
            front = (front + 1) % size;  // Circular increment
        }
        count--;
        cout << removedValue << " dequeued from the queue\n";
    }

    // Function to get the front element of the queue (getFront)
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;  // Return -1 if the queue is empty
        }
        return arr[front];
    }

    // Function to get the rear element of the queue (getRear)
    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;  // Return -1 if the queue is empty
        }
        return arr[rear];
    }

    // Function to display all elements in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue contents: ";
        int i = front;
        for (int j = 0; j < count; j++) {
            cout << arr[i] << " ";
            i = (i + 1) % size;  // Circular increment
        }
        cout << endl;
    }
};

