#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<int> dp(s.length(), 0);
    for (int i = 0; i < s.length()-1; i++){
        dp[i+1]=dp[i];
        if(s[i] == s[i+1]){
            dp[i+1]++;
        }
    }
    
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        cout << dp[b-1]-dp[a-1] << endl;
    }
    
    
}