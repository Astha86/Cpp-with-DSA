#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

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
    cout<<"The Reverse of the array: ";
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
    return 0;
}