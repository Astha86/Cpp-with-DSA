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

class DLL{ // User defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int v){
        Node* temp = new Node(v);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int v){
        Node* temp = new Node(v);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
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
            temp->prev = t;
            t->next = temp;
            temp->next->prev = temp;
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
        else if(idx<size/2){
            Node* t = head;
            for(int i=1; i<=idx; i++){
                t = t -> next;
            }  
            return t->val; 
        }
        else{
            Node* t = tail;
            for(int i=1; i<size-idx; i++){
                t = t -> prev;
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
        if(head!=NULL) head->prev = NULL;
        if(head==NULL) tail = NULL;
        size--;
    }

    void deleteAtTail(){
        if(size==0) {
            cout<<"List is not exist";
            return;
        }

        else if(size==1) {
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev;
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
                
            temp->next = temp->next->next;
            temp->next->prev = temp;
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
    DLL list; //{ } --- Empty LinkedList 
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(25);
    list.display();
    list.insertAtEnd(35);
    list.insertAtHead(5);
    list.display();
    list.insertAtIdx(2,15);
    list.display();
    list.deleteAtHead();
    list.display();
    list.deleteAtTail();
    list.display();
    list.deleteAtIdx(2);
    list.display();
    cout<<list.getAtIdx(0)<<endl;
    cout<<list.getAtIdx(2)<<endl;
    return 0;
}