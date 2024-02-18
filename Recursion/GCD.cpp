#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (a==0) return b;
    return gcd(b%a, b);
}  //T.C O(log(a+b))


int main(){

    int a;
    cout<<"Enter the first no. : ";
    cin>>a;
    int b;
    cout<<"Enter the second no. : ";
    cin>>b;

    cout<<gcd(a,b);
    return 0;
}