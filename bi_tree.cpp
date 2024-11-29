#include <iostream>
using namespace std;

struct tree {
    int data;
    struct tree* left;
    struct tree* right;
};

void preorder(tree* ptr) {
    if (ptr != NULL) {
        cout << ptr->data << " ";  // Added space for better output formatting
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void inorder(tree* ptr) {
    if (ptr != NULL) {
        inorder(ptr->left);
        cout << ptr->data << " ";  // Added space for better output formatting
        inorder(ptr->right);
    }
}

void postorder(tree* ptr) {
    if (ptr != NULL) {
        postorder(ptr->left);
        postorder(ptr->right);
        cout << ptr->data << " ";  // Added space for better output formatting
    }
}

int main() {
    struct tree *n1, *n2, *n3, *root;

    // Create the root node
    root = new tree;
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    // Create the left child (n1)
    n1 = new tree;
    root->left = n1;
    n1->data = 20;
    n1->left = NULL;
    n1->right = NULL;

    // Create the right child (n2)
    n2 = new tree;
    root->right = n2;  // Fix: Set right child of root to n2
    n2->data = 30;
    n2->left = NULL;
    n2->right = NULL;

    // Create the left child of n1 (n3)
    n3 = new tree;
    n1->left = n3;
    n3->data = 40;
    n3->left = NULL;
    n3->right = NULL;

    // Print the tree traversals
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
