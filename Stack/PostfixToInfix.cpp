#include<bits/stdc++.h>
using namespace std;

string solve (string a, string b, char ch){
    string s = a+ch+b;
    return s;
}

int main(){
    string s = "79+4*8/3-";
    stack<string> val;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }

        else{
            string v2 = val.top();
            val.pop();
            string v1 = val.top();
            val.pop();
            char ch = s[i];
            string ans = solve(v1,v2,ch);
            val.push(ans);
        }
    }

    cout<<val.top();
    return 0;
}