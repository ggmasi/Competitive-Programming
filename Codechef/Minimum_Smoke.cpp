// url: https://www.codechef.com/problems/MISMO
// Title: Minimum Smoke
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;
    vector<ll> v(n);
    vector<vector<ll>> cores(n, vector<ll>(n));
    ll ans = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n; i++){
        ll sum = 0;
        for (int j = i; j < n; j++){
            sum = (sum+v[j])%100;
            cores[i][j] = sum;
        }
        
    }
    

    vector<vector<ll>> dp(n+1, vector<ll>(n+1, 1e18));
    for (int i = 0; i < n; i++){
        dp[i][i] = 0;
    }
    

    for (int i = n-1; i >= 0; i--){
        for (int j = i+1; j <= n-1; j++){
            for (int k = i; k < j; k++){
                dp[i][j] = min(dp[i][j], (dp[i][k]+dp[k+1][j])+cores[i][k]*cores[k+1][j]);
            }
            
        }
        
    }

    cout << dp[0][n-1] << "\n";




    return 0;
}