//Problem link: 

#include <bits/stdc++.h>

using namespace std;

// Solved by: Gatomorado

void solve(){
    string s; cin>>s;
    int n = s.length();
    char c[5] = {'h','e','l','l','o'};
    //vector<char> c(5) = {'h','e','l','l','o'};
    int j = 0;
    for (size_t i = 0; i < n; i++){ 
        if(s[i] == c[j]){
            j++;
        }
        if(j == 5){
            cout << "YES" << endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); //Fast IO: Increases Input-Output speed
    cin.tie(0); cout.tie(0); // Also fast IO
    int t=1; // If we have only one test case, we init this variable as 1
    //scanf("%d",&t); // Otherwise we read the number of test cases
    //cin>>t;
    for(int i=0; i<t; i++){ // Execute all testcases
        solve(); //Solve function
    }
    return 0;
}