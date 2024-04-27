// Sort Nearly Sorted Araay

#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>>pq; 
    vector<int>ans;

    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int idx = 0;
    for(int i=0; i<n; i++){
        int x = arr[i];
        if(pq.size()>k){
            arr[idx++] = pq.top();
            pq.pop();
        }
        pq.push(x);
    }

    while(pq.size()!=0){
        arr[idx++] = pq.top();
        pq.pop();
    }

    cout<<"\nAfter Sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

// T.C = O(n log k) 
// S.C = O(1) 