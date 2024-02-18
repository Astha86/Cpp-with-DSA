#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<char> v;
    cout<<"Enter the string: ";
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]>='X') v.push_back(s[i]);
    }
    for(int i=0; i<v.size()-1; i++){
        //bool flag = true;
        for(int j=0; j<v.size()-1-i; j++){
            if(v[j] < v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                //bool flag = false;
            }
        }
        //if (flag==true) break;
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}