#include<bits/stdc++.h>
using namespace std;

void update(string ans, string org, int i){
    if(org.length()==i){
        cout<<ans;
        return;
    }
    char ch = org[i];
    if(ch =='a') update(ans,org,i+1);
    else update(ans+ch,org,i+1);
}

int main(){

    string s = "Astha Sahani";

    update("",s,0);
}