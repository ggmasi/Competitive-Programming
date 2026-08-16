// url: https://codeforces.com/problemset/problem/1826/B
// Title: Lunatic Never Content
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
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        int l = 1, r = n-2;
        int ans = abs(v[n-1]-v[0]);
        while(l < r){
            ans = gcd(ans, abs(v[l]-v[r]));
            l++; r--;
        }

        if(l < r){
            cout << 1 << "\n";
        }else cout << ans << "\n";
        
    }

    return 0;
}