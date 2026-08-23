// url: https://codeforces.com/contest/706/problem/C
// Title: Hard problem
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;
    vector<ll> costs(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin >> costs[i];
    }
    
    vector<vector<ll>> dp(n+1, vector<ll>(2, 1e18));
    dp[1][0] = 0;
    dp[1][1] = costs[1];
    string s; cin >> s;
    string sr = s;
    reverse(sr.begin(), sr.end());
    for (int i = 2; i <= n; i++){
        string t; cin >> t;
        string tr = t;
        reverse(tr.begin(), tr.end());

        if(s <= t){
            dp[i][0] = dp[i-1][0];
        }
        if(sr <= t){
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
        }
        if(s <= tr){
            dp[i][1] = dp[i-1][0]+costs[i];
        }
        if(sr <= tr){
            dp[i][1] = min(dp[i][1], dp[i-1][1]+costs[i]);
        }

        s = t;
        sr = tr;
    }
    
    ll ans = min(dp[n][0], dp[n][1]);

    if(ans == 1e18){
        cout << "-1\n";
    }else{
        cout << ans << "\n";
    }

    return 0;
}