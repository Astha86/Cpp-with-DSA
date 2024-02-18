#include<iostream>
using namespace std;

int pow(int i,int j){
    if(j==1) return i;
    int ans = pow(i,j/2);
    if(j%2==0){
        return ans*ans;
    }
    if(j%2==1){
        return ans*ans*i;
    }
}

int main(){
    int b;
    cout<<"Enter the base: ";
    cin>>b;
    int p;
    cout<<"Enter the exponent: ";
    cin>>p;
    cout<<pow(b,p);
    return 0;
}

// t.C : log n -> n = exponent