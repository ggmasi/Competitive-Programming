//https://judge.beecrowd.com/pt/problems/view/2664
#include <bits/stdc++.h>
using namespace std;

long long int MOD = 1e9+7;

int main(){
    long long int t, m, n; cin >> t >> m >> n;
    vector<vector<long long int>> dp(t, vector<long long int>((n-m)+1, 1));
    
    for (long long int i = 1; i < t; i++){
        for (long long int j = 0; j <= n-m; j++){
            if(j == 0){
                dp[i][j] = (dp[i-1][j+1])%MOD;
            }else if(j == (n-m)){
                dp[i][j] = (dp[i-1][j-1])%MOD;
            }else{
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j+1])%MOD;
            }
           
        }
        
    }

    long long sum = 0;
    for (int j = 0; j <= n - m; j++) {
        sum = (sum + dp[t-1][j]) % MOD;
    }

    cout << sum << endl;
    
    return 0;
}