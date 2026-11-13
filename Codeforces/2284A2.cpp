// url: https://codeforces.com/contest/2284/problem/A2
// Title: 15K4JR3B (Hard Version)
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a = 0, b = 0;
        ll ans;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++){
            if(a <= b){
                a += (1 << v[i]); 
            }else b += (1 << v[i]);
        }
        
        ans = a*b;
        cout << ans << "\n";
    }
    
    return 0;
}