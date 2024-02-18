#include<bits/stdc++.h>
using namespace std;

string solve(string a, string b, char ch){
    string ans = a+b+ch;
    return ans;
}

int prio(char ch){
    if(ch=='+'|| ch=='-') return 1;
    return 2; 
}

int main(){
    string s = "(7+9)*4/9-3";
    stack<string> val;
    stack<char> op;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }

        else if(op.size()==0 || s[i]=='(' || op.top()=='(') op.push(s[i]);

        else if(s[i]==')'){
            while(op.top()!='('){
                string v2 = val.top();
                val.pop();
                string v1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                string ans = solve(v1,v2,ch);
                val.push(ans);
            }
            op.pop();
        }

        else if(prio(s[i])>prio(op.top())) op.push(s[i]);

        else{
            while(op.size()>0 && prio(s[i])<=prio(op.top())){
                string v2 = val.top();
                val.pop();
                string v1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                string ans = solve(v1,v2,ch);
                val.push(ans);
            }
            op.push(s[i]);
        }
    }

    while(op.size()>0){
        string v2 = val.top();
        val.pop();
        string v1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        string ans = solve(v1,v2,ch);
        val.push(ans);
    }
    cout<<val.top();
    return 0;
}