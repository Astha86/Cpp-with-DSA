#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the no. of rows: ";
    cin>>r;

    int c;
    cout<<"Enter the no. of columns: ";
    cin>>c;

    int arr[r][c];
    cout<<"Enter the elements of the matrix: \n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nFinal Result :- \n";
    for(int j=0; j<c; j++){
        if(j%2 != 0){
            for(int i=0; i<r; i++){
                cout<<arr[i][j]<<" ";
           }
        }
        else{
            for(int i=r-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    //  for(int j=0; j<c; j++){
    //         for(int i=0; i<r; i++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }

    return 0;
}