#include<bits/stdc++.h>
using namespace std;

void display(queue<int> &q){
    int n = q.size();
    for(int i=0; i<n; i++){
        cout<<q.front()<<endl;
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
} 

void reverse(queue<int> &q){
    int n = q.size();
    stack<int>s; // temporary stack for reversing
    //empty the queue into the stack 
    for(int i=0; i<n; i++){
        int x = q.front();
        s.push(x);
        q.pop();
    }

    //empty the stack into the queue 
    for(int i=0; i<n; i++){
        int x = s.top();
        q.push(x);
        s.pop();
    }

    display(q);
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<"Display the element of the queue -"<<endl;
    display(q);

    
    cout<<"Display the element of the queue in reverse order -"<<endl;
    reverse(q);

    return 0;
}