#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num%2==0 && num%3==0){
        cout<<num <<" is divisble by 2 & 3."<<endl;
    }
    return 0;
}
