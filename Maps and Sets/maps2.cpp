// 2nd method of insertion (Best Method)

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    
    mp["Shiva"] = 12;
    mp["Ram"] = 22;
    mp["Krishna"] = 21;

    // print
    for(auto x: mp){ 
        cout<<x.first<<" - "<<x.second<<endl;
    }
    cout<<mp.size()<<endl;
    cout<<endl;

    // deletion can be done with the use of key
    mp.erase("Krishna");

    for(auto x: mp){ 
        cout<<x.first<<" - "<<x.second<<endl;
    }
    cout<<mp.size()<<endl;
    return 0;
}