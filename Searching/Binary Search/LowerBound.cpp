#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the Key to: ";
    cin>>k;

    int hi = n-1;
    int lo = 0;
    bool flag = false;
    while (lo<=hi){
        int mid = (hi + lo)/2;
        if(arr[mid]==k){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]>k) hi= mid-1;
        else lo = mid+1;
    }
    if(flag==false) cout<<arr[hi];
    return 0;
}