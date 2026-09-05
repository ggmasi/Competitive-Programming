// url: https://codeforces.com/contest/2259/problem/E
// Title: Treasure Map Destruction (Constructive Version)
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> mapa(n);
        vector<int> diff(n+1, 0);
        int l, r;
        for (int i = 0; i < n; i++){
            cin >> mapa[i];
            if(mapa[i] != -1){
                l = max(0, i-mapa[i]+1);
                r = min(n-1, i+mapa[i]-1);
                if(l <= r){
                    diff[l]++;
                    diff[r+1]--;
                }
            }
        }

        vector<int> ans;
        int somaAtual = 0;
        int tesouros = 0;

        for (int i = 0; i < n; i++){
            somaAtual += diff[i];
            if(somaAtual > 0){
                ans.push_back(0);
            }else{
                ans.push_back(1);
                tesouros++;
            }
        }
        
        if(tesouros == 0) {
            cout << "-1\n";
            continue;
        }
        bool res = true;
        for (int i = 0; i < n; i++){
            if(mapa[i] != -1){
                bool flag = false;

                if(i-mapa[i] >= 0 && ans[i-mapa[i]] == 1) flag = true;
                if(i+mapa[i] < n && ans[i+mapa[i]] == 1) flag = true;

                if(!flag){
                    cout << "-1\n";
                    res = false;
                    break;
                }
            }
        }
        
        if(!res) continue;
        for(auto x : ans){
            cout << x;
        }
        cout << "\n";
        
    }
    
    
    return 0;
}