// url: https://codeforces.com/contest/353/problem/C
// Title: Find Maximum
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n);    
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    string s; cin >> s;

    ll ans = 0;
    ll total = 0;
    for (int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            ans = max(ans+v[i], total);
        }
        total += v[i];
    }

      
    cout << ans << "\n";
    return 0;
}