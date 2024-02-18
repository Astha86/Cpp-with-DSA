#include<bits/stdc++.h>
using namespace std;

void Display(stack<int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    Display(st);
    st.push(x);
    cout<<x<<" ";
}

void DisplayRev(stack<int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    DisplayRev(st);
    st.push(x);
}

void PushAtBottom(stack<int>& st, int a){
    if(st.size() == 0){
        st.push(a);
        return;
    }
    int x = st.top();
    st.pop();
    PushAtBottom(st,a);
    st.push(x);
}

void reverse(stack<int>&st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    PushAtBottom(st,x);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    DisplayRev(st);
    cout<<endl;
    reverse(st);
    Display(st);
    cout<<endl;

    return 0;
}