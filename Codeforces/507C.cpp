// url: https://codeforces.com/contest/507/problem/C
// Title: Guess Your Way Out!
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll h, n; cin >> h >> n;
    
    ll max = 1LL << h;
    ll l = 1, r = max;

    ll ans = 0;

    bool lado = false;

    while(l < r){
        ll mid = l+(r-l)/2;

        if(!lado){
            if(n > mid){
                ans += r-l+1;
                l = mid+1;
            }else{
                ans++;
                r = mid;
                lado = !lado;
            }
        }else{
            if(n <= mid){
                ans += r-l+1;
                r = mid;
            }else{
                ans++;
                l = mid+1;
                lado = !lado;
            }
        }

    }

    cout << ans << "\n";


    return 0;
}