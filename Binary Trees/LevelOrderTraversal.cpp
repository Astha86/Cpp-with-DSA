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

int levels(Node* root){
    if(root==NULL) return 0;
    int ans = 1 + max(levels(root->left), levels(root->right));
    return ans;
}

// Level order Traversal (Left->Right)
void displayLR(Node* root, int n, int c){
    if(root==NULL) return;
    if(c==n){
        cout<<root->val<<" ";
        return;
    }   
    displayLR(root->left,n,c+1);
    displayLR(root->right,n,c+1);
}

// Level order Traversal (Right->Left)
void displayRL(Node* root, int n, int c){
    if(root==NULL) return;
    if(c==n){
        cout<<root->val<<" ";
        return;
    }   
    displayRL(root->right,n,c+1);
    displayRL(root->left,n,c+1);
}

void displayWithQueue(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
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

    int n = levels(a);
    cout<<"\nTraversal From Left To Right :\n";
    for(int i=1; i<=n; i++){
        displayLR(a,i,1);
        cout<<endl;
    }

    cout<<"\nTraversal From Right To Left :\n";
    for(int i=1; i<=n; i++){
        displayRL(a,i,1);
        cout<<endl;
    }

    cout<<"\nDisplay via Queue: ";
    displayWithQueue(a);
}