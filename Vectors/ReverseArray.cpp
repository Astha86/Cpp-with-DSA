#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void reverse(vector<int>& a, vector<int>& b){
    for(int i=0;i<a.size();i++){
        int j = a.size()-1-i;
        b[i] = a[j];
    }
    display(b);
}

int main(){
    vector<int> v1;
    int s;
    cout<<"Enter the size: ";
    cin>>s;
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int> v2(v1.size());
    cout<<"The Reverse of the array: ";
    reverse(v1,v2);
    return 0;
}