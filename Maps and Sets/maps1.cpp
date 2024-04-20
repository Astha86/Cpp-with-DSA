// 1st method of insertion

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    pair<string,int> p1;
    p1.first = "Ram";
    p1.second = 22;
    pair<string,int> p2;
    p2.first = "Krishna";
    p2.second = 21;
    pair<string,int> p3;
    p3.first = "Shiva";
    p3.second = 12;

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    // we can print the pair elements with the halp of for ecah loop 


    // for(pair<string,int> x: mp)
    for(auto x: mp){  // auto(it automatically detect the type)
        cout<<x.first<<" - "<<x.second<<endl;
    }
    return 0;
}