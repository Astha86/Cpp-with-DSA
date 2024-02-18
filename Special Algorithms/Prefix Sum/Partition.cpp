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

    // prefix sum
    for(int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }

    // to find partition is possible or not
    bool flag = false;
    for(int i=1; i<n; i++){
        if(2*arr[i] == arr[n-1]){
            flag = true;
            break;
        }
    }

    if(flag==true) cout<<"Partition is possible";
    else cout<<"Partition is not possible";
    return 0;
}