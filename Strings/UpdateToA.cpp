#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the string: ";
    cin>> n;
    string s;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    cout<<s;

    for(int i=0; i<n; i++){
        if(i%2==0){
            s[i] = 'a';
        }
    }

    cout<<s;
    return 0;
}