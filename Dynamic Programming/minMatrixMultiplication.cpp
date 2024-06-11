// https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/    ----(Question)

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int recursive(int i, int j, vector<int> &arr){
    if(i==j || i==j-1) return 0;

    int ans = INT_MAX;
    for(int k=i+1; k<j; k++){
        ans = min(ans, (recursive(i,k,arr) + recursive(k,j,arr) + arr[i]*arr[k]*arr[j]));
    }
    return ans;
}

int TopD(int i, int j, vector<int> &arr){
    if(i==j || i==j-1) return 0;
    if(dp[i][j] != -1) dp[i][j];

    int ans = INT_MAX;
    for(int k=i+1; k<j; k++){
        ans = min(ans, (TopD(i,k,arr) + TopD(k,j,arr) + arr[i]*arr[k]*arr[j]));
    }

    dp[i][j] = ans;
    return dp[i][j];
}

// ---------(Something Wrong)--------

// int BottomU(int n, vector<int> &arr){
//     for(int l=3; l<=n; l++){
//         for(int i=0; i+l-1<n; i++){
//             int j = i+l-1;
//             dp[i][j] = INT_MAX;
//             for(int k=i+l; k<j; k++){
//                 dp[i][j] = min(dp[i][j], (dp[i][k] + dp[k][j] + arr[i]*arr[k]*arr[j]));
//             }
//         }
//     }
//     return dp[1][n-1];
// }

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    dp.resize(1008, vector<int>(1008,-1));

    cout<<"Recursive ans: "<<recursive(0, n-1, v)<<endl;
    cout<<"Top Down(DP): "<<TopD(0, n-1, v)<<endl;
    // cout<<"Bottom Up(DP): "<<BottomU(n,v)<<endl;

    return 0;
}