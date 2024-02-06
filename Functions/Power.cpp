#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}
int main(){
    int b,p;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter power: ";
    cin>>p;
    int ans = power(b,p);
    cout<<b<<" raised to the power "<<p<<" is "<<ans<<endl;
    return 0;
}