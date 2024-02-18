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

    int k = 1;

    int hi = n-1;
    int lo = 0;
    bool flag = false;
    int idx = -1;
    while(lo<=hi){
        int mid = (hi + lo)/2;
        if(arr[mid]==k){
            if(arr[mid]==0){
                flag = true;
                idx = mid;
                break;
            }
            else if(arr[mid-1]!=k){
                flag = true;
                idx = mid;
                break;
            }
            else hi = mid-1;
        }
        else if(arr[mid]>k) hi = mid-1;
        else lo = mid+1;
    }
    cout<<"No. of ocuurence of 1's: "<<(n-idx);
    if(flag==false) cout<<"1 is not present in array";
    return 0;
}