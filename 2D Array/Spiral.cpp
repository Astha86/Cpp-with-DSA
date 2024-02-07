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
    cout<<"Enter the elements of the matrix :- "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    int ryt = c-1;
    int lft = 0;
    int up = 1;
    int dwn = r-1;
    int count = 0;
    int te = r*c; //te = Total Elements

    cout<<"Final Result :- "<<endl;

    while(count <= te ){

        for(int i=lft; i<=ryt; i++){
            cout<<arr[up-1][i]<<" ";
            count++;
        }
        ryt--;
        if(count == te) break;

        for(int i=up; i<=dwn; i++){
            cout<<arr[i][ryt+1]<<" ";
            count++;
        }
        dwn--;
        if(count == te) break;

        for(int i=ryt; i>=lft; i--){
            cout<<arr[dwn+1][i]<<" ";
            count++;
        }
        lft++;
        if(count == te) break;

        for(int i=dwn; i>=up; i--){
            cout<<arr[i][lft-1]<<" ";
            count++;
        }
        up++;
    }
    return 0;
}