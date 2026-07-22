//https://codeforces.com/problemset/problem/191/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<vector<int>> dp(26, vector<int>(26, 0));

    while(n--){
        string s; cin >> s;

        int ini = s.front()-'a';
        int fim = s.back()-'a';
        int tam = s.length();

        vector<int> old(26);
        for (int i = 0; i < 26; i++){
            old[i] = dp[i][ini];
        }

        dp[ini][fim] = max(dp[ini][fim], tam);

        for (int i = 0; i < 26; i++){
            if(old[i] != 0){
                dp[i][fim] = max(dp[i][fim], old[i]+tam);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 26; i++){
        ans = max(ans, dp[i][i]);
    }
    

    cout << ans << "\n";
}