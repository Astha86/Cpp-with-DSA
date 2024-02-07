#include<iostream>
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

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int k=0; k<n; k++) {
        int i=0;
        int j=n-1;
        while(i<=j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }

    cout<<"The Rotation of the array :- "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    return 0;
}