#include<bits/stdc++.h>
using namespace std;

//  Using an extra variable

void maxi(int x, int n, int arr[], int max){
    if(x==n){
        cout<<max;
        return ;
    }
    if(arr[x]>max) max = arr[x];
    maxi(x+1,n,arr,max);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    maxi(0,n,arr,INT_MIN); 
}