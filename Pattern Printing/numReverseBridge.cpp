#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    for(int i=1;i<2*n;i++){
        if(i>n){
            int a=(2*n)-i;
            cout<<a;
        }
        else cout<<i;
        
    }
    cout<<endl;
    for(int a=1;a<n;a++){
         for(int i=1;i<=n-a;i++){
            cout<<i;
        }

        for(int j=1;j<2*a;j++){
            cout<<" ";
        }

        for(int i=n-a;i>=1;i--){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}