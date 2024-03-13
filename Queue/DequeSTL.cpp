#include<bits/stdc++.h>
using namespace std;

void display(deque<int> &q){
    int n = q.size();
    for(int i=0; i<n; i++){
        cout<<q.front()<<" ";
        int temp = q.front();
        q.pop_front();
        q.push_back(temp);
    }
    cout<<endl;
} 

int main(){
    deque<int> dq;
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    display(dq);
    dq.push_front(30);
    dq.push_front(20);
    dq.push_front(10);
    display(dq);
    dq.pop_back();
    dq.pop_front();
    display(dq);
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.size()<<endl;
    cout<<dq.empty()<<endl;
}