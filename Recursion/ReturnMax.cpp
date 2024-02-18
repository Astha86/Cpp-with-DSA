#include<bits/stdc++.h>
using namespace std;

int maxi(int x, int n, int arr[]){
    if(x==n){
        return INT_MIN;
    }
    return max(arr[x],maxi(x+1,n,arr));
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<maxi(0,n,arr); 

}