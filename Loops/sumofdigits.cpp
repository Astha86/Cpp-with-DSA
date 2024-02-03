#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(n!=0){
        int ld=n%10;
        sum+=ld;
        n=n/10;
    }
    cout<<"The sum of the digits is "<<sum;
    return 0;
}