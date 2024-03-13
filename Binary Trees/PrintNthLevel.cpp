// Print elements of nth level 
// BFS Traversal

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
void display(Node* root, int n, int c){
    if(root==NULL) return;
    if(c==n) {
        cout<<root->val<<" ";
        return;
    }
    display(root->left,n,c+1);
    display(root->right,n,c+1);
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

    int n = 3;
    cout<<"Elements of "<<n<<"th level : ";
    int ct = 1;
    display(a,n,ct);
    cout<<endl;
}