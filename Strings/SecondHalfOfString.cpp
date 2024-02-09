#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int n = s.size();
    cout<<s.substr(n/2);
    return 0;
}