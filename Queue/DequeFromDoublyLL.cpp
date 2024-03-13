// Implementation of deque from doubly linkedlist

#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque{
public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head = tail = NULL;
        s = 0;
    }

    void push_back(int v){
        Node* temp = new Node(v);
        if(s == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
    }

    void push_front(int v){
        Node* temp = new Node(v);
        if(s == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }

    void pop_front(){
        if(s==0) {
            cout<<"List is not exist";
            return;
        }
        head = head->next; 
        if(head!=NULL) head->prev = NULL;
        if(head==NULL) tail = NULL;
        s--;
    }

    void pop_back(){
        if(s==0) {
            cout<<"List is not exist";
            return;
        }

        else if(s==1) {
            pop_front();
            return;
        }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        s--;
    }

    int front(){
        if(s==0) {
            cout<<"Queue is empty";
            return -1;
        }
        return (head->val);
    }

    int back(){
        if(s==0) {
            cout<<"Queue is empty";
            return -1;
        }
        return (tail->val);
    }

    int size(){
        return s;
    }

    bool empty(){
        if(s==0) return true;
        else return false;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Deque dq;
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    dq.display();
    dq.push_front(30);
    dq.push_front(20);
    dq.push_front(10);
    dq.display();
    dq.pop_back();
    dq.pop_front();
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;
}