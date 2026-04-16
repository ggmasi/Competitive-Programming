//https://judge.beecrowd.com/pt/problems/view/1798
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    while(cin >> n){
        cin >> t;
        vector<int> pesos(n);
        vector<int> valores(n);
        for (int i = 0; i < n; i++){
            cin >> pesos[i] >> valores[i];
        }
        vector<vector<int>> dp(n+1, vector<int>(t+1, 0));

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= t; j++){
                if(pesos[i-1] > j) dp[i][j] = dp[i-1][j];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-pesos[i-1]]+valores[i-1]);

            }
            
        }
        cout << dp[n][t] << endl;
    }
    return 0;
}