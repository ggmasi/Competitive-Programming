// url: https://codeforces.com/contest/275/problem/C
// Title: k-Multiple Free Set
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k; cin >> n >> k;
    ll ans = 0;

    vector<ll> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    unordered_map<ll, bool> m;

    for (int i = 0; i < n; i++){
        ll temp = v[i];
        if(m[temp] || m[temp*k] || (temp%k == 0 && m[temp/k])) continue;
        ans++;
        m[temp] = true;
    }
    
    cout << ans << "\n";
    
    return 0;
}