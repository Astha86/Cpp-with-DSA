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

    int hi = n-1;
    int lo = 0;
    int ans = -1;
    while (lo<=hi){
        int mid = (hi + lo)/2;
        if(arr[mid]==mid) lo = mid+1;
        else{
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<ans;
    return 0;
}