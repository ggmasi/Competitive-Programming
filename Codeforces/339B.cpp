// url: https://codeforces.com/problemset/problem/339/B
// Title: Xenia and Ringroad
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, m; cin >> n >> m;

    ll ans = 0;
    ll pos = 1;
    for (int i = 0; i < m; i++){
        ll temp; cin >> temp;
        if(temp >= pos){
            ans += temp-pos;
        }else{
            ans += n-pos + temp;
        }

        // ans += abs(pos-temp);
        
        pos = temp;
    }
    
    cout << ans << "\n";
    
    return 0;
}