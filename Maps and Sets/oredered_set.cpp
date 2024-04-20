#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(4);
    s.insert(-2);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    // Doesn't matter it in which manner elements are insered , while printing elements print in sorted form
    for(int x: s){
        cout<<x<<" ";
    }
    return 0;
}