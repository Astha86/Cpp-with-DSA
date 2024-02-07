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
    for(int i=0; i<r; i++){
        if(i%2 == 1){
            for(int j=0; j<c; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=c-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}