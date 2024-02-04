#include<iostream>
using namespace std;
int main(){
    int m,i,j;
    cout<<"Enter the number of rows: ";
    cin>>m;
    for(i=1;i<m+1;i++){
        int a=1;
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
    return 0;
}
