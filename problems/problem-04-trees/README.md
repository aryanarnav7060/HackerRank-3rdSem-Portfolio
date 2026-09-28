# Problem: Binary Tree Traversal
**HackerRank Link**: [Binary Search Tree - Insertion](https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem)  
**Difficulty**: Medium  
**Topic**: Trees - Binary Search Tree

## Problem Statement
Implement a Binary Search Tree and perform the following operations:
1. Insert nodes into the BST
2. Print the tree using inorder traversal
3. Print the tree using preorder traversal

## Solution (C++)
```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            return new Node(data);
        }
        if (data <= root->data) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }
        return root;
    }
    
    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    
    void preorder(Node* root) {
        if (root == nullptr) return;
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
};

int main() {
    Solution myTree;
    Node* root = nullptr;
    int t;
    cin >> t;
    while (t--) {
        int data;
        cin >> data;
        root = myTree.insert(root, data);
    }
    cout << "Inorder: ";
    myTree.inorder(root);
    cout << endl;
    cout << "Preorder: ";
    myTree.preorder(root);
    cout << endl;
    return 0;
}
```

## Complexity Analysis
- **Time Complexity**: 
  - Insertion: O(H) where H is tree height (O(log N) average, O(N) worst)
  - Inorder/Preorder traversal: O(N)
- **Space Complexity**: O(H) - Recursion stack height
```