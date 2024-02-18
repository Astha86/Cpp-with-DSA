//  It is used when you have the idea about the elements of the array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,2,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cyclic sort
    int i = 0;
    while(i<n){
        int idx = arr[i]-1;
        if(arr[i] == i+1) i++;
        else{
            swap(arr[i],arr[idx]);
        }
    }
    cout<<"After Sorting: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}