//https://leetcode.com/problems/climbing-stairs/
#include <bits/stdc++.h>
using namespace std;

const int MAX = 45;

int n;

int dp[MAX];

int main(){
    memset(dp, 0, sizeof(dp));
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    cout << dp[n] << endl;
}