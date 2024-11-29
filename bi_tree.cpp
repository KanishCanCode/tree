#include <iostream>
using namespace std;

struct tree{
int data;
struct tree* left;
struct tree* right;
};

void preorder(tree* ptr){
if(ptr!=NULL)
    cout<<ptr->data;
    preorder(ptr->left);
    preorder(ptr->right);

}

void inorder(tree* ptr){
if(ptr!=NULL)
    inorder(ptr->left);
    cout<<ptr->data;
    inorder(ptr->right);

}

void postorder(tree* ptr){
if(ptr!=NULL)
    postorder(ptr->left);
    postorder(ptr->right);
    cout<<ptr->data;
}

int main(){

struct tree *n1,*n2,*n3,*root;
root =new tree;
root->data=10;
root->left=NULL;
root->right=NULL;

n1 =new tree;
root->left=n1;
n1->data=20;
n1->left=NULL;
n1->right=NULL;

n2 =new tree;
root->right=NULL;
n2->data=30;
n2->left=NULL;
n2->right=NULL;

n3 =new tree;
n1->left=n3;
n3->data=40;
n3->left=NULL;
n3->right=NULL;

preorder(root);
postorder(root);
inorder(root);

}
