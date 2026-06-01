//https://atcoder.jp/contests/dp/tasks/dp_e
#include <bits/stdc++.h>
using namespace std;

/*

        SOLUÇÃO PARA BOLSA COM LIMITE DE PESO MUITO ALTO E VALOR MAXIMO BAIXO (W -> valor alto; sum de valores -> valor baixo) 


*/
#define ll long long

ll INF = 1e18;

int main(){
    ll n, w; cin >> n >> w;
    vector<ll> pesos(n);
    vector<ll> valores(n);
    ll valorMax = 0;
    for (ll i = 0; i < n; i++){
        cin >> pesos[i] >> valores[i];
        valorMax += valores[i];
    }
    
    vector<ll> dp(valorMax+1, INF);
    dp[0] = 0;

    for (ll i = 0; i < n; i++){
        for (ll j = valorMax; j >= valores[i]; j--){
            dp[j] = min(dp[j], dp[j-valores[i]]+pesos[i]);
        }
    }
    
    ll res = 0;
    for (ll i = valorMax; i >= 0; i--){
        if(dp[i] <= w){
            res = i;
            break;
        }
    }
    
    cout << res << endl;
}