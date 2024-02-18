#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int s;
    cout<<"Enter the size: ";
    cin>>s;
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<s-1;i++){
        for(int j=i+1;j<s;j++){
            if(v[i]+v[j]==n) cout<<i<<","<<j<<endl;
        }
    }
    return 0;
}