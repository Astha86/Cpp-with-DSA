#include<iostream>
using namespace std;
bool Isprime(int x){
    int count=0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(Isprime(num)){
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
    return 0;
}