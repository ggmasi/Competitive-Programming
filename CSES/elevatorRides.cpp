//https://cses.fi/problemset/task/1653
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, x; cin >> n >> x;
    vector<int> pesos(n);
    for (int i = 0; i < n; i++){
        cin >> pesos[i];
    }

    vector<pair<int, ll>> dp(1 << n, {n+1, 0});
    dp[0] = {1, 0};

    for (int i = 0; i < (1 << n); i++){

        for (int j = 0; j < n; j++){
            if(i & (1 << j)) continue;

            int prox = i | (1 << j);

            int tempViagem = dp[i].first;
            ll tempPeso = dp[i].second;

            if(pesos[j]+tempPeso <= x){
                tempPeso += pesos[j];
            }else{
                tempViagem++;
                tempPeso = pesos[j];
            }

            if(make_pair(tempViagem, tempPeso) < dp[prox]){
                dp[prox] = {tempViagem, tempPeso};
            }
        }
        
    }
    
    cout << dp[dp.size()-1].first << endl;
    
}