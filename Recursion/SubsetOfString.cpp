#include<bits/stdc++.h>
using namespace std;

void subString(string ans, string org){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
    char ch = org[0];
    subString(ans,org.substr(1));
    subString(ans+ch,org.substr(1));
}

int main(){

    string s = "abc";

    subString("",s);
}