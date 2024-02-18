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

    cout<<(c.next)->val<<endl;

    //through the pointer we can access any node's value
    cout<<((a.next)->next)->val;
    return 0;
}