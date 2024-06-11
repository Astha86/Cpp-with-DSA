/*

    Ques Link- https://www.geeksforgeeks.org/cses-solutions-removing-digits/

    Operations: Subtract one of the digit from the number
           
*/

#include<bits/stdc++.h>
using namespace std;
#define maxi INT_MAX

vector<int> getDigits(int n){
    vector<int>v;
    while(n>0){
        if(n%10!=0) v.push_back(n%10);
        n /= 10;
    }
    return v;
}

vector<int>dp;

// DP- Top Down Approach
int TopD(int n){
    if(n==0) return 0;
    else if(n<10) return 1;
    if(dp[n] != -1) return dp[n];
    vector<int> d = getDigits(n);

    int result = INT_MAX;
    for(int i=0; i<d.size(); i++){
        result = min(result, TopD(n-d[i]));
    }

    return dp[n] = 1+result;
}

// Bottom Down Approach (DP)
int BottomU(int n){
    dp[0] = 0;
    for(int i=1; i<10; i++) dp[i] = 1;
    for(int i=10; i<=n; i++){
        vector<int> d = getDigits(i);
        int result = INT_MAX;
        for(int j=0; j<d.size(); j++){
            result = min(result, dp[i- d[j]]);
        }
        dp[i] = 1+result;
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    dp.resize(n+1,-1);
    cout<<TopD(n)<<" "<<BottomU(n);
    return 0;
}
