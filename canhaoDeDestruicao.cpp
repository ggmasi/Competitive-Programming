//https://judge.beecrowd.com/pt/problems/view/1288
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> valores(n);
        vector<int> pesos(n);
        for (int i = 0; i < n; i++){
            cin >> valores[i] >> pesos[i];
        }
        
        int obj, lim; cin >> lim >> obj;

        vector<vector<int>> dp(n+1, vector<int>(lim+1, 0));

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= lim; j++){
                if(j-pesos[i-1] < 0){
                    dp[i][j] = dp[i-1][j];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-pesos[i-1]]+valores[i-1]);
                }
            }
        }

        // for (int i = 0; i <= n; i++){
        //     for (int j = 0; j <= lim; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        
        
        if(dp[n][lim] >= obj) cout << "Missao completada com sucesso\n";
        else cout << "Falha na missao\n";
    }
    return 0;
}