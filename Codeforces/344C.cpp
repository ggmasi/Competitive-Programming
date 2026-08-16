// url: https://codeforces.com/contest/344/problem/C
// Title: Rational Resistance
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll a, b; cin >> a >> b;
    ll res = 0;
    
    while(a > 0 && b > 0){
        if(a >= b){
            res += a/b;
            a %= b;
        }else{
            res += b/a;
            b %= a;
        }
    }

    cout << res << "\n";
    return 0;
}