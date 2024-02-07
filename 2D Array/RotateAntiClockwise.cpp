#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n][n];

    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    } 

    cout<<"The Rotation of the array :- "<<endl;                                                                       
    
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    } 

    return 0;
}