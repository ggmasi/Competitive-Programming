//https://judge.beecrowd.com/pt/problems/view/1148
#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;
using pii = pair<int, int>;
vector<unordered_map<int, int>> adj;

void dijkstra(int origem, int destino, vector<int>& distancias, vector<int>& predecessores) {
    int n = adj.size();
    distancias.assign(n, INF);
    predecessores.assign(n, -1);

    distancias[origem] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> fila;
    fila.push({0, origem});

    while (!fila.empty()) {
        int atual = fila.top().second;
        int distAtual = fila.top().first;
        fila.pop();

        if(atual == destino) return;

        if (distAtual != distancias[atual])
            continue;

        for (auto edge : adj[atual]) {
            int v = edge.first;
            int len = edge.second;

            if (distancias[atual] + len < distancias[v]) {
                distancias[v] = distancias[atual] + len;
                predecessores[v] = atual;
                fila.push({distancias[v], v});
            }
        }


    }
}

int main(){
    while(1){
        int n, e; cin >> n >> e;

        if(n == 0 && e == 0) return 0;
        
        adj.assign(n, unordered_map<int, int>());
    
        for (int i = 0; i < e; i++){
            int u, v, w; cin >> u >> v >> w;
            u--;
            v--;
            if(adj[v].count(u)){
                adj[v][u] = 0;
                adj[u][v] = 0;
            }else{
                adj[u][v] = w;
            }
    
        }
        
        vector<int> distancias, predecessores;
        int k; cin >> k;
        for (int i = 0; i < k; i++){
            int u, v; cin >> u >> v;
            u--;
            v--;
            dijkstra(u, v, distancias, predecessores);
            if(distancias[v] == INF){
                cout << "Nao e possivel entregar a carta\n";
            }else{
                cout << distancias[v] << endl;
            }
        }
        

    }



}