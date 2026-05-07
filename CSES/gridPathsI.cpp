//https://cses.fi/problemset/task/1638
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main(){
    int n; cin >> n;
    vector<vector<int>> dp(n+1, vector<int>(n+1));
    dp[1][1] = 1;

    for (int i = 1; i <= n; i++){
        cin.ignore();
        for (int j = 1; j <= n; j++){
            char temp; cin >> temp;
            if(i == 1 && j == 1){
                if(temp == '*'){
                    cout << "0" << endl;
                    return 0;
                }
                continue;
            }
            if(temp == '*'){
                dp[i][j] = 0;
            }else{
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%MOD;
            }
        }
    }
    
    cout << dp[n][n]%MOD << endl;
}