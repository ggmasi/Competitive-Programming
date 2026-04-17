//https://atcoder.jp/contests/dp/tasks/dp_i
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long double> valores(n+1);
    valores[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> valores[i];
    }
    
    int maioria = (n/2)+1;

    vector<vector<long double>> dp(n+1, vector<long double>(n+1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= n; j++){
            if(j == 0){
                dp[i][j] = (1-valores[i])*dp[i-1][j];
            }else{
                dp[i][j] = ((dp[i-1][j] * (1-valores[i])) + (dp[i-1][j-1] * (valores[i])));

            }
        }
        
    }
    

    long double sum =0;
    for (int i = maioria; i <= n; i++){
        sum += dp[n][i];
    }
    

    cout << setprecision(10) << sum << endl;
}