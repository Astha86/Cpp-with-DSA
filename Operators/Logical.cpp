#include<iostream>
using namespace std;
int main(){
    bool exp1= true;
    bool exp2= false;
    cout<<(exp1&&exp2)<<endl;
    cout<<(exp1||exp2)<<endl;
    cout<<(!exp2)<<endl; // !-it gives false when true & gives true when false 
    return 0;
}