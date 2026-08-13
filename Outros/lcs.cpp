#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

string lcs(string& a, string& b) {
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    // se não for necessário retornar a string lcs retorna int
    // return dp[m][n]; 

    //backtracking para recuperar a string LCS
    string s = "";
    int i = m, j = n;
    
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            s += a[i - 1]; 
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--; 
        } 
        else {
            j--; 
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b; cin >> a >> b;

    
    
    return 0;
}