#include<iostream>
#include<vector>
using namespace std;
    void big(int n,vector<int>& a){
        int count = 0;
        for(int i=0;i<a.size();i++){
            if(a[i]>n) count++;
        }
        cout<<"There are "<<count<<" elements which are greater than "<<n;
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
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        big(n,v);
    return 0;
}
