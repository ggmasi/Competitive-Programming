// url: https://codeforces.com/problemset/problem/1334/C
// Title: Circle of Monsters
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
        vector<ll> a(n), b(n);
        ll melhor = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
            ans += a[i];
            if(i > 0){
                melhor += max(0LL, a[i]-b[i-1]);
            }
        }
        melhor += max(0LL, a[0]-b[n-1]);

        for (int i = 1; i < n; i++){
            ans = min(ans, melhor+a[i]-(max(0LL, a[i]-b[i-1])));
        }
        
        ans = min(ans, melhor+a[0]-(max(0LL, a[0]-b[n-1])));

        cout << ans << "\n";

    }

    
    return 0;
}