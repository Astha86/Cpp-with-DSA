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

class Queue{ 
public:
    Node* head;
    Node* tail;
    int s;
    Queue(){
        head = tail = NULL;
        s = 0;
    }

    void push(int v){
        Node* temp = new Node(v);
        if(s == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }

    void pop(){
        if(s==0) {
            cout<<"Queue is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        s--;
        delete(temp);
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
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
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.push(60);
    q.display();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl; // 1 if yes & 0 if no
    q.pop();
    q.display();
    return 0;
}