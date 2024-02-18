#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hi = n-1;
    int lo = 0;
    bool flag = false;
    while(lo<=hi){
        int mid = (hi + lo)/2;
        if(arr[mid]==mid+1) lo = mid+1; 
        else if(arr[mid]==mid){
            if(arr[mid-1]==mid){
                cout<<mid;
                flag=true;
                break;
            }
            else hi=mid-1;
        }
    }

    if(flag==false) return -1;
    return 0;
}