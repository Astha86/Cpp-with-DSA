//  https://atcoder.jp/contests/dp/tasks/dp_l     ---------(Questions)

#include<bits/stdc++.h>
using namespace std;

int dp[3008][3008];
int arr[3008];

// DP- Top Down Approach
int TopD(int i, int j){
    if(i==j) return arr[i];
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = max(arr[i]-TopD(i+1, j), arr[j]-TopD(i, j-1));
}

// Bottom Down Approach (DP)
int BottomU(int n){
    memset(dp, 0, sizeof dp);

    // base case 
    for(int i=0; i<n; i++){
        dp[i][i] = arr[i];
    }

    for(int l=2; l<=n; l++){
        for(int i=0; i<=n-l; i++){
            int j = i+l-1;
            dp[i][j] = max(arr[i] - dp[i+1][j], arr[j]-dp[i][j-1]);
        }
    }
    return dp[0][n-1];
}

int main(){
    int n;
    cin>>n;

    for(int i=0;  i<n; i++){
        cin>>arr[i];
    }

    memset(dp, -1, sizeof dp);
    cout<<TopD(0, n-1)<<" "<<BottomU(n)<<endl;

    return 0;
}