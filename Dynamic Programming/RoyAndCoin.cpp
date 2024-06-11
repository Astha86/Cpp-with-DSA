// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/roy-and-coin-boxes-1/   
//  (Question Link)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
	cin>>n>>m;
	vector<int>l(n+1,0);
	vector<int>r(n+1,0);

	for(int i=0; i<m; i++){
		int L,R;
		cin>>L>>R;
		l[L]++;
		r[R]++;
	}

	vector<int>dp(n+1,0);
	// Base case
	dp[1] = l[1];
	// filling the no. of coins at ith box
	for(int i=2; i<=n; i++){
		dp[i] = l[i] + dp[i-1] - r[i-1];
	}

	// no. of boxes that contains ith coins
	vector<int> c(n+1,0);
	for(int i=0; i<=n; i++){
		int coins = dp[i];
		c[coins]++;
	}

	// no. of boxes have atleast ith coin
	for(int i=c.size()-2; i>0; i--){
		c[i] += c[i+1];
	}

	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<c[x]<<endl;
	}
    return 0;
}



// 2nd method

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
	cin>>n>>m;
	vector<int>dp(n+10,0);

	for(int i=0; i<m; i++){
		int l,r;
		cin>>l>>r;
		dp[l]++;
		dp[r+1]--;
	}

	// prefix sum
	for(int i=1; i<dp.size(); i++){
		dp[i] = dp[i] + dp[i-1];
	}

	// no. of boxes that contains ith coins
	vector<int> c(n+1,0);
	for(int i=0; i<=n; i++){
		int coins = dp[i];
		c[coins]++;
	}

	// no. of boxes have atleast ith coin
	for(int i=c.size()-2; i>0; i--){
		c[i] += c[i+1];
	}

	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<c[x]<<endl;
	}
    return 0;
}