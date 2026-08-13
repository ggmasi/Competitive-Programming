// url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1041
// Title: Longest Match
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int lcs(vector<string>& a, vector<string>& b){
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c = 1;
    string s, t;
    while(getline(cin, s) && getline(cin, t)){
        
        cout << setw(2) << c << ". ";
        c++;

        

        // if(s.empty() && t.empty()) return 0;
        if(s.empty() || t.empty()){
            cout << "Blank!\n";
            continue;
        }

        for (int i = 0; i < s.length(); i++){
            if(!isalnum(s[i])){
                s[i] = ' ';
            }
        }

        for (int i = 0; i < t.length(); i++){
            if(!isalnum(t[i])){
                t[i] = ' ';
            }
        }
        
        vector<string> v1;
        stringstream ss1(s);
        string temp;
        while(ss1 >> temp){
            v1.push_back(temp);
        }

        

        vector<string> v2;
        stringstream ss2(t);
        string temp2;
        while(ss2 >> temp2){
            v2.push_back(temp2);
        }

        cout << "Length of longest match: " << lcs(v1, v2) << "\n";


    }

    
    return 0;
}