#include<iostream>
using namespace std;
int main(){

    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    int c;
    cout<<"Enter the number of cols: ";
    cin>>c;

    int arr[r][c];
    cout<<"Enter the elements of array: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    int idxr = -1;
    int idxc = -1;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] == 0){
                idxr = i;
                idxc = j;
            }
        }
    }

    for(int i=0,j=0; i<r,j<c; i++,j++){
        arr[idxr][j] = 0;
        arr[i][idxc] = 0;
    }

    cout<<"Final Result: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
