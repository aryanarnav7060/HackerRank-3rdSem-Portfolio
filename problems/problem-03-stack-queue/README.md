# Problem: Stack Implementation
**HackerRank Link**: [Stacks: Introduction](https://www.hackerrank.com/challenges/stacks-inroduction/problem)  
**Difficulty**: Easy  
**Topic**: Linear Data Structures - Stack

## Problem Statement
Implement a stack with the following operations:
1. Push an element onto the stack
2. Pop an element from the stack
3. Peek at the top element
4. Check if the stack is empty

## Solution (Java)
```java
import java.util.*;

public class StackImplementation {
    private int[] stack;
    private int top;
    private int capacity;
    
    public StackImplementation(int size) {
        capacity = size;
        stack = new int[size];
        top = -1;
    }
    
    public void push(int value) {
        if (top == capacity - 1) {
            System.out.println("Stack Overflow");
            return;
        }
        stack[++top] = value;
    }
    
    public int pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
            return -1;
        }
        return stack[top--];
    }
    
    public int peek() {
        if (top == -1) {
            System.out.println("Stack is empty");
            return -1;
        }
        return stack[top];
    }
    
    public boolean isEmpty() {
        return top == -1;
    }
    
    public int size() {
        return top + 1;
    }
    
    public static void main(String[] args) {
        StackImplementation s = new StackImplementation(5);
        s.push(10);
        s.push(20);
        s.push(30);
        System.out.println("Peek: " + s.peek());  // 30
        System.out.println("Pop: " + s.pop());  // 30
        System.out.println("Is Empty: " + s.isEmpty());  // false
    }
}
```

## Complexity Analysis
- **Time Complexity**: O(1) for push, pop, peek, isEmpty
- **Space Complexity**: O(N) - Fixed size array of N capacity
```