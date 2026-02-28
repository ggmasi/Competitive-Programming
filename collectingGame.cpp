#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e9+5;

int n;
vector<int> vet;
vector<int> dp;

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            vet.push_back(x);
            dp.push_back(x);
        }
        sort(dp.begin(), dp.end());
        for (int i = 0; i < n; i++){
            int atual = 0;
            int add = 0;
            int a = vet[i];
            for (int j = 0; j < n; j++){
                if(dp[j] < a+add){
                    atual++;
                    add += dp[j];
                    continue;
                }
                if(dp[j] == a+add){
                    if(dp[j+1] == a+add && j < n-1){
                        atual++;
                        add += dp[j];
                        continue;
                    }else break;
                }
                break;
            }
            cout << atual << " ";
        }
        cout << "\n";
    }
    return 0;
}