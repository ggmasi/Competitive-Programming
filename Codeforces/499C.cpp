// url: https://codeforces.com/contest/499/problem/C
// Title: Crazy Town
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x1, y1; cin >> x1 >> y1;
    ll x2, y2; cin >> x2 >> y2;

    ll n; cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++){
        ll a, b, c; cin >> a >> b >> c;

        ll p1 = (a*x1 + b*y1 + c), p2 = (a*x2 + b*y2 + c);

        if((p1 > 0 && p2 < 0) || ((p1) < 0 && p2 > 0)) ans++;
    }
    
    cout << ans << "\n";


    return 0;
}