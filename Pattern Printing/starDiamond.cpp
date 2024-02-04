#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    int nst=1;
    int nsp=r-1;
    for(int i=1;i<=(2*r)-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<r) nsp--;
        else nsp++;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<r) nst+=2;
        else nst-=2;
        cout<<endl;
    }
    return 0;
}