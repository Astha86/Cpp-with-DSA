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
    int count=0;
    
    int x;
    cout<<"Enter the key : ";
    cin>>x;
    for(int i=0;i<6;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"There are "<<count<<" number which are greater than "<<x;
    return 0;
}


