#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    stringstream s(str);
    string temp;

    vector<string> v;
    while(s>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int c = 1;
    int maxc = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i-1]==v[i]) c++;
        else c = 1;
        maxc = max(maxc,c);
    }
    
    c = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i-1]==v[i]) c++;
        else c = 1;
        if(c==maxc){
            cout<<v[i]<<" - "<<maxc<<endl;
        }
    }
}