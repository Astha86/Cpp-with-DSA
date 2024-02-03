#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    cout<<"Enter the number : ";
    cin>>n;
     while(n!=0)
    {
        r=r*10;
        r+=(n%10);
        n=n/10;
    }
    cout<<"After the reversing of number of the digits is "<<r;
    return 0;
}