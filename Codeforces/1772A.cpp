#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    string s; cin>>s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    
    cout<<a+b<<endl;
}
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 1; t <= tc; t++)
	{
		// cout << "Case #" << t << ": ";
		solve();
	}
}