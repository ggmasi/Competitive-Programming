//https://atcoder.jp/contests/dp/tasks/dp_j
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long double dp[n+1][n+1][n+1];
    memset(dp, -1, sizeof(dp));

    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++){
        int temp;cin >> temp;
        if(temp == 1) c1++;
        else if(temp == 2) c2++;
        else if(temp == 3) c3++;
    }
    
    // int s = n-(c1+c2+c3);

    dp[0][0][0] = 0;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n; j++){
            for (int k = 0; k <= n; k++){
                int s = i+j+k;
                if(s == 0 || s > n) continue;

                double ans = (double)n/s;

                if(i > 0) ans+= (double) i/s*dp[k][j+1][i-1];
                if(j > 0) ans+= (double) j/s*dp[k+1][j-1][i];
                if(k > 0) ans+= (double) k/s*dp[k-1][j][i];

                dp[k][j][i] = ans;
            }
            
        }
        
    }
    
    cout << setprecision(10) << dp[c1][c2][c3] << endl;
}