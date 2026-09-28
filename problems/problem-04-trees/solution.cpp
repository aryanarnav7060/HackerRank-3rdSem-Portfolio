#include <iostream>
using namespace std;

// Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Binary Search Tree
class BST {
private:
    Node* root;
    
    // Insert recursively
    Node* insertRec(Node* node, int val) {
        if (node == nullptr) {
            return new Node(val);
        }
        if (val < node->data) {
            node->left = insertRec(node->left, val);
        } else if (val > node->data) {
            node->right = insertRec(node->right, val);
        }
        return node;
    }
    
    // Inorder traversal
    void inorderRec(Node* node) {
        if (node == nullptr) return;
        inorderRec(node->left);
        cout << node->data << " ";
        inorderRec(node->right);
    }
    
    // Preorder traversal
    void preorderRec(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderRec(node->left);
        preorderRec(node->right);
    }
    
public:
    BST() {
        root = nullptr;
    }
    
    // Public insert function
    void insert(int val) {
        root = insertRec(root, val);
    }
    
    // Inorder traversal
    void inorder() {
        cout << "Inorder: ";
        inorderRec(root);
        cout << endl;
    }
    
    // Preorder traversal
    void preorder() {
        cout << "Preorder: ";
        preorderRec(root);
        cout << endl;
    }
};

int main() {
    BST tree;
    
    // Insert nodes
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    
    // Display traversals
    cout << "Tree traversals:" << endl;
    tree.inorder();
    tree.preorder();
    
    return 0;
}