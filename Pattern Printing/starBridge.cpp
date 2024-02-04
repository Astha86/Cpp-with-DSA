#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    int m = n-1;
    for(int i=1;i<2*n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int a=1;a<=m;a++){
         for(int i=1;i<=m+1-a;i++){
            cout<<"*";
        }

        for(int j=1;j<2*a;j++){
            cout<<" ";
        }

        for(int k=1;k<=m+1-a;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}