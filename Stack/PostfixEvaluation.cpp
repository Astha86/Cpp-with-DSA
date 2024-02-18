#include<bits/stdc++.h>
using namespace std;

int solve (int a, int b, char ch){
    if(ch=='+') return a+b;
    else if(ch=='-') return a-b;
    else if(ch=='*') return a*b;
    else return a/b;
}

int main(){
    string s = "79+4*8/3-";
    stack<int> val;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }

        else{
            int v2 = val.top();
            val.pop();
            int v1 = val.top();
            val.pop();
            char ch = s[i];
            int ans = solve(v1,v2,ch);
            val.push(ans);
        }
    }

    cout<<val.top();
    return 0;
}