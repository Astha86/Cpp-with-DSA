#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int a){
        val = a;
        next = NULL;
    }
};

class Stack{
public:
    int size;
    Node* head;

    Stack(){
        size = 0;
        head = NULL;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(size==0) cout<<"Stack Underflow!!";
        else{
            head = head->next;
            size--;
        }
    }

    int top(){
        if(size==0){
            cout<<"Stack is Empty!!";
            return -1;
        }
        return head->val;
    }

    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }

    void display(){
        Node* temp = head;
        print(temp);
        cout<<endl;
        return;
    }
};

int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size<<endl;
    st.display();
    return 0;
}