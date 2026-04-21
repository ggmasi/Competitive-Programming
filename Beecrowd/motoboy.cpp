//https://judge.beecrowd.com/pt/problems/view/1286
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t != 0){
        int n;cin >> n;
        vector<int> valores(t);
        vector<int> custos(t);
        
        for (int i = 0; i < t; i++){
            cin >> valores[i] >> custos[i]; 
        }
        
        vector<vector<int>> dp(t+1, vector<int>(n+1, 0));
        
        for (int i = 1; i < t+1; i++){
            for (int j = 0; j < n+1; j++){
                if(custos[i-1] <= j){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-custos[i-1]]+valores[i-1]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        


        cout << dp[t][n] << " min." << endl;


        
        cin >> t;
    }
    

    

    
}