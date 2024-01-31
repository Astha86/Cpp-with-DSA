#include<iostream>
using namespace std;
int main(){
    int num1=5; // 0101
    int num2=8;//  1000
    cout<<(num1<<1)<<endl;  //*2 = 10
    cout<<(num2>>1)<<endl;  // /2= 4
    cout<<(num1&num2)<<endl; //0
    cout<<(num1|num2)<<endl; //1101 = 13 
    cout<<(~num1)<<endl;
    cout<<(num1^num2)<<endl;
    return 0;
}