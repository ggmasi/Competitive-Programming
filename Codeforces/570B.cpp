// url: https://codeforces.com/contest/570/problem/B
// Title: Simple Game
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, m; cin >> n >> m;

    ll diff1 = m-1, diff2 = n-m;

    if(n == m && n == 1){
        cout << "1\n";
        return 0;
    }

    if(diff1 >= diff2){
        cout << m-1 << "\n";
    }else cout << m+1 << "\n";
    
    return 0;
}