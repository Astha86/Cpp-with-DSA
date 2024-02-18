#include<iostream>
using namespace std;

class Node{ // User defined data type
public:
    int val;
    Node* next;

    Node(int v){
        val = v;
        next = NULL;
    }
};

class LinkedList{ // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int v){
        Node* temp = new Node(v);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int v){
        Node* temp = new Node(v);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* temp = new Node(val);
            Node* t = head;
            for(int i=1; i<=idx-1; i++){
                t = t -> next;
            }  
            temp->next = t->next;
            t->next = temp;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"This index doesn't exist";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* t = head;
            for(int i=1; i<=idx; i++){
                t = t -> next;
            }  
            return t->val; 
        }
    }

    void deleteAtHead(){
        if(size==0) {
            cout<<"List is not exist";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0) {
            cout<<"List is not exist";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;     
            for(int i=1; i<=idx-1; i++){
                temp = temp -> next;
            }  
                
            temp -> next = temp -> next -> next;
            size--;
        }
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
    LinkedList ll; //{ } --- Empty LinkedList 
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(25);
    ll.display();
    ll.insertAtHead(5);
    ll.display();
    ll.insertAtIdx(2,15);
    ll.display();
    cout<<ll.getAtIdx(2)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();
    return 0;
}