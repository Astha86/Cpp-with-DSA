#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

void sqrnat(int x){
    for(int i=1;i<=x;i++){
        cout<<i<<" = "<<square(i)<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    sqrnat(n);
    return 0;
}