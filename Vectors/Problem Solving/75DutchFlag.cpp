#include<bits/stdc++.h>
using namespace std;

void df(vector<int>& a){
    int h = a.size()-1;
    int l = 0;
    int m = 0;
    while(m<=h){
        if(a[m]==2){
            int temp = a[m];
            a[m] = a[h];
            a[h] = temp;
            h--;
        } 
        else if(a[m]==0){
            int temp = a[m];
            a[m] = a[l];
            a[l] = temp;
            l++;
            m++;
        }
        else m++;
    }
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
    df(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    return 0;
}