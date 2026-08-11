// url: https://codeforces.com/contest/296/problem/C
// Title: Greg and Array
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k; cin >> n >> m >> k;

    vector<long long> inicial(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin >> inicial[i];
    }
    
    vector<long long> diff(n+2, 0);

    for (int i = 0; i < m; i++){
        int l, r, x; cin >> l >> r >> x;
        diff[l] += x;
        diff[r+1] -= x;    
    }

    vector<long long> verdadeiro(n+2, 0);
    
    for (int i = 0; i < k; i++){
        
    }
    
    
    
    return 0;
}