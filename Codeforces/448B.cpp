//https://codeforces.com/contest/448/problem/B
// Suffix Structures
#include <bits/stdc++.h>
using namespace std;

int lcs(string& a, string& b){
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[m][n];
}


int main(){
    string s, t; cin >> s >> t;
    if(s.length() < t.length()){
        cout << "need tree\n";
        return 0;
    }
    vector<bool> sv(s.length(), false);
    vector<bool> tv(t.length(), false);
    int letrasIguais = 0;
    for (int i = 0; i < s.length(); i++){
        for (int j = 0; j < t.length(); j++){
            if(s[i] == t[j] && sv[i] == false && tv[j] == false){
                letrasIguais++;
                sv[i] = true;
                tv[j] = true;
                break;
            }
        }
    }
    // cout << "aaaa\n";
    
    if(letrasIguais < t.length()){
        cout << "need tree\n";
        return 0;
    }

    if(letrasIguais == t.length()){
        if(s.length() == t.length()){
            cout << "array\n";
        }else if(lcs(s, t) == t.length()){
            cout << "automaton\n";
        }else{
            cout << "both\n";
        }
    }

    return 0;
}