# Problem: Linked List Basics
**HackerRank Link**: [Singly Linked Lists](https://www.hackerrank.com/challenges/singly-linked-list-problem/problem)  
**Difficulty**: Easy  
**Topic**: Linear Data Structures - Linked Lists

## Problem Statement
Implement a singly linked list with the following operations:
1. Insert a node at the head
2. Insert a node at the tail
3. Display the linked list

## Solution (Python)
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insert_head(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
    
    def insert_tail(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node
    
    def display(self):
        current = self.head
        while current:
            print(current.data, end=" ")
            current = current.next
        print()

# Example usage
llist = LinkedList()
llist.insert_head(3)
llist.insert_tail(1)
llist.insert_tail(2)
llist.display()  # Output: 3 1 2
```

## Complexity Analysis
- **Time Complexity**: 
  - Insert at head: O(1)
  - Insert at tail: O(N)
  - Display: O(N)
- **Space Complexity**: O(1) - Only pointer changes, no extra space
```