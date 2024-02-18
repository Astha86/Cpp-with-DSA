#include<bits/stdc++.h>
using namespace std;

int solve (int a, int b, char ch){
    if(ch=='+') return a+b;
    else if(ch=='-') return a-b;
    else if(ch=='*') return a*b;
    else return a/b;
}

int main(){
    string s = "-/*+79483";
    stack<int> val;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }

        else{
            int v1 = val.top();
            val.pop();
            int v2 = val.top();
            val.pop();
            char ch = s[i];
            int ans = solve(v1,v2,ch);
            val.push(ans);
        }
    }

    cout<<val.top()<<endl;
    return 0;
}