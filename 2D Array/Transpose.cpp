#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    cout<<"Enter the no. of columns: ";
    cin>>m; 
    int arr[n][m];

    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    } 

    cout<<"The Transpose of the array :- "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}