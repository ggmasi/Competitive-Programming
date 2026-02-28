#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;

int n;

int dp[MAX][3] = { 0 };
int vet[MAX][3];

int calc(int a, int p){
    if(p >= n) return 0;
    if(dp[p][a] != 0) return dp[p][a];
    dp[p][a] = vet[p][a] + max(calc(((a+1)%3), p+1), calc(((a+2)%3), p+1));
    return dp[p][a];
}

int main(){
    
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> vet[i][j];
        }
        
    }
    dp[n-1][0] = vet[n-1][0];
    dp[n-1][1] = vet[n-1][1];
    dp[n-1][2] = vet[n-1][2];
    int ans = max(calc(0, 0), calc(1,0));
    ans = max(ans, calc(2, 0));

    
    cout << ans << endl;
}