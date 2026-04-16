//https://judge.beecrowd.com/pt/problems/view/1487777
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    int idx = 1;
    while(n != 0 && t != 0){
        vector<int> tempo(n);
        vector<int> valores(n);
        
        for (int i = 0; i < n; i++){
            cin >> tempo[i] >> valores[i];
        }
        
        vector<vector<int>> dp(n+1, vector<int>(t+1, 0));

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= t; j++){
                if(tempo[i-1] > j) dp[i][j] = dp[i-1][j]; 
                else dp[i][j] = max(dp[i-1][j], dp[i][j-tempo[i-1]]+valores[i-1]);
            }
            
        }
        
        cout << "Instancia " << idx << endl;
        cout << dp[n][t] << endl << endl;

        idx++;
        cin >> n >> t;
    }
}
