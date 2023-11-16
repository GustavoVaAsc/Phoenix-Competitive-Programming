#include <bits/stdc++.h>
 
using namespace std;

//Geometry
// Solved by: gus_tt0 with the CPCFI Page compiler :D
 
void solve()
{
	int t; cin>>t;
	for (int i=0; i<t; i++){
		int ans; cin>>ans;
		if((360%(180-ans)) == 0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
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