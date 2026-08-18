// url: https://codeforces.com/contest/610/problem/B
// Title: Vika and Squares
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;
    vector<ll> v(n);

    unordered_map<ll, ll> diffs;
    unordered_map<ll, ll> last;
    unordered_map<ll, ll> first;
    
    ll menor = 1e9+5;
    
    for (int i = 0; i < n; i++){
        cin >> v[i];

        menor = min(menor, v[i]);
        if(v[i] == menor){
            if(!last.contains(v[i])){
                first[v[i]] = i;
                last[v[i]] = i;
                diffs[v[i]] = -1;
            }else{
                diffs[v[i]] = max(diffs[v[i]], i-last[v[i]]-1);
                last[v[i]] = i;
            }
        }
    }
    // cout << menor << " " << last[menor] << " " << diffs[menor] << endl;

    if(diffs[menor] == -1) diffs[menor] = n-1;
    
    diffs[menor] = max(diffs[menor], (n-last[menor]-1)+(first[menor]));

    ll ans = (menor*n)+diffs[menor];

    cout << ans << "\n";
    
    
    return 0;
}