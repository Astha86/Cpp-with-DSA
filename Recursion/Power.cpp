#include<iostream>
using namespace std;
int power(int i, int j){
    if(j==0) return 1;
    return i * power(i,j-1);
}

int main(){
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter exponent: ";
    cin>>b;
    cout<<power(a,b);
    return 0;
}

// T.C: n --n is exponent