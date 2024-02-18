#include<iostream>
using namespace std;
int countBits(int n) {
    int count = 0;
    while(n>0){
        count++;
        n = (n &(n-1));
    }
    return count;
}

int main(){
    cout<<countBits(56);
    return 0;
}