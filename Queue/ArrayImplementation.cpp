#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int arr[5];

    Queue(){
        f = 0;
        b = 0;
    }

    int size(){
        int x = b - f;
        return x;
    }

    void push(int val){
        if(b==5){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }

    void pop(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
    }


    int front(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else return arr[f];
    }

    int back(){
        if(size()==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else return arr[b-1];
    }

    bool empty(){
        if(size()==0) return true;
        else return false;
    }

    void display(){
        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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
    q.push(60); //overflow
    q.display();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl; // 1 if yes & 0 if no
    q.pop();
    q.display();
    return 0;
}