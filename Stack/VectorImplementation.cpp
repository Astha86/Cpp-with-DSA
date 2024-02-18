#include<bits/stdc++.h>
using namespace std;

class Stack{
public: 
    vector<int> v;

    void push(int val){
        v.push_back(val);
        return;
    }

    void pop(){
        if(v.size()==0){
            cout<<"Stack Underflow!!\n";
        }
        else{
            v.pop_back();
        }
        return;
    }

    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty!!\n";
            return -1;
        }
        return v[v.size()-1];
    }

    int size(){
        return v.size();
    }

    void display(){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        return;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.display();
    return 0;
}