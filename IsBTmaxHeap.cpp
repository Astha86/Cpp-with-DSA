// Check that the given Binary tree is MaxHeap or not

#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val  = val;
        this->right = NULL;
        this->left = NULL;
    }
};

int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

bool CBT(Node* root){
    int n = size(root);
    int count = 0;
    queue<Node*>q;
    q.push(root);
    while(count<n){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL) {
            q.push(temp->left); 
            q.push(temp->right);
        }
    }
    if(q.size()>0){
        Node* temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}

bool Maxi(Node*root){
    if(root==NULL) return true;
    if(root->left && root->val < root->left->val) return false;
    if(root->right && root->val < root->right->val) return false;
    return Maxi(root->left) && Maxi(root->right); 
}

int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    
    if(CBT(a) && Maxi(a)) cout<<" Tree is MaxHeap";
    else cout<<" Tree is not a MaxHeap";
    return 0;
}
