//https://judge.beecrowd.com/pt/problems/view/2446
#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, m; cin >> v >> m;
    vector<int> moedas;
    for (int i = 0; i < m; i++){
        int temp; cin >> temp;
        if(temp > v) continue;
        else moedas.push_back(temp);
    }
    
    vector<int> dp(v+1, 0);
    dp[0] = 1;

    for (int i = 0; i < moedas.size(); i++){
        int moeda = moedas[i];
        for (int j = v; j >= moeda; j--){
            if(j >= moeda){
                dp[j] = max(dp[j], dp[j-moeda]);
            }
        }
        
        if(dp[v] != 0){
            cout << "S" << endl;
            return 0;
        }
    }

    cout << "N" << endl;
     
    return 0;
    
    
}