#include<bits/stdc++.h>
using namespace std;

void generate(string s, int opn, int cls, int n){
    if(cls==n && opn==n){
        cout<<s<<endl;
        return;
    }

    if(opn<n) generate(s+'(',opn+1,cls,n);
    if(opn>cls) generate(s+')',opn,cls+1,n);

}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    generate("",0,0,n);
    return 0;
}