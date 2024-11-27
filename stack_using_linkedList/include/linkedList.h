#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
    Node(int Data){
        data = Data;
        next = NULL;
    }
};

// Define the Stack class
class Stack {
private:
    Node* top;  // Pointer to the top of the stack

public:
    // Constructor to initialize the stack
    Stack() {
        top = NULL;
    }

    // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;  // Make newNode point to the previous top
        top = newNode;        // Update the top to the new node
        cout << value << " pushed onto the stack\n";
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == NULL) {
            cout << "Stack is empty, cannot pop\n";
            return;
        }
        Node* temp = top;
        top = top->next;  // Move the top pointer to the next node
        cout << temp->data << " popped from the stack\n";
        delete temp;  // Free memory of the popped node
    }

    // Function to peek the top element of the stack
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;  // Return -1 if the stack is empty
        }
        return top->data;
    }

    // Function to display all elements in the stack
    void display() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        cout << "Stack contents: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
