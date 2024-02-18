#include<iostream>
using namespace std;

void display(int x, int n, int arr[]){
    if(x==n) return ;
    cout<<arr[x]<<" ";
    display(x+1,n, arr);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    display(0,n,arr); 
}