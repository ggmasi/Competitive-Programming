//https://judge.beecrowd.com/pt/problems/view/1767
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int pacotes; cin >> pacotes;
        vector<int> qt(pacotes);
        vector<int> peso(pacotes);
        for (int i = 0; i < pacotes; i++){
            cin >> qt[i] >> peso[i];
        }
        
        vector<vector<pair<int, int>>> dp(pacotes+1, vector<pair<int, int>>(51, make_pair(0, 0)));
        int sum = 0;
        int maior = 0;

        for (int i = 1; i < pacotes+1; i++){
            for (int j = 1; j < 51; j++){
                if(j >= peso[i-1]){
                    if(dp[i-1][j].first >= dp[i-1][j-peso[i-1]].first+qt[i-1]){
                        dp[i][j].first = dp[i-1][j].first;
                        dp[i][j].second = dp[i-1][j].second;
                    }else{
                        dp[i][j].first = dp[i-1][j-peso[i-1]].first+qt[i-1];
                        dp[i][j].second = dp[i-1][j-peso[i-1]].second+1;
                    }


                    // dp[i][j] = max(dp[i-1][j], (dp[i-1][j-peso[i-1]]+qt[i-1]));
                }else{
                    dp[i][j].first = dp[i-1][j].first;
                    dp[i][j].second = dp[i-1][j].second;
                }
            }
            
        }

        // for (int i = 0; i < pacotes+1; i++){
        //     for (int j = 0; j < 51; j++){
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        for (int i = 50; i > 0; i--){
            if(dp[pacotes][i].first != dp[pacotes][i-1].first){
                maior = i;
                break;
            }
        }
        


        cout << dp[pacotes][50].first <<" brinquedos"<< endl << "Peso: "<< maior << " kg" << endl << "sobra(m) " << pacotes-dp[pacotes][50].second << " pacote(s)\n\n";
    }
}