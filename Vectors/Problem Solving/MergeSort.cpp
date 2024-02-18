#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>& a, vector<int>& b){
    vector<int> c(a.size()+b.size());
    int i=0,j=0,k=0; 
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    // the remaining fill
    if(i==a.size())
    {
        while(j<b.size()){
            c[k] = b[j];
            j++;
            k++;
        }
    }

    if(j==b.size())
    {
        while(i<a.size()){
            c[k] = a[i];
            i++;
            k++;
        }
    }
    return c;
}

int main(){
    vector<int> v1;
    int s;
    cout<<"Enter the size of first vector: ";
    cin>>s;

    cout<<"Enter the elements of the first vector: ";
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }

    vector<int> v2;
    int s2;
    cout<<"Enter the size of second vector: ";
    cin>>s2;
    cout<<"Enter the elements of the second vector: ";
    for(int i=0;i<s2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    } 
    vector<int> v = merge(v1,v2);
    cout<<"The Merge Sorted Vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    return 0;
}