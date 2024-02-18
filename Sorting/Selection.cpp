#include<bits\stdc++.h>
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

    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}