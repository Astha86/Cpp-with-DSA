#include<iostream>
using namespace std;

int ways(int i){
    if(i==1) return 1;
    if(i==2) return 2;
    return ways(i-1) + ways(i-2);
}

int main(){
    int n;
    cout<<"Enter the no. of stair : ";
    cin>>n;
    cout<<ways(n);
    return 0;
}