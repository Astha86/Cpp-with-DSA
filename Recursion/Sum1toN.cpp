#include<iostream>
using namespace std;
void sum(int ans,int i){
    if(i==0){
        cout<<ans<<endl;
        return ;
    }
    sum(ans+i,i-1);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    sum(0,n);
    return 0;
}