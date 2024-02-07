#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag = false;
    int x;
    cout<<"Enter the key to find in the array: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }

    if(flag==true) cout<<"It is available in array.";
    else cout<<"It is not available in array.";
    return 0;
}