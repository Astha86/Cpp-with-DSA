#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void reverse(int a, int b, vector<int>& v){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
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

    int i;
    cout<<"Enter starting index : ";
    cin>>i;
    int j;
    cout<<"Enter ending index : ";
    cin>>j;
    cout<<"The Reverse of the vector: ";
    reverse(i,j,v);
    return 0;
}