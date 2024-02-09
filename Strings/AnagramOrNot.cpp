#include<bits/stdc++.h>
using namespace std;
int main(){
    // Basically "Anagram" is the word that is permutation of the first string or simply can says 
    // that both strings contain same no. and same elements doesn't matter their place (zumble Words)
    string s;
    cout<<"Enter the 1st string: ";
    cin>>s;
    sort(s.begin(),s.end());

    string t;
    cout<<"Enter the 2nd string: ";
    cin>>t;
    sort(t.begin(),t.end());

    if(s==t) cout<<"YES, It is an anagram";
    else cout<<"NO, It's not an anagram";
    return 0;
}