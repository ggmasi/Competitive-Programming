#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2; cin >> s1 >> s2;

    int l1 = s1.length();
    int l2 = s2.length();
    vector<vector<int>> dp(l1+1, vector<int>(l2+1, 0));
    string ans;
    for (int i = 1; i <= l1; i++){
        for (int j = 1; j <= l2; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
    }

    int i = l1, j = l2;

    while(i != 0 && j != 0){
        if(s1[i-1] == s2[j-1]){
            ans.push_back(s1[i-1]);
            i--;
            j--;
        }else{
            if(dp[i-1][j] >= dp[i][j-1]){
                i--;
            }else j--;
        }
    }

    reverse(ans.begin(), ans.end());
    
    cout << ans << endl;
}