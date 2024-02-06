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

int perm(int n, int r){
    return fact(n)/fact(n-r);
}

int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"Combination: "<<comb(n,r)<<endl;;
    cout<<"Permutation: "<<perm(n,r);
    return 0;
}