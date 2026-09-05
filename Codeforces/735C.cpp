// url: https://codeforces.com/contest/735/problem/C
// Title: Tennis Championship
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;
    
    vector<ll> v;
    v.push_back(1);
    v.push_back(2);
    
    int idx = 2;
    while(v.back() < 1e18){
        v.push_back(v[idx-1]+v[idx-2]);
        idx++;
    }

    int res = upper_bound(v.begin(), v.end(), n) - v.begin()-1;

    

    cout << res << "\n";

    return 0;
}