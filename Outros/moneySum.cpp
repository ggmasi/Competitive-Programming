#include <bits/stdc++.h>
using namespace std;

#define ll long long

void moneySum(vector<ll>& coins, ll N){
    ll sum = accumulate(coins.begin(), coins.end(), 0LL);

    vector<vector<bool>> dp(N + 1, vector<bool>(sum + 1, false));
    dp[0][0] = true;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= sum; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= coins[i - 1]
                && dp[i - 1][j - coins[i - 1]]) {
                dp[i][j] = true;
            }
        }
    }

    vector<int> possibleSums;

    for (int j = 1; j <= sum; j++) {
        if (dp[N][j]) {
            possibleSums.push_back(j);
        }
    }

    //printa o número de possibilidades de soma
    cout << possibleSums.size() << endl;
    //printa todas as possibilidades de soma
    for (int i = 0; i < possibleSums.size(); i++)
        cout << possibleSums[i] << " ";
    cout << endl;
}

int main(){

}
