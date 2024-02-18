#include<bits/stdc++.h>
using namespace std;

void sort01(vector<int>& a){
    int n0 = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0) n0++; 
    }

    for(int i=0;i<a.size();i++){
        if(i<n0) a[i] = 0; 
        else a[i] = 1;
    }
}

int main(){
    vector<int> v;

    int s;
    cout<<"Enter the size: ";
    cin>>s;

    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }   
    
    sort01(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    return 0;
}