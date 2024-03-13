// consider 0 based Indexing
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

int main(){
    int n;
    cout<<"Enter the size of the queue : ";
    cin>>n;

    queue<int>q;
    cout<<"Enter the elemets of the queue : ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    // Removing the elements at even indexing
    for(int i=0; i<n; i++){
        if(i%2==0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }

    display(q);
    return 0;
}