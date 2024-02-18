#include<bits/stdc++.h>
using namespace std;

void SubSet(string ans, string org, bool flag, vector<string>& v){
    if(org==""){
        v.push_back(ans);
        return;
    }
    char ch = org[0];
    // if(org.size()==1){
    //     if(flag==true)SubSet(ans+ch,org.substr(1),true,v);
    //     SubSet(ans,org.substr(1),true,v);
    //     return ;
    // }

    char dh = org[1];
    if(ch==dh){ //duplicate
        if(flag==true)SubSet(ans+ch,org.substr(1),true,v);
        SubSet(ans,org.substr(1),false,v);
    }

    else{ //no duplicte
        if(flag==true)SubSet(ans+ch,org.substr(1),true,v);
        SubSet(ans,org.substr(1),true,v);
    }
    
    
}

int main(){
    string s = "aaab";
    vector<string> v;
    SubSet("",s,true,v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}