/*
    Operations: 
    
    1. Subtract 1 from the number
    2. If number is divisible by 2 then perform n/2
    3. If number is divisible by 3 then perform n/3

    Question Link: https://www.geeksforgeeks.org/minimum-steps-minimize-n-per-given-condition/
           
*/

#include<bits/stdc++.h>
using namespace std;
#define maxi INT_MAX

vector<int>dp;

// Recursive Method
int recursive(int n){
    if(n==1) return 0;
    else if(n==2 || n==3) return 1;
    return 1+min({recursive(n-1),(n%2==0)?recursive(n/2):maxi,(n%3==0)?recursive(n/3):maxi});
}

// DP- Top Down Approach
int TopD(int n){
    if(n==1) return 0;
    else if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1+min({TopD(n-1),(n%2==0)?TopD(n/2):maxi,(n%3==0)?TopD(n/3):maxi});
}

// Bottom Down Approach (DP)
int BottomU(int n){
    dp.resize(n+1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i=4; i<=n; i++){
        dp[i] = 1+min({dp[i-1],(i%2==0)?dp[i/2]:maxi,(i%3==0)?dp[i/3]:maxi});
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    dp.resize(n+1,-1);
    // cout<< recursive(n);
    cout<<TopD(n)<<" "<<BottomU(n);
    
}
