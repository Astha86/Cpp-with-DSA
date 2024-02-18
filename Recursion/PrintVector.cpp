#include<bits/stdc++.h>
using namespace std;

void display(int x, vector<int> &v){
    if(x==v.size()) return ;
    cout<<v[x]<<" ";
    display(x+1,v);
}

int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    display(0,v); 
}