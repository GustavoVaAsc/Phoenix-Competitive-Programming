#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    
    int firstB = -1;
    int lastB = -1;
    for(int i=0; i<n;i++){
        if(s[i]=='B' and firstB == -1){
            firstB = i;
        }else if(firstB != -1 and s[i]=='B'){
            lastB = i;
        }
    }
    
    if(lastB == -1)
        cout<<"1"<<endl;
    else
        cout<<lastB-firstB+1<<endl;
    
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