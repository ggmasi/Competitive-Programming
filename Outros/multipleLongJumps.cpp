#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6+5;
const int INF = INT32_MAX;

vector<int> coins;
int dp[MAX];
int n;

int calc(int idx){
    if(idx >= 1 << (n-1)) return coins[idx];
    if(dp[idx] != -1) return dp[idx];
    dp[idx] = coins[idx];
    dp[idx] += max(calc((2*idx)+1), calc(2*idx));
    return dp[idx];
}

int main(){
    memset(dp, -1, sizeof(dp));
    coins.push_back(0);
    cin >> n;
    for (int i = 0; i < (1 << n)-1; i++){
        int x;
        cin >> x;
        coins.push_back(x);
    }
    
    int ans = calc(1);
    
    cout << ans << endl;
}