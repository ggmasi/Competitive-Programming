// url: https://codeforces.com/contest/2284/problem/A1
// Title: 15K4JR3B (Easy Version)
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
        ll ans;
        if(n%2){
            ans = (n/2)*((n/2)+1);
        }else{
            ans = n*n/4;
        }
        cout << ans << "\n";
    }

    return 0;
}