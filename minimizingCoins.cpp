#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6+5;
const int INF = INT32_MAX;

vector<int> coins;
int dp[MAX];

int calc(int a){
    if(a <= 0) return 0;
    if(dp[a] != -1) return dp[a];
    dp[a] = INF;
    for (auto c : coins){
        if(c <= a){
            int temp = calc(a-c);
            if(temp != INF){
                dp[a] = min(dp[a], temp+1);
            }
        } 
    }
    return dp[a];
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n, sum;
    cin >> n >> sum;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        coins.push_back(x);
    }
    
    int ans = calc(sum);

    if(ans == INF || ans == -1){
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;
}