#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "123456";  //it's not a number it's a string
    int x = stoi(s); //Conversion of string into a number
    cout<<x+2<<endl;
    string str = to_string(x); //Conversion of number into a string
    cout<<str<<endl; 

    string str2 = "173529572544875672";
    long long l = stoll(str2) ;
    cout<<l;
    return 0;
}