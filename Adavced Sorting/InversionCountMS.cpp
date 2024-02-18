//Time complexity = o(nlogn)

#include<bits/stdc++.h>
using namespace std;
int c = 0;
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

int inversion(vector<int>& a, vector<int>& b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
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

    //adding the counted inversion via calling the function
    c += inversion(a,b);

    merge(a,b,v);
    a.clear();
    b.clear();
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
    cout<<c;
    return 0;
}