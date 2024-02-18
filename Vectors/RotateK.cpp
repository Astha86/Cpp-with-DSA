#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

// void reverse(int a, int b, vector<int>& v){
//     for(int i=a,j=b;i<=j;i++,j--){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//     }
//}

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

    int k;
    cout<<"Enter the no. of rotation: ";
    cin>>k;
    if(k>v.size()) k = k%v.size();
    cout<<"The vector after rotation: ";
    // reverse(0,v.size()-1-k,v);
    // reverse(v.size()-k,v.size()-1,v);
    // reverse(0,v.size()-1,v);
    for(int i=0;i<k;i++){
        int x;
        x = v[v.size()-1];
        for(int i=v.size()-1;i>0;i--){
            v[i] = v[i-1];
        }
        v[0] = x;
    }
    display(v);
    return 0;
}