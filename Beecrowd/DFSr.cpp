//https://judge.beecrowd.com/pt/problems/view/1081
#include <bits/stdc++.h>
using namespace std;

int visitados[20];

void dfs(map<int, vector<int>>& adj, int x, int esp){
    visitados[x] = 1;
    for(int u : adj[x]){
        for (int i = 0; i < esp; i++){
            cout << "  ";
        }
        
        if(visitados[u]){
            cout <<  x << "-" << u << endl;
        }else{
            cout << x << "-" << u << " pathR(G," << u << ")\n";
            dfs(adj, u, esp+1);
        }
    }
}

int main(){
    int t; cin >> t;
    int idx = 0;
    while(t--){
        memset(visitados, 0, sizeof(visitados));
        int v, e; cin >> v >> e;
        map<int, vector<int>> adj;
        for (int i = 0; i < e; i++){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
        }
        for (int i = 0; i < v; i++){
            sort(adj[i].begin(), adj[i].end());
        }
        

        cout << "Caso " << ++idx << ":\n";
        for (int i = 0; i < v; i++){

            if(!visitados[i] && adj[i].size() > 0){
                dfs(adj, i, 1);
                cout << endl;
            }
        }
        
    }
}