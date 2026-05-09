//https://cses.fi/problemset/task/1746
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9+7;

int main(){
    ll n, m; cin >> n >> m;
    vector<vector<ll>> dp(n, vector<ll>(m+2, 0));

    ll x0; cin >> x0;
    if(x0 == 0){
        for (ll i = 1; i <= m; i++){
            dp[0][i] = 1;
        }
    }else{
        dp[0][x0] = 1;
    }
    
    for (ll i = 1; i < n; i++){
        ll temp; cin >> temp;
        if(temp != 0){
            dp[i][temp] = (dp[i-1][temp-1]+dp[i-1][temp]+dp[i-1][temp+1])%MOD;
        }else{
            for (ll j = 1; j <= m; j++){
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1])%MOD;
            }
        }
    }
    
    ll ans = 0;
    for (ll i = 1; i <= m; i++){
        ans += dp[n-1][i]%MOD;
        ans = ans%MOD;
    }
    
    cout << ans << endl;
    
}