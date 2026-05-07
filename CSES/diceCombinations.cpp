//https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9+7;

int main(){
    ll n; cin >> n;
    vector<ll> dp(n+1, 0);
    dp[0] = 1;

    for (ll i = 1; i <= n; i++){
        for (ll j = 0; j <= 6; j++){
            if(i-j >= 0){
                dp[i] += dp[i-j]%MOD;
            }
        }
        
    }
    
    cout << dp[n]%MOD << endl;
}