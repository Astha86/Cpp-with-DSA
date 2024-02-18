#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(9);
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(4);
    v.push_back(9);
    v.push_back(3);
    int x;
    cout<<"Enter the key: ";
    cin>>x;
    int idx = -1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x) {
            idx = i;
            break;
        }
    }
    cout<<idx;
    return 0;
}