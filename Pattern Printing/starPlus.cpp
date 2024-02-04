#include<iostream>
using namespace std;
int main (){
    int i,j,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int mid=(n/2)+1;
    for(i=1;i<n+1;i++){
        for(j=1;j<n+1;j++){
            if(i==mid || j==mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}