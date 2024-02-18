#include<iostream>
using namespace std;

void zz(int n){
    if(n==0) return;
    cout<<n;
    zz(n-1);
    cout<<n;
    zz(n-1);
    cout<<n;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    zz(n);
    return 0;
}