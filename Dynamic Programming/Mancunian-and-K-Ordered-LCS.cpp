// https://www.hackerearth.com/problem/algorithm/mancunian-and-k-ordered-lcs-e6a4b8c6/      ------(Question)

#include<bits/stdc++.h>
using namespace std;

long long dp[2008][2008][8];
int n,m;
vector<int>a;
vector<int>b;

int helper(int i, int j, int k){
    if(n==i || m==j) return 0;
    if(dp[i][j][k] != -1) return dp[i][j][k];

    int ans = 0;
    if(a[i]==b[j]) ans = 1+helper(i+1,j+1,k);

    else {
        if(k>0) ans = 1+helper(i+1,j+1,k-1);
        ans = max(ans,helper(i+1,j,k));
        ans = max(ans,helper(i,j+1,k));
    }

    dp[i][j][k] = ans;
    return ans;
}

int main(){
    int k;
    cin>>n>>m>>k;

    a.resize(n);
    b.resize(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    memset(dp, -1, sizeof(dp));
    cout<<helper(0,0,k);
    return 0;
}