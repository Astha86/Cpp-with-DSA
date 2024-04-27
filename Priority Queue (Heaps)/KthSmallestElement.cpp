#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10, 20, -4, 6, 18, 2, 105, 118};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int>pq;
    for(int i=0; i<n; i++){ //O(n)
        pq.push(arr[i]);          //O(log k)
        if(pq.size()>k) pq.pop(); //O(log k)
    }

    cout<<pq.top()<<endl;

    //T.C = O(n log k) 
    // S.C = O(n) - total Space
    // arbitary space = O(k) - pq space
    return 0;
}