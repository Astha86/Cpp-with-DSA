//Given an integer n , find the maximum power of two that is smaller than n
#include<iostream>
using namespace std;

int max_power(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return (n+1)>>1;
}

int main(){

    int x = 90;
    int temp;
    while(x>0){
        temp = x;
        x = x & (x-1);
    }
    cout<<temp<<"\n";
    cout<<max_power(90)<<"\n";
    return 0;
}