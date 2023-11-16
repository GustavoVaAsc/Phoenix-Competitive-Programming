//Problem link: 

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int w; cin >> w;
    if( w%2 == 0 && w > 2 ){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t=1;
    scanf("%d",&t);
    //cin>>t;
    for(int i=0; i<t; i++){
        solve();
    }
    return 0;
}