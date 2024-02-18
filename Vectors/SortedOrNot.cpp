#include<bits/stdc++.h>
using namespace std;

void sorted(vector<int>& a){
    bool flag = false;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]<=a[i+1]){
            flag = true;
        }
        else{
            cout<<"Vector is not sorted.";
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Vector is sorted";
}

int main(){
    vector<int> v;
    int s;
    cout<<"Enter the size: ";
    cin>>s;
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sorted(v);
    return 0;
}