// url: https://codeforces.com/contest/496/problem/C
// Title: Removing Columns
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    
    vector<bool> ord(n, false);
    int ans = 0;

    for (int j = 0; j < m; j++){
        vector<int> temp;
        for (int i = 1; i < n; i++){
            if(v[i][j] < v[i-1][j] && !ord[i]){
                ans++;
                for(auto x : temp){
                    ord[x] = false;
                }
                break;
            }else if(v[i][j] > v[i-1][j] && !ord[i]){
                ord[i] = true;
                temp.push_back(i);
            } 
        }
        
    }
    
    
    cout << ans << "\n";
    
    return 0;
}