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
    cout<<"Enter the Key: ";
    cin>>k;

    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            flag = true;
            break;
        }
    }

    if(flag) cout<<"Element is present in array"<<endl;
    else cout<<"Element is not present in array"<<endl;

    return 0;
}