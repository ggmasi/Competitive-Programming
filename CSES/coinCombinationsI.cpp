//https://cses.fi/problemset/task/1635
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
const ll MOD = 1e9+7;
 
int main(){
    ll n, x; cin >> n >> x;
    vector<ll> dp(x+1, 0);
    vector<ll> valores(n);
 
    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }
    
 
    dp[0] = 1;
 
    for (int i = 1; i <= x; i++){
        for (int j = 1; j <= n; j++){
            if(i-valores[j-1] >= 0){
                dp[i] += dp[i-valores[j-1]]%MOD;
            }
        }
        
    }
    
    cout << dp[x]%MOD << endl;
}