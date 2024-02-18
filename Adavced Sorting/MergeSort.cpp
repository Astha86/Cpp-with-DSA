#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& c){
    int i=0,j=0,k=0; 
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
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
}

void divide(vector<int>& v){

    int n = v.size();
    if(n == 1) return;
    
    int n1 = n/2;
    int n2 = n - n1;

    vector<int> a(n1);
    vector<int> b(n2);

    for(int i=0; i<n1; i++){
        a[i] = v[i];
    }

    for(int i=0; i<n2; i++){
        b[i] = v[i+n1];
    }

    divide(a);
    divide(b);

    merge(a,b,v);
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    divide(v);

    cout<<"The Merge Sorted Vector: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "; 
    }
    return 0;
}