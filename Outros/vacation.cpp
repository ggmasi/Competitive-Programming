// url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1133
// Title: Vacation
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    int count = 0;
    while(1){
        getline(cin, s1);
        if(s1 == "#") return 0;
        getline(cin, s2);
        vector<vector<int>> dp(s1.length()+1, vector<int>(s2.length()+1, 0));
        for (int i = 1; i <= s1.length(); i++){
            for (int j = 1; j <= s2.length(); j++){
                if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
                else{dp[i][j] = max(dp[i-1][j], dp[i][j-1]);}
            }
            
        }
        count++;
        cout << "Case #" << count << ": you can visit at most " << dp[s1.length()][s2.length()] << " cities." << endl;
        
    }
    
}