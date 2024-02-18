#include<iostream>
using namespace std;

class Node{ //Linkedlist node
public:
    int val;
    Node* next;

    Node(int v){
        val = v;
        next = NULL;
    }
};

void display(Node* head){
    // T.C = O(n) S.C = O(1)
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    // a b c d pointer variable hai jisme sirf node class k object ka address store kr skte h    
    // Node class ka object new keyword se create ho gya
    Node* a = new Node (10);
    Node* b = new Node (20);
    Node* c = new Node (30);
    Node* d = new Node (40);


    // set the address
    a->next = b; // a me jo address pda h uske next pe jao b me jo data pda h usse daal do...b me next node ka address hai
    b->next = c;
    c->next = d;

    //cout<<a->next->next->val; //c

    // Display
    // Node* temp = a;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    // Display using function
    display(a);

    return 0;
}