#include<iostream>
using namespace std;
int main(){
    int i,j,c,r;
    cout<<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter the number of columns : ";
    cin>>c;
    for(i=1;i<r+1;i++){
        for(j=1;j<c+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}