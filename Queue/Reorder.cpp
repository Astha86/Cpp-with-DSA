/*  Reorder Queue (Interleave 1st half with 2nd half):
    It is given to use only a single stack

    let suppose queue is 1 2 3 4 5 6 7 8
    output should be :   1 5 2 6 3 7 4 8   
*/

#include<bits/stdc++.h>
using namespace std;

void display(queue<int> &q){
    int n = q.size();
    for(int i=0; i<n; i++){
        cout<<q.front()<<" ";
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    cout<<endl;
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
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    // reorder wala code
    stack<int>s;
    int n = q.size();
    for(int i=0; i<n/2; i++){
        s.push(q.front());
        q.pop();
    }

    while(s.size()!=0){
        q.push(s.top());
        s.pop();
    }

    for(int i=0; i<n/2; i++){
        s.push(q.front());
        q.pop();
    }

    while(s.size()!=0){
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }

    reverse(q);
    return 0;
}