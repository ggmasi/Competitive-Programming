#include <bits/stdc++.h>
using namespace std;

int INF = INT32_MAX;

int main(){
    int n, k; cin >> n >> k;

    vector<int> dp(n, INF);
    dp[0] = 0;
    vector<int> h(n);

    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    for (int i = 0; i < n-1; i++){
        for (int j = 1; j <= k; j++){
            if(i+j >= n) break;
            dp[i+j] = min(dp[i+j], dp[i]+abs(h[i+j]-h[i]));
        }
        
    }

    cout << dp[n-1] << endl;

}