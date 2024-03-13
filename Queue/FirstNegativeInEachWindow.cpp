//  print the First -ve in each window of size K. If there is not any negative
// number in the window then print 0

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    queue<int>q;
    for(int i=0; i<n; i++){
        if(arr[i]<0) q.push(i);
    }

    int k = 3;
    int i = 0; 
    // vector<int>ans;
    while(i<=n-k){
        if(q.front()<i) q.pop();
        if(q.front()>=i && q.front()<(i+k)){
            int x = q.front();
            // ans.push_back(arr[x]);
            cout<<arr[x]<<" ";
        }
        // else ans.push_back(0);
        else cout<<0<<" ";
        i++;
    }
    return 0;
}