//https://cses.fi/problemset/task/2413
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9+7;

int main(){
    ll n; cin >> n;

    vector<vector<ll>> dp(1e6, vector<ll>(2));
    
    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 1; i < 1e6; i++){
        dp[i][0] = (2*dp[i-1][0] + dp[i-1][1])%MOD;
        dp[i][1] = (4*dp[i-1][1] + dp[i-1][0])%MOD;
    }
    
    while(n--){
        int temp; cin >> temp;
        cout << (dp[temp-1][0]+dp[temp-1][1])%MOD << endl;
    }
    
}