#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
	int n,m,k; cin>>n>>m>>k;
 
	set<int> s1;
	set<int> s2;
	set<int> intersection;
 
	int tmp;
	for(int i=0; i<n; i++){
		cin>>tmp;
		if(tmp <= k){
			s1.insert(tmp);
		}
	}
 
	for(int i=0; i<m; i++){
		cin>>tmp;
		if(tmp <= k){
			s2.insert(tmp);
		}
	}
	
	int mx = max(m,n);
    
		for(auto it : s2){
			if(s1.find(it)!=s1.end()){
				intersection.insert(it);
			}
		}
		for(auto it : s1){
			if(s2.find(it)!=s2.end()){
				intersection.insert(it);
			}
		}
	
	for(auto it : intersection){
	    s1.erase(it);
	    s2.erase(it);
	}
    
    //cout<<s1.size()<<" "<<s2.size()<<" "<<intersection.size()<<endl;
    
	if(s1.size() > k/2 or s2.size() > k/2){
		cout<<"NO"<<endl;
	}else if(s1.size() + s2.size() + intersection.size() < k){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
 
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