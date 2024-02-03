#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"The sum of n naturals numbers is "<<sum;
    return 0;
}