#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    stringstream s(str);
    string temp;
    while(s>>temp){
        cout<<temp<<endl;
    }
}
