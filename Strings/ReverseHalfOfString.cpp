#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int n = s.size();
    n /= 2;
    reverse(s.begin(),s.begin()+n);
    cout<<s;
    return 0;
}