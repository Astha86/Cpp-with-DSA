#include<iostream>
using namespace std;
int main (){
    int i,j,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int a=1;

    for(i=1;i<n+1;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}