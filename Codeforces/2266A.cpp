// url: https://codeforces.com/contest/2266/problem/A
// Title: Good Contest
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
        int a, b, c; cin >> a >> b >> c;
        int menor = min(a, min(b, c));

        cout << n-menor << "\n";
    }

    return 0;
}