//https://judge.beecrowd.com/pt/problems/view/1034
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> dp(m+1, 1e9);
        dp[0] = 0;
        vector<int> valores(n);
        
        for (int i = 0; i < n; i++){
            cin >> valores[i];
        }
        

        for (int i = 0; i < n; i++){
            for (int j = valores[i]; j <= m; j++){
                dp[j] = min(dp[j], 1+dp[j-valores[i]]);
            }
        }
        
        
        cout << dp[m] << endl;
    }
}