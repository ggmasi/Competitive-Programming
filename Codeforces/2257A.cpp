// url: https://codeforces.com/contest/2257/problem/A
// Title: Creating Abbreviations
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        map<char, int> v;
        for (int i = 0; i < n; i++){
            string s; cin >> s;
            char c = s[0];
            c = toupper(c);
            v[c]++;
        }
        bool flag = true;
        for (int i = 0; i < m; i++){
            string s; cin >> s;
            for(auto c : s){
                if(v[c] == 0) flag = false;
            }
        }
        
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}