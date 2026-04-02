#include <bits/stdc++.h>
using namespace std;



int main(){
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> dp(n+1, vector<int>(n+1, 1));
    for (int i = 0; i <=n; i++){
        dp[0][i] = 0;
    }
    

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(i == k || i > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = (dp[i-1][j] + dp[i][j-i])%998244353;
            }
        }
        
    }

    
    int ans = dp[n][n];
    cout << ans << endl;
    
}