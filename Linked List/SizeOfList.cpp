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

void size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout<<count<<endl;
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

    size(a);
}