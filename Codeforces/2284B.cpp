// url: https://codeforces.com/contest/2284/problem/B
// Title: Introduction to the Niche Internet
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if(k == n) {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                cout << v[i] << (i == n - 1 ? "" : " ");
            }
            cout << "\n";
            continue;
        }
        vector<ll> ans;
        int count = 0;
        ll acc = 0;
        int ini = n-k;
        bool flag = true;
        for(int i = ini; i < n; i++){
            ans.push_back(ans[i]);
            count++;
        }
        for (int i = ini-1; i >= 0; i--){
            ans.push_back(ans[i]);
            if(ans[i] == ans[i-1]) flag = false;
        }
        

        if(count == k && !flag) {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                cout << ans[i] << (i == n - 1 ? "" : " ");
            }
            cout << "\n";
        }else {
            cout << "NO\n";
        }
    }
    
    return 0;
}