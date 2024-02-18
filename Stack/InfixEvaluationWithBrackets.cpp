#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b, char ch){
    if(ch=='+') return a+b;
    else if(ch=='-') return a-b;
    else if(ch=='*') return a*b;
    else return a/b;
}

int prio(char ch){
    if(ch=='+'|| ch=='-') return 1;
    return 2; 
}

int main(){
    string s = "1+(2+6)*4/8-3"; 
    stack<int> val;
    stack<char> op;

    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }

        else if(op.size()==0 || s[i]=='(' || op.top()=='(') op.push(s[i]);

        else if(s[i]==')'){
            while(op.top()!='('){
                int v2 = val.top();
                val.pop();
                int v1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                int ans = solve(v1,v2,ch);
                val.push(ans);
            }
            op.pop();
        }

        else if(prio(s[i])>prio(op.top())) op.push(s[i]);

        else{
            while(op.size()>0 && prio(s[i])<=prio(op.top())){
                int v2 = val.top();
                val.pop();
                int v1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                int ans = solve(v1,v2,ch);
                val.push(ans);
            }
            op.push(s[i]);
        }

    }

    while(op.size()>0){
        int v2 = val.top();
        val.pop();
        int v1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        int ans = solve(v1,v2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<1+(2+6)*4/8-3;
    return 0;
}