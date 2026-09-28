#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;
    
public:
    LinkedList() {
        head = nullptr;
    }
    
    // Insert at the head
    void insertHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << val << " at head" << endl;
    }
    
    // Insert at the tail
    void insertTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << "Inserted " << val << " at tail" << endl;
    }
    
    // Display the list
    void display() {
        Node* temp = head;
        cout << "List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    
    list.insertHead(3);
    list.insertTail(1);
    list.insertTail(2);
    list.display();
    
    return 0;
}