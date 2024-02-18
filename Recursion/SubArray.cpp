#include<bits/stdc++.h>
using namespace std;

void SubArray(int n, int arr[], int i, vector<int> ans){
    if(i==n){
        for(int x=0; x<ans.size(); x++){
            cout<<ans[x]<<" ";
        }
        cout<<endl;
        return ;
    }
    SubArray(n,arr,i+1,ans);

    if(ans.size()==0 || ans[ans.size()-1]==arr[i-1]){
        ans.push_back(arr[i]);
        SubArray(n,arr,i+1,ans);
    }
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
    SubArray(n,arr,0,v);
}