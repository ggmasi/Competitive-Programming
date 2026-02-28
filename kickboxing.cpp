#include <bits/stdc++.h>
using namespace std;

const int MAX = 4000;

int n, m, k;
vector<vector<int>> dp;

int calc(int a, int b){
    if(a == 0) return 1;
    if(a < 0 || b == 0) return 0;
    if(dp[a][b] != -1) return dp[a][b];
    long long ans = calc(a, b-1);
    
    if(b != k && a >= b){
        ans += calc(a-b, b);
    }

    dp[a][b] = ans%998244353;

    return dp[a][b];
}

int main(){
    cin >> n >> k;
    dp.assign(n+1, vector<int>(n+1, -1));
    
    cout << calc(n, n) << endl;
}