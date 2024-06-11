// https://codeforces.com/contest/540/problem/D     ----(Question)

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

ld dp[108][108][108];

ld rock(int r, int s, int p){
    if(r==0 || s==0) return 0.0;
    if(p==0) return 1.0;
    if(dp[r][s][p] > -0.8) return dp[r][s][p];

    ld total = r*s + s*p + r*p;
    ld ans = 0.0;
    ans += rock(r,s-1,p) * ((r*s)/total);
    ans += rock(r-1,s,p) * ((r*p)/total);
    ans += rock(r,s,p-1) * ((s*p)/total);

    return dp[r][s][p] = ans;
}

ld scissor(int r, int s, int p){
    if(p==0 || s==0) return 0.0;
    if(r==0) return 1.0;
    if(dp[r][s][p] > -0.8) return dp[r][s][p];

    ld total = r*s + s*p + r*p;
    ld ans = 0.0;
    ans += scissor(r,s-1,p) * ((r*s)/total);
    ans += scissor(r-1,s,p) * ((r*p)/total);
    ans += scissor(r,s,p-1) * ((s*p)/total);

    return dp[r][s][p] = ans;
}

ld paper(int r, int s, int p){
    if(r==0 || p==0) return 0.0;
    if(s==0) return 1.0;
    if(dp[r][s][p] > -0.8) return dp[r][s][p];

    ld total = r*s + s*p + r*p;
    ld ans = 0.0;
    ans += paper(r,s-1,p) * ((r*s)/total);
    ans += paper(r-1,s,p) * ((r*p)/total);
    ans += paper(r,s,p-1) * ((s*p)/total);

    return dp[r][s][p] = ans;
}

int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int r,s,p;
    cin>>r>>s>>p;

    memset(dp, -1.0, sizeof(dp));
    cout<<fixed<<setprecision(9)<<rock(r,s,p)<<" ";
    memset(dp, -1.0, sizeof(dp));
    cout<<fixed<<setprecision(9)<<scissor(r,s,p)<<" ";
    memset(dp, -1.0, sizeof(dp));
    cout<<fixed<<setprecision(9)<<paper(r,s,p)<<endl;
    return 0;
}

