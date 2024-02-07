#include<iostream>
using namespace std;
int main(){
    
    int r;
    cout<<"Enter the no. of rows: ";
    cin>>r;

    int c;
    cout<<"Enter the no. columns: ";
    cin>>c;

    int arr[r][c];
    cout<<"Enter the elements of the Matrix :-"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The Diagonals Elements of the Matrix: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if((i==j) || (j==c-1-i)){
                cout<<arr[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}