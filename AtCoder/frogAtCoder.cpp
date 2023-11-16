#include <bits/stdc++.h>

using namespace std;

//Solution made by: gusss_tt0 using CPCFI page compiler :D

void solve()
{
	// Add your solution here
	int n; cin>>n;
	vector<int> h(n);
	for(int i=0; i<n;i++){
		cin>>h[i];
	}
	vector<int> dp(n,INT_MAX);
	dp[0] = 0;

	for(int i=0; i<n-1; i++){
		dp[i+1] = min(dp[i+1],dp[i]+abs(h[i]-h[i+1]));

		if(i+2 < n){
			dp[i+2] = min(dp[i+2],dp[i]+abs(h[i]-h[i+2]));
		}
	}

	cout<<dp[n-1]<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int tc = 1;
	// cin >> tc;
	for (int t = 1; t <= tc; t++)
	{
		// cout << "Case #" << t << ": ";
		solve();
	}
}