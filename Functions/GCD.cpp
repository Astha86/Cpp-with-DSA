#include<iostream>
using namespace std;

int gcd(int a,int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if (a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"GCD: "<<gcd(a,b);
    return 0;
}