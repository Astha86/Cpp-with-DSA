#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    
    int m = n-1;
    for(int i=1;i<2*n;i++){
        cout<<i;
    }
    cout<<endl;
    for(int a=1;a<=m;a++){
        int s=1;
         for(int i=1;i<=m+1-a;i++){
            cout<<s;
            s++;
        }

        for(int j=1;j<2*a;j++){
            cout<<" ";
            s++;
        }

        for(int i=1;i<=m+1-a;i++){
            cout<<s;
            s++;
        }
        cout<<endl;
    }
    return 0;
}