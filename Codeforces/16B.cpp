//https://codeforces.com/contest/16/problem/B
// Burglar And Matches
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<pair<int, int>> v(m);

    for (int i = 0; i < m; i++){
        cin >> v[i].second >> v[i].first;
    }

    sort(v.rbegin(), v.rend());

    int idx = 0;
    int ans = 0;
    while(n && idx < m){
        if(v[idx].second >= n){
            ans += n*v[idx].first;
            n = 0;
        }else{
            ans += v[idx].first*v[idx].second;
            n -= v[idx].second;
            idx++;
        }
    }
    
    cout << ans << "\n";
    return 0;
}