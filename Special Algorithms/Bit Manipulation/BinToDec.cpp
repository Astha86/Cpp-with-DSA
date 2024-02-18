#include<bits/stdc++.h>
using namespace std;

int BTD(string &bin){
    int n = bin.size();
    int result = 0;
    for(int i=0; i<n; i++){
        char ch = bin[i];
        int num = ch - '0';
        result += (num*(1<<(n-i-1)));
    }
    return result;
}

string DTB(int num){
    string ans = "";
    while(num>0){
        if(num%2 == 0){
            ans = '0' + ans;
        }
        else{
            ans = '1' + ans;
        }
        num = num>>1;
    }
}

int main(){
    string s = "001011";
    cout<<"Binary to dec: "<<BTD(s);
    int n = 12;
    cout<<"Decimal to bin: "<<DTB(n);
    return 0;
}