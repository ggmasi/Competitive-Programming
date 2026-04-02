#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, w; cin >> n >> w;
    vector<long long int> pesos(n);
    vector<long long int> valores(n);

    for (long long int i = 0; i < n; i++){
        cin >> pesos[i] >> valores[i];
    }
    
    vector<vector<long long int>> dp(n+1, vector<long long int>(w+1, 0));

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= w; j++){
            if(j-pesos[i-1] >= 0){
                dp[i][j] = max(dp[i-1][j], valores[i-1]+dp[i-1][j-pesos[i-1]]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
        
    }

    
    cout << dp[n][w] << endl;
}