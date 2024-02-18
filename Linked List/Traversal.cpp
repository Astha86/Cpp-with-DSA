#include<iostream>
using namespace std;

class Node{ //Linkedlist node
public:
    int val;
    Node* next;

    Node(int v){ //constructor to initialize the node value
        val = v;
        next = NULL; //by default NULL address set kr diye
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // set the address
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // priting D value
    //cout<<(((a.next)->next)->next)->val;

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
    return 0;
}