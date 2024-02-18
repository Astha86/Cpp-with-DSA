#include<bits/stdc++.h>
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

    for(int j=0; j<n-1; j++){
        for(int i=0; i<n-1-j; i++){
            if(arr[i]==0){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    cout<<"Final Result -\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}