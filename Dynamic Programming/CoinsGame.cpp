// www.spoj.com/problems/MCOINS/  (Question Link)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,l;
    cin>>k>>l;
    vector<bool> dp(1000001, 0);

    // Pre computation of state

    dp[1] = 1;
    dp[k] = 1;
    dp[l] = 1;
    
    for(long long i=2; i<=1000001; i++){
        if(i==k || i==l) continue;
        dp[i] = !(dp[i-1] && ((i-k<1)? 1: dp[i-k]) && ((i-l<1)? 1: dp[i-l]));
    }

    int m;
    cin>>m;

    for(int i=0; i<m; i++){
        int n;
        cin>>n;

        if(dp[n]) cout<<"A";
        else cout<<"B";
    }
    return 0;
}