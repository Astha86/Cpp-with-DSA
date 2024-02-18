#include<iostream>
using namespace std;

int fibo(int i){
    if(i==1 || i==2) return 1;
    return fibo(i-1) + fibo(i-2);
}

int main(){
    int n;
    cout<<"Enter the term: ";
    cin>>n;
    cout<<fibo(n);
    return 0;
}