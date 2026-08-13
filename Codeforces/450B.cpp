// url: https://codeforces.com/contest/450/problem/B
// Title: Jzzhu and Sequences
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

const ll MOD = 1e9+7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<ll> v(6);

    cin >> v[0] >> v[1];

    v[0] = (v[0]+MOD)%MOD;
    v[1] = (v[1]+MOD)%MOD;

    v[2] = ((v[1]-v[0])+MOD)%MOD;
    v[3] = (-v[0]+MOD)%MOD; v[4] = (-v[1]+MOD)%MOD; v[5] = (-v[2]+MOD)%MOD;

    ll n; cin >> n;
    cout << (v[(n-1)%6]+MOD)%MOD << "\n";
    // if(n <= 6){
    // }else cout << (v[n%6]+MOD)%MOD << "\n";
    

    return 0;
}