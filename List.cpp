
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int value;
    Node* next;

    // Constructor
    Node(int val) {
        value = val;
        next = nullptr;
    }
};

// Stack class using a linked list
class Stack {
private:
    Node* top;  // Pointer to the top of the stack
    int _size;  

public:
    // empty stack
    Stack() {
        top = nullptr;
        _size = 0;
    }

    // Push operation
    void push(int value) {
        Node* new_node = new Node(value);
        new_node->next = top;  // Linking the new node to the current top
        top = new_node;        // Updating the top to the new node
        _size++;              
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            cout << "No elements to pop." << endl;
            return -1;  
        }
        Node* temp = top;     // Save the current top node
        int popped_value = top->value;  // Getting value of the top node
        top = top->next;      // Moving the top pointer to the next node
        delete temp;          // Deleting the old top node 
        _size--;              
        return popped_value;
    }

    // Peek func()
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;  
        }
        return top->value;
    }

    // isEmpty func()
    bool isEmpty() {
        return top == nullptr;
    }

    // Checking Size func()
    int size() {
        return _size;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;  
    cout << "Stack size: " << stack.size() << endl;  

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Top element: " << stack.peek() << endl;    

    cout << "Stack size: " << stack.size() << endl;  
    cout << "Popped element: " << stack.pop() << endl;  
    cout << "Popped element: " << stack.pop() << endl;  
    cout << "Popped element: " << stack.pop() << endl;  
  return 0;
}




