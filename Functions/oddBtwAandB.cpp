#include<iostream>
using namespace std;
void odd(int x,int y){
    for(int i=x;i<=y;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    odd(a,b);
    return 0;
}

