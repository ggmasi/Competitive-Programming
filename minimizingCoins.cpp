//https://cses.fi/problemset/task/1634

#include <bits/stdc++.h>
using namespace std;

int INF = 1e6+7;

int main(){
    int n, x; cin >> n >> x;
    vector<int> valores(n);
    vector<int> dp(x+1, INF);
    dp[0] = 0;

    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }
    
    for (int i = 0; i < n; i++){
        for (int j = valores[i]; j <= x; j++){
            dp[j] = min(dp[j], 1+dp[j-valores[i]]);
        }
        
    }
    
    if(dp[x] != INF) cout << dp[x] << endl;
    else cout << -1 << endl;
    return 0;
}