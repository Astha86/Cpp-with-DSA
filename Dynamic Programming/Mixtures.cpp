// https://www.spoj.com/problems/MIXTURES/     ---(Question Link)

#include<bits/stdc++.h>
using namespace std;

int dp[101][101];

int newColor(vector<int> &colors, int i, int j){
    int result = 0;
    for(int k=i; k<=j; k++){
        result = (result%100 + colors[k]%100) %100;
    }
    return result;
}

int TopD(vector<int> &colors, int i, int j){
    if(i==j) return dp[i][j] = 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i; k<=j-1; k++){
        ans = min(ans, TopD(colors, i, k)+ TopD(colors, k+1, j) + newColor(colors,i,k)*newColor(colors,k+1,j) );
    }
    return dp[i][j] = ans;
}

int BottomU(vector<int> &colors){
    memset(dp, 0, sizeof dp);
    int n = colors.size();
    for(int l=2; l<=n; l++){
        for(int i=0; i<=n-l; i++){
            int j = i+l-1;
            int ans = INT_MAX;
            for(int k=i; k<=j-1; k++){
                ans = min(ans, dp[i][k]+ dp[k+1][j] + newColor(colors,i,k)*newColor(colors,k+1,j) );
            }
            dp[i][j] = ans;
        }
    }
    return dp[0][n-1];
}

int main(){
    int n;
    while(cin>>n){
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        memset(dp, -1, sizeof dp);
        cout<<"Ans: "<<TopD(v,0,n-1)<<" "<<BottomU(v)<<endl;

        v.clear();
    }

    return 0;
}