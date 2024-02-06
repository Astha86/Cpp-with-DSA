#include<iostream>
using namespace std;
// 1--> Even 
// 0 --> Odd
int isEven(int a){
    if(a&1) { //odd
        cout<<"No. is Odd";
    }
    else { //even
        cout<<"No. is Even";
    }
    return 0;
}
int main(){
    int num;
    cout<<"Enter Number = ";
    cin>>num;
    isEven(num);
    return 0;
}