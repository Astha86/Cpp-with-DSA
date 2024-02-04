#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            int a=j;
            if(a>n){
                a=2*n-j;
            }
            if(i==a) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}