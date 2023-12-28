#include <bits/stdc++.h>
 
using namespace std;
 
//Code made by gus_tt0 with the CPCFI page compiler
 
void solve(){
	vector<int> indices;
	string  a;
	string b;
	cin>>a;
	cin>>b;
 
	if(a.size()!=b.size()){
		cout<<"NO"<<endl;
		return;
	}
 
	for(int i = 0; i<a.size(); i++){
		if(a[i]!=b[i]){
			indices.push_back(i);
		}
	}
 
	if(indices.size()<2 || indices.size()>2){
		cout<<"NO"<<endl;
		return;
	}
 
	swap(a[indices[0]], a[indices[1]]);
 
	if(a != b){
		cout<<"NO"<<endl;
		return;
	}
 
 
	cout<<"YES"<<endl;
	return;
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