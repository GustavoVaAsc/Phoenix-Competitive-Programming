#include <bits/stdc++.h>

using namespace std;

int gcdExtended(int a, int b, int* x, int* y)
{
 
    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
 
    // To store results of recursive call
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}

void modInverse(int A, int M)
{
    int x, y;
    int g = gcdExtended(A, M, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else {
 
        // m is added to handle negative x
        int res = (x % M + M) % M;
        cout << "Modular multiplicative inverse is " << res;
    }
}
 

void solve()
{
	// Add your solution here
	int n; cin>>n;
	vector<long long> dp(n+1);
	dp[0] = 1;
	//Fill DP
	for(int i=1; i<=n; i++){
		for(int j = 1; j<=6; j++){
			if(i-j >=0){
				dp[i] += dp[i-j];
			}
			dp[i]%=1000000007;
		}
	}
	cout<<dp[n]<<endl;
	
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