// url: https://codeforces.com/contest/131/problem/C
// Title: The World is a Theatre
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 31; 
long long C[MAXN][MAXN];

void build_pascal() {
    for (int n = 0; n < MAXN; n++) {
        
        C[n][0] = 1; 
        
       
        for (int k = 1; k <= n; k++) {
            C[n][k] = C[n-1][k-1] + C[n-1][k];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    build_pascal();
    long long n, m, t; cin >> n >> m >> t;
    long long ans = 0;
    for (int i = 4; i <= n; i++){
        if(t-i >= 1 && t-i <= m){
            ans += ((C[n][i])*C[m][t-i]);
        }
    }
    
    cout << ans << "\n";
    return 0;
}