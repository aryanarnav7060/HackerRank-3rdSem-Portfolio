#include <iostream>
#include <vector>
using namespace std;

// Stack implementation using array
class Stack {
private:
    vector<int> items;
    int maxSize;
    int top;
    
public:
    Stack(int size) {
        maxSize = size;
        top = -1;
        items.resize(size);
    }
    
    // Push operation
    void push(int value) {
        if (top == maxSize - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        items[++top] = value;
        cout << "Pushed " << value << " onto stack" << endl;
    }
    
    // Pop operation
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int value = items[top--];
        cout << "Popped " << value << " from stack" << endl;
        return value;
    }
    
    // Peek operation
    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return items[top];
    }
    
    // Check if empty
    bool isEmpty() {
        return top == -1;
    }
    
    // Check size
    int size() {
        return top + 1;
    }
};

int main() {
    Stack stack(5);
    
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    cout << "Top element: " << stack.peek() << endl;
    cout << "Stack size: " << stack.size() << endl;
    
    stack.pop();
    stack.pop();
    
    cout << "Is empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}