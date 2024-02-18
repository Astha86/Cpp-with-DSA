#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& a){
    int n = a.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(a[i]>0) i++;
        if(a[j]<0) j--;
        if(i>j) break;
        if(a[i]<0 && a[j]>0){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
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
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "; 
    }
    return 0;
}