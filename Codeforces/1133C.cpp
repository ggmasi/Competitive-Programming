// url: https://codeforces.com/problemset/problem/1133/C
// Title: Balanced Team
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<ll> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 1;
    int l = 0, r = 1;
    while(r < n){
        if(v[r]-v[l] <= 5){
            ans = max(ans, r-l+1);
            r++;
        }else{
            l++;
        }
    }
    
    cout << ans << "\n";
    
    return 0;
}