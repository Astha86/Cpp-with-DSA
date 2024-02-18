#include<iostream>
using namespace std;

bool Palindrome(string str, int i, int j){
    if(i>j) return true;
    if(str[i] != str[j]) return false;
    else return Palindrome(str,i+1,j-1);
}

int main(){
    string s = "racecar";
    cout<<Palindrome(s,0,s.size()-1);
    return 0;
}