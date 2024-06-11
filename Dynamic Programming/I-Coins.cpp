//  ---(Question Link) AtCoder

#include<bits/stdc++.h>
using namespace std;

double dp[3008][3008];

double helper(vector<double>&v, int i, int x){
    if(x==0) return 1;
    if(i== -1) return 0;
    if(dp[i][x] > -0.8) return dp[i][x];
    return dp[i][x] = helper(v, i-1, x-1)*v[i] + helper(v, i-1, x)*(1-v[i]);
}

int main(){
    int n; 
    cin>>n;

    vector<double>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    memset(dp, -1, sizeof (dp));
    cout<<fixed<<setprecision(9)<<helper(v, n-1, (n+1)/2);
    return 0;
}