// GFG Question - Minium Cost to connect all Ropes (Easy)

#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>>pq; 
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    for(int x: arr){
        pq.push(x);
    }

    int cost = 0;
    while(pq.size() != 1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        int a = x+y;
        pq.push(a);
        cost += a;
    }

    cout<<cost<<endl;
}