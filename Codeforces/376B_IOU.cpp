//https://codeforces.com/contest/376/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> v(n+1, 0);
    while(m--){
        int a, b, c; cin >> a >> b >> c;
        v[a] -= c;
        v[b] += c;
    }

    int ans = 0;
    for(auto x : v){
        ans += x > 0 ? x : 0;
    }

    cout << ans << "\n";
}