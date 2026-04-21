//https://atcoder.jp/contests/dp/tasks/dp_h
#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9+7;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> grid(h, vector<char>(w));
    
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cin >> grid[i][j];
        }
    }
    
    vector<vector<int>> dp(h+1, vector<int>(w+1, 0));
    dp[1][1] = 1;
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            
            if(grid[i-1][j-1] == '#'){
                dp[i][j] = 0;
                continue;
            }

            if(i == 1 && j == 1){
                continue;
            }
            
            dp[i][j] = (dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }
    
    cout << dp[h][w] << endl;
    return 0;
}


// int main(){
//     int h, w; cin >> h >> w;
//     vector<vector<int>> dp(h+1, vector<int>(w+1, 0));

//     for (int i = 1; i <= h; i++){
//         for (int j = 1; j <= w; j++){
//             char temp; cin >> temp;
//             if(temp == '#'){
//                 dp[i][j] = -1;
//             }
//         }
//     }

//     dp[1][1] = 1;
//     int mod = (1e9)+7;

//     for (int i = 1; i <= h; i++){
//         for (int j = 1; j <= w; j++){
//             if(dp[i][j] != 0) continue;
//             int esq = dp[i][j-1], cima = dp[i-1][j];
//             if(esq == -1) esq = 0;
//             if(cima == -1) cima = 0;
//             dp[i][j] = (esq+cima)%mod;
//         }
//     }

//     // for (int i = 0; i <= h; i++){
//     //     for (int j = 0; j <= w; j++){
//     //         cout << dp[i][j] << " ";
//     //     }
//     //     cout << "\n";
//     // }
    
//     int ans = dp[h][w];
    
//     cout << ans << "\n";
// }