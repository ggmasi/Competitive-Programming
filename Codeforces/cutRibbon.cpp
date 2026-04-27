//https://codeforces.com/problemset/problem/189/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c; cin >> n >> a >> b >> c;

    vector<int> dp(n+1, -1);
    dp[0] = 0;
    for (int i = a; i <= n; i++){
        if(dp[i-a] < 0) continue;
        dp[i] = max(dp[i], dp[i-a]+1);
    }
    
    if(b != a){
        for (int i = b; i <= n; i++){
            if(dp[i-b] < 0) continue;
            dp[i] = max(dp[i], dp[i-b]+1);
        }
    }

    if(c != a && c != b){
        for (int i = c; i <= n; i++){
            if(dp[i-c] < 0) continue;
            dp[i] = max(dp[i], dp[i-c]+1);
        } 
    }

    cout << dp[n] << endl;
}