//https://atcoder.jp/contests/dp/tasks/dp_e
#include <bits/stdc++.h>
using namespace std;

/*

        SOLUÇÃO PARA BOLSA COM LIMITE DE PESO MUITO ALTO E VALOR MAXIMO BAIXO (W -> valor alto; sum de valores -> valor baixo) 


*/


long long int INF = 1e18;

int main(){
    long long int n, w; cin >> n >> w;
    vector<long long int> pesos(n);
    vector<long long int> valores(n);
    long long int valorMax = 0;
    for (long long int i = 0; i < n; i++){
        cin >> pesos[i] >> valores[i];
        valorMax += valores[i];
    }
    
    vector<long long int> dp(valorMax+1, INF);
    dp[0] = 0;

    for (long long int i = 0; i < n; i++){
        for (long long int j = valorMax; j >= valores[i]; j--){
            dp[j] = min(dp[j], dp[j-valores[i]]+pesos[i]);
        }
    }
    
    long long int res = 0;
    for (long long int i = valorMax; i >= 0; i--){
        if(dp[i] <= w){
            res = i;
            break;
        }
    }
    
    cout << res << endl;
}