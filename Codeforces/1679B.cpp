// url: https://codeforces.com/problemset/problem/1679/B
// Title: Stone Age Problem
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin >> n >> q;
    vector<ll> v(n);
    
    ll ans = 0;
    
    for (int i = 0; i < n; i++){
        cin >> v[i];
        ans += v[i];
    }
    

    vector<int> ultima1(n, 0);
    int ultima2 = 0;
    ll last = 0;
    int i = 0;
    while(q--){
        int t; cin >> t;
        i++;
        
        if(t == 1){
            ll idx, num; cin >> idx >> num;
            if(ultima2 > ultima1[idx-1]){
                v[idx-1] = last;
            }
            ultima1[idx-1] = i;
            ans -= v[idx-1];
            v[idx-1] = num;
            ans += num;
        }else{
            ll num; cin >> num;
            last = num;
            ans = num*n;
            ultima2 = i;
        }


        cout << ans << "\n";
    }
    

    
    return 0;
}