// url: https://codeforces.com/contest/2257/problem/C
// Title: Spying on the Beaver
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<bool> dams;
vector<int> res;

int dfs(int v, vector<vector<int>>& g, vector<bool>& vis){
    vector<int> ativos;
    vis[v] = true;
    for(int u : g[v]){
        if(!vis[u]) {
            if(dfs(u, g, vis)){
                ativos.push_back(u);
            }
        }
    }

    int k = ativos.size();

    if(k > 0){
        if(dams[v]){
            for (int i = 0; i < k; i++){
                res.push_back(ativos[i]);
            }
        }else{
            for (int i = 0; i < k-1; i++){
                res.push_back(ativos[i]);
            }
            
        }
    }

    return dams[v] || (k > 0);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        res.resize(0);
        vector<vector<int>> adj(n+1);

        for (int i = 0; i < n-1; i++){
            int pai; cin >> pai;
            adj[pai].push_back(i+2);
            adj[i+2].push_back(pai);
        }

        int num; cin >> num;
        if(num == 1){
            int temp; cin >> temp;
            cout << "0\n";
            continue;
        }

        dams.assign(n+1, false);
        for (int i = 0; i < num; i++){
            int temp; cin >> temp;
            dams[temp] = true;
        }
        vector<bool> vis(n+1, false);
        dfs(1, adj, vis);

        cout << res.size();
        for(auto x : res){
            cout << " " << x;
        }
        cout << "\n";
    }

    return 0;
}