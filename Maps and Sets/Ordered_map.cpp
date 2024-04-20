#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int>m;
    m[2] = 30;
    m[1] = 20;
    m[3] = 10;
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    //  In map sorting is based on key
    return 0;
}