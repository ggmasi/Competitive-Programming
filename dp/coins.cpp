#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long double> valores(n);
    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }
    
    int maioria = (n/2)+1;

    vector<vector<long double>> dp(n+1, vector<long double>(n+1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n; j++){
            if(j == 0){
                dp[i][j] = ((1-valores[i-1])*dp[i-1][j]);
            }else{
                dp[i][j] = (dp[i-1][j] * (1-valores[i-1])) + (dp[i-1][j-1]*valores[i-1]);
            }
        }
    }
    
    long double ans = 0;

    for (int i = n; i >= maioria; i--){
        ans += dp[n][i];
    }
    

    cout << fixed << setprecision(10) << ans << "\n";

}