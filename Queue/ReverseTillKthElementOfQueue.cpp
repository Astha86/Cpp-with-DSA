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

void reverse(queue<int> &q, int k){
    int n = q.size();
    if(k>n) k%=n;
    stack<int> s;
    for(int i=0 ; i<k; i++){
        int x = q.front();
        q.pop();
        s.push(x); 
    }

    while (s.size()!=0){
        int x = s.top();
        q.push(x);
        s.pop();
    }
    
    for(int i=0; i<n-k; k++){
        int x = q.front();
        q.pop();
        q.push(x);
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
    q.push(60);

    int k = 3;
    reverse(q,k);
    return 0;
}