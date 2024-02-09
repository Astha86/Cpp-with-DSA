#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    int n; 
    cout<<"Enter the size of the string: ";
    cin>>n;
    cout<<"Enter the string: ";
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    string f = v[0];
    string l = v[n-1];
    string s = "";
    for(int i=0; i<(min(f.size(),l.size())); i++){
        if(f[i]==l[i])  s.push_back(f[i]);
        else break;
    }

    cout<<s;
    return 0;
}