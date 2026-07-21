//https://codeforces.com/problemset/problem/455/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll maxN = 1e5+7;

int main(){
    ll n; cin >> n;
    vector<ll> cnt(maxN, 0);
    ll maxValue = -1;
    for (ll i = 0; i < n; i++){
        ll temp; cin >> temp;
        cnt[temp]++;
        maxValue = max(maxValue, temp);
    }
    
    vector<ll> dp(maxValue+1, 0);
    dp[1] = cnt[1];
    for (ll i = 2; i <= maxValue; i++){    
        dp[i] = max(dp[i-1], dp[i-2]+i*cnt[i]);
    }
    
    cout << dp[maxValue] << endl;

}