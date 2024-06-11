// https://www.spoj.com/problems/MPILOT/     -----(Questions)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[10008][5008];
vector<ll> c(10008,0);
vector<ll> a(10008,0);

int n;

// i = the iteration on the array
// x = assistance - captain 

ll helper(int i, int x){
    if(dp[i][x] != -1) return dp[i][x];
    if(i==n) return 0;

    if(x==0) return dp[i][x] = helper(i+1, x+1) + a[i];

    else if(x==n-i) return dp[i][x] = helper(i+1, x-1) + c[i]; 

    else return dp[i][x] = min(helper(i+1, x+1) + a[i], helper(i+1, x-1) + c[i]);
}

int main(){

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>c[i]>>a[i];
    }

    memset(dp, -1, sizeof(dp));
	dp[0][0] = a[0] + helper(1, 1);
	cout<<dp[0][0];
    
    return 0;
}