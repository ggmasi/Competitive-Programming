//https://codeforces.com/problemset/problem/863/B
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e5+7;

int main(){
    int n; cin >> n;
    vector<int> v(n*2);
    for (int i = 0; i < n*2; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<vector<int>> dp(n*2+1, vector<int>(3, INF));

    dp[0][0] = dp[0][1] = dp[0][2] = 0;
    

    for (int i = 1; i <= n*2; i++){
        for (int j = 0; j < 3; j++){
            if(j <= 0 && i < 2){
                dp[i][j] = 0;
                continue;
            }
            
            if(j > 0){
                dp[i][j] = min(dp[i][j], dp[i-1][j-1]);
            }
            if(i >= 2){
                dp[i][j] = min(dp[i][j], dp[i-2][j]+(v[i-1]-v[i-2]));
            }
        }
    }
    
    cout << dp[n*2][2] << endl;

}