// url: https://codeforces.com/problemset/problem/756/B
// Title: Travel Card
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> dp(n+1);
    vector<int> v(n+1);
    v[0] = dp[0] = 0;
    long long int total = 0;
    int ptr90 = 1;
    int ptr1440 = 1;
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        
        while(v[i] - v[ptr90] >= 90) ptr90++;
        while(v[i] - v[ptr1440] >= 1440) ptr1440++;


        dp[i] = min(dp[i-1]+20, min(dp[ptr90-1]+50, dp[ptr1440-1]+120));
        
        cout << dp[i]-dp[i-1] << "\n";
    }
    


    return 0;
}