// url: https://codeforces.com/group/jlSbN106ET/contest/714583/problem/D
// Title: Lakes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    ll g; cin >> g;
    vector<ll> v(n+1);
    vector<ll> dp(n+1);
    vector<ll> pref(n+1);
    v[0] = dp[0] = pref[0] = 0;
    
    ll ans = 0;
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        dp[i] = g-v[i];
        ans = max(ans, dp[i]);
        pref[i] = pref[i-1]+v[i];
    }

    ll x = 2;
    while((x*(x+1))/2 <= n){
        ll inicio = ((x*(x+1))/2);
        for (int i = inicio; i <= n; i++){
            dp[i] = max(dp[i], dp[i-x]+g-(pref[i]-pref[i-x]));
            ans = max(ans, dp[i]);
        }
        x++;
    }
    

    cout << ans << "\n";

    
    return 0;
}