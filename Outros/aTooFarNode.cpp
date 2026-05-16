#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int caso = 0;
    while(n != 0){
        map<int, vector<int>> adj;
        set<int> nos;
        for (int i = 0; i < n; i++){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            nos.insert(u);
            nos.insert(v);
        }


        int ini, ttl; cin >> ini >> ttl;
        while(ini != 0 || ttl != 0){
            int pTtl = ttl;
            int tam = 1;
            set<int> vis;
            queue<int> fila;
            fila.push(ini);
            vis.insert(ini);
            while(!fila.empty() && ttl > 0){
                tam--;
                int no = fila.front();
                fila.pop();
                for(int u : adj[no]){
                    if(vis.find(u) == vis.end()){
                        vis.insert(u);
                        fila.push(u);
                    }
                }
                if(tam == 0){
                    ttl--;
                    tam = fila.size();
                }
            }

            cout << "Case "  << ++caso << ": " << nos.size() - vis.size() << " nodes not reachable from node " << ini << " with TTL = " << pTtl << ".\n";

            cin >> ini >> ttl;
        }


        cin >> n;
    }


    
    
}