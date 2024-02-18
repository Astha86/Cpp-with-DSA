#include<bits/stdc++.h>
using namespace std;

void comb(vector<int> v, int arr[], int n, int key, int idx){

    if(key==0){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }

    if(key<0) return;

    for(int i=idx; i<n; i++){
        v.push_back(arr[i]);
        comb(v,arr,n,key-arr[i],i);
        v.pop_back();
    }
}

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target: ";
    cin>>target; 

    vector<int> v;

    comb(v,arr,n,target,0);
}