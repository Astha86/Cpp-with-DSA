#include<bits/stdc++.h>
using namespace std;

bool verify(string s){
    int n = s.size();
    if(n%2 != 0) return false;
    stack<char>st;
    for(int i=0; i<n; i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            st.pop();
        }
    }
    if(st.size() == 0) return true;
    return false;
}

int main(){
    string s = ")()(";
    cout<<verify(s);
    return 0;
}