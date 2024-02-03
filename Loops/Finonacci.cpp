#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int a=0,b=1;
    cout<<"The fibinacci series ="<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
return 0;
}