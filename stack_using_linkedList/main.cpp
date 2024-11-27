#include <iostream>
#include "linkedList.h"
using namespace std;

int main() {
    Stack s;

    // Test the stack operations
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();  // Display the stack

    cout << "Top element is " << s.peek() << endl;

    s.pop();
    s.display();  // Display the stack after pop

    cout << "Top element is " << s.peek() << endl;

    s.pop();
    s.pop();
    s.display();  // Display the stack after popping all elements

    return 0;
}
