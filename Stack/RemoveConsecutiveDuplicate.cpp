#include<bits/stdc++.h>
using namespace std;

void Display(stack<char>& st){
    if(st.size() == 0) return;
    char x = st.top();
    st.pop();
    Display(st);
    st.push(x);
    cout<<x<<" ";
}

void create(string s){
    int n = s.size();
    stack<char>st;
    st.push(s[0]);
    for(int i=1; i<n; i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
   Display(st);
}

int main(){
    string s = "aaabbcddaabffg";
    create(s);
    return 0;
}