#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    int n; 
    cout<<"Enter the size of the string: ";
    cin>>n;
    cout<<"Enter the string: ";
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }

    int idx = -1;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        int x = stoi(v[i]);
        if(max<x){
            max = x;
            idx = i;
        }
    }

    cout<<"That string which have maximum value: "<<max<<endl;
    cout<<"It's index : "<<idx;
    return 0;
}