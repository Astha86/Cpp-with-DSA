#include<iostream>
using namespace std;

void print(int i){
    if(i==0) return;
    //print(i-1); sidha kaam krne k liye call pehle 
    cout<<i<<endl;
    print(i-1);
    return;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
    return 0;
}