// url: https://codeforces.com/contest/279/problem/B
// Title: Books
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, t; cin >> n >> t;
    vector<ll> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int ans = 0;
    int tempo = v[0];
    int l = 0, r = 0;
    while(r < n){
        if(l == r){
            if(v[l] <= t) ans = max(ans, 1);
            r++;
            if(r < n){
                tempo += v[r];
            }
        }else{
            if(tempo <= t) {
                ans = max(ans, r-l+1);
                r++;
                tempo += v[r];
            }else{
                tempo -= v[l];
                l++;
            }
        }
    }

    cout << ans << "\n";
}
