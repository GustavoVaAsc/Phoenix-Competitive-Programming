#include <bits/stdc++.h>
 
using namespace std;
 
void print_char(int x){
    cout << (char)(x + 97);
}
 
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    vector<int> v(26,0);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int l = 0;
    
    for(int i=0; i<n; i++){
            for(int j = 0; j < 26; j++){
                if(v[j] == a[i]){
                    print_char(j);
                    v[j]++;
                    break;
                }
            }
        }
    
    cout << "\n";
    
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