#include<iostream>
using namespace std;

int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f *= i;
    }
    return f;
}

int comb(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n,r,x;
    cout<<"Enter no. of rows: ";
    cin>>x;
    for(int n=0;n<=x;n++){
        for(int r=0;r<=n;r++){
            cout<<comb(n,r)<<" ";
        }
        cout<<endl;
    }
    return 0;
}