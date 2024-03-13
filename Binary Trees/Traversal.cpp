// DFS Traversal

#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};

// Preorder Traversal
void PreDisplay(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";   //Pre
    PreDisplay(root->left);
    PreDisplay(root->right);
}

// Inorder Traversal
void InDisplay(Node* root){
    if(root==NULL) return;
    InDisplay(root->left);
    cout<<root->val<<" ";
    InDisplay(root->right);   //In
}

// Postorder Traversal
void PostDisplay(Node* root){
    if(root==NULL) return;
    PostDisplay(root->left);
    PostDisplay(root->right);
    cout<<root->val<<" ";   //Post
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<"PreOrder : ";
    PreDisplay(a);
    cout<<endl;
    cout<<"InOrder : ";
    InDisplay(a);
    cout<<endl;
    cout<<"PostOrder : ";
    PostDisplay(a);
    cout<<endl;
}