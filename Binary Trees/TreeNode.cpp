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

// This funtion return the sum of all node

int sum(Node* root){
    if(root==NULL) return 0;
    int ans = root->val + sum(root->left) +sum(root->right);
    return ans;
}

// This funtion return the product of all node

int product(Node* root){
    if(root==NULL) return 1;
    int ans = root->val * product(root->left) * product(root->right);
    return ans;
}

// This funtion return the size of tree

int size(Node* root){
    if(root==NULL) return 0;
    int ans = 1 + size(root->left) + size(root->right);
    return ans;
}

// This funtion return the maximum value in the tree

int maxi(Node* root){
    if(root==NULL) return INT_MIN;
    int x = max(maxi(root->left), maxi(root->right));
    int ans = max(root->val, x);
    return ans;
}

// This funtion return the minimum value in the tree

int mini(Node* root){
    if(root==NULL) return INT_MAX;
    int x = min(mini(root->left), mini(root->right));
    int ans = min(root->val, x);
    return ans;
}

// This funtion return the no. of levels in the tree

int levels(Node* root){
    if(root==NULL) return 0;
    int ans = 1 + max(levels(root->left), levels(root->right));
    return ans;
}

void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
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

    display(a);
    cout<<endl;
    cout<<"Sum : "<<sum(a)<<endl;
    cout<<"Product : "<<product(a)<<endl;
    cout<<"Size : "<<size(a)<<endl;
    cout<<"Maximum Value : "<<maxi(a)<<endl;
    cout<<"No. of levels : "<<levels(a)<<endl;
    cout<<"Height : "<<levels(a)-1<<endl;
}