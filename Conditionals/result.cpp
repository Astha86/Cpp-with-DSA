#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    if(marks>=33){
        cout<<"You are pass.\n";
    }
    else{
        cout<<"You are Fail.";
    }
    return 0;
}