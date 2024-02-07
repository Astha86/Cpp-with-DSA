#include<iostream>
using namespace std;
int main(){

    int r1;
    cout<<"Enter the no. of rows in first matrix: ";
    cin>>r1;

    int c1;
    cout<<"Enter the no. of columns in first matrix: ";
    cin>>c1;

    int r2;
    cout<<"Enter the no. of rows in second matrix: ";
    cin>>r2;

    int c2;
    cout<<"Enter the no. of columns in second matrix: ";
    cin>>c2;

    if(c1 == r2){

        int a[r1][c1];
        cout<<"Enter the elements of the first matrix :- \n";
        for(int i=0; i<r1; i++){
            for (int j=0; j<c1; j++){
                cin>>a[i][j];
            }
        }

        int b[r2][c2];
        cout<<"Enter the elements of the second matrix :- \n";
        for(int i=0; i<r2; i++){
            for (int j=0; j<c2; j++){
                cin>>b[i][j];
            }
        }

        int res[r1][c2];
        for(int i=0; i<r1; i++){
            for (int j=0; j<c2; j++){
                // res[i][j] = 0;
                for(int k=0; k<c1; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        } 

        // printing the final result
        cout<<"The multiplication of the two given matrices :- ";
        for(int i=0; i<r1; i++){
            for (int j=0; j<c2; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    else{
        cout<<" The multiplication of these two matrices cannot be exist.";
    }
    return 0;
}
