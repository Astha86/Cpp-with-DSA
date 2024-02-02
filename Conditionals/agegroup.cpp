#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=12){
        cout<<"You are a child";
    }
    else if(age<18){
        cout<<"You are in teenage";
    }
    else{
        cout<<"Yor are adult";
    }
    return 0;
}
