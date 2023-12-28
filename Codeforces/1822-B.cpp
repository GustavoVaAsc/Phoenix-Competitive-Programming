#include <bits/stdc++.h>
 
using namespace std;
 
//PURO PINCHE COMPILADOR DEL CPCFI A LA VERGA COMPAAAA
 
void solve(){
	int n; cin>>n;
	vector<long long> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
 
	sort(a.begin(),a.end());
 
	cout<<max(a[0]*a[1],a[n-1]*a[n-2])<<endl;
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