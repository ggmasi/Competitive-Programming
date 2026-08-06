#include <bits/stdc++.h>
using namespace std;

#define ll long long

void moneySum(vector<ll>& coins, ll N) {
    ll sum = accumulate(coins.begin(), coins.end(), 0LL);

    bitset<100005> dp; //vector<vector<bool>> dp(N + 1, vector<bool>(sum + 1, false));
    
    dp[0] = 1; //dp[0][0] = true;
    
    for (int i = 0; i < N; i++) {
        // Desloca todos os bits "true" para a esquerda pela distância de coins[i]
        // e faz uma operação OR com o estado anterior.
        dp |= (dp << coins[i]);
    }

    vector<int> possibleSums;

    // Checamos apenas dp[j], pois a dimensão de "N moedas" foi achatada
    for (int j = 1; j <= sum; j++) {
        if (dp[j]) {
            possibleSums.push_back(j);
        }
    }

    // Printa o número de possibilidades de soma
    cout << possibleSums.size() << "\n";

    // Printa todas as possibilidades de soma
    for (int i = 0; i < possibleSums.size(); i++) {
        cout << possibleSums[i] << " ";
    }
    cout << "\n";
}

int main(){

}
