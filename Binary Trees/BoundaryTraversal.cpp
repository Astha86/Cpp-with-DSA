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

void display(Node* root, int n, int c){
    if(root==NULL) return;
    if(c==n){
        cout<<root->val<<" ";
        return;
    }   
    display(root->left,n,c+1);
    display(root->right,n,c+1);
}

Node* Construct(int arr[], int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;

    while(q.size()!=0 && i<n){
        Node* temp = q.front();
        q.pop();

        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL)leftBoundary(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" ";
}

void bottomBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) 
    cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,29,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN,};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = Construct(arr,n);
    // for(int i=1; i<=n; i++){
    //     display(root,i,1);
    //     cout<<endl;
    // }
    cout<<"Boundary Traversal - \n";
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
}