#include<iostream>
using namespace std;
int main(){
    int b,p,ans=1;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter power: ";
    cin>>p;
    for(int i=1;i<=p;i++){
        ans*=b;
    }
    cout<<b<<" raised to the power "<<p<<" is "<<ans<<endl;
    return 0;
}