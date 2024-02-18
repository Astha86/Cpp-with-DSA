#include<bits/stdc++.h>
using namespace std;

void subset(int n, int arr[], int i, vector<int> ans){
    if(i==n){
        for(int x=0; x<ans.size(); x++){
            cout<<ans[x]<<" ";
        }
        cout<<endl;
        return ;
    }
    subset(n,arr,i+1,ans);
    ans.push_back(arr[i]);
    subset(n,arr,i+1,ans);
}

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> v;
    subset(n,arr,0,v);
}