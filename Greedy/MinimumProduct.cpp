// return the possible minimum product

#include<bits/stdc++.h>
using namespace std;

int minProduct(vector<int>& v){
    int cn = 0; // count -ve
    int pp = 1; //product +ve
    int pn = 1; //product -ve
    int ln = INT_MIN; // largest negative

    sort(v.begin(), v.end());
    int n = v.size();

    for(int i=0; i<n; i++){
        if(v[i]<0){
            cn++;
            pn *= v[i];
            ln = v[i];
        }
        if(v[i]>0) pp *= v[i];
    }

    if(v[0]==0) return 0;
    if(v[0]>0) return v[0];

    else{
        if(cn%2==1) return pp*pn;

        else return (pp*pn)/ln;
    }
}

int main(){
    vector<int> v{2, 4, -3 ,1, -2};
    cout<<minProduct(v);
    return 0;
}