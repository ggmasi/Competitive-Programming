// url: https://codeforces.com/contest/534/problem/C
// Title: Polycarpus' Dice
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, a; cin >> n >> a;

    
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    
    for (int i = 0; i < n; i++){
        ll nmax = a-n+1;
        ll nmin = 0;
        if(sum-v[i]+1 < a){
            nmin = a-(sum-v[i]+1);
        }
        if(nmax > v[i]) nmax = v[i];

        ll ans = (v[i]-nmax)+nmin;
        cout << ans << " ";
        
    }

    cout << "\n";

    
    
    return 0;
}