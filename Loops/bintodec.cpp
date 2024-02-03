#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number in binary: ";
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int ld=n%10;
        ans+=(ld*power);
        power*=2;
        n/=10;
    }
    cout<<"Number in decimal form: "<<ans;
    return 0;
}