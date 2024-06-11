// https://cses.fi/problemset/task/1633/ - Question link

#include<bits/stdc++.h>
using namespace std;

vector<int> dp;

int recursive(int n){
    if(n==0) return 1;
    int sum = 0;
    for(int i=1; i<=6; i++){
        if(n-i<0) break;
        sum+= recursive(n-i);
    }
    return sum;
}

int TopD(int n){
    if(n==0) return 1;
    else if(dp[n] != -1) return dp[n];
    int sum = 0;
    for(int i=1; i<=6; i++){
        if(n-i<0) break;
        sum += recursive(n-i);
    }
    return dp[n] = sum;
}

int BottomU(int n){
    if(n==0) return 1;
    for(int k=1; k<=n; k++){
        int sum = 0;
        for(int i=1; i<=6; i++){
            if(k-i<0) break;
            sum += dp[k-i];
        }
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    dp.resize(n+1,-1);
    cout<<recursive(n)<<endl;
    cout<<TopD(n)<<endl;
    cout<<BottomU(n)<<endl;
    return 0;
}