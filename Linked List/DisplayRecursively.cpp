#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int v){
        val = v;
        next = NULL;
    }
};

void displayrec(Node* temp){
    // T.C = O(n) S.C = O(n) coz on every call...local head variable create
    if(temp == NULL) return;
    cout<<temp->val<<" ";
    displayrec(temp->next);
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    //linked
    a->next = b;
    b->next = c;
    c->next = d;

    displayrec(a);
}