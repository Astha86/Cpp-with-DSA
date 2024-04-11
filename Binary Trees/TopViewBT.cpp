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

void topView(Node* root){
    unordered_map<int, int> m;
    queue< pair<Node*,int> > q; 
    pair<Node*,int> r;
    r.first = root;
    r.second = 0; //level
    q.push(r);
    m[0] = root->val;

    while(q.size()!=0){
        Node* temp = q.front().first;
        int level = q.front().second;
        q.pop();

        if(m.find(level) == m.end()) m[level] = temp->val;

        if(temp->left){
            pair<Node*,int> p;
            p.first = temp->left;
            p.second = level-1; //level
            q.push(p);
        }

        if(temp->right){
            pair<Node*,int> p;
            p.first = temp->right;
            p.second = level+1; //level
            q.push(p);
        }
    }

    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(auto x: m){
        int l = x.first;
        mini = min(mini,l);
        maxi = max(maxi,l);
    }

    cout<<"\nTop View :\n";
    for(int i=mini; i<=maxi; i++){
        cout<<m[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = Construct(arr,n);
    displayWithQueue(root);

    topView(root);
}