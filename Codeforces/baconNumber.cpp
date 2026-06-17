//https://codeforces.com/gym/105327/problem/B
#include <bits/stdc++.h>
using namespace std;
int n, m;

void bfs(int ator_origem, int ator_destino, vector<vector<int>>& grafo, vector<int>& ehDestino, vector<int>& fontes){
    vector<int> dist(n+1, -1);
    vector<int> pai(n+1, -1);

    queue<int> fila;
    for(auto x : fontes){
        fila.push(x);
        dist[x] = 0;
    }

    while(!fila.empty()){
        int u = fila.front();
        fila.pop();

        if(ehDestino[u] == 1){
            vector<int> caminho;
            int atual = u;
            while(atual != -1){
                caminho.push_back(atual);
                atual = pai[atual];
            }
            reverse(caminho.begin(), caminho.end());

            int k = caminho.size()+1;
            cout << k << "\n";

            cout << ator_origem << " ";
            for (size_t i = 0; i < caminho.size(); i++){
                cout << caminho[i] << " ";
                if(i < caminho.size()-1){
                    cout << grafo[caminho[i]][caminho[i+1]] << " ";
                }
            }
            cout << ator_destino << "\n";
            return;
        }

        for(int v = 1; v <= n; v++){
            if(grafo[u][v] != 0 && dist[v] == -1){
                dist[v] = dist[u]+1;
                pai[v] = u;
                fila.push(v);
            }
        }
    }

    cout << "-1\n";
}

int main(){
    cin >> n >> m;

    vector<vector<int>> grafo(n+1, vector<int>(n+1));
    vector<vector<int>> atuacoes(m+1);

    for (int i = 0; i < n; i++){
        int ni; cin >> ni;
        while(ni--){
            int temp; cin >> temp;
            atuacoes[temp].push_back(i+1);
        }
    }

    for (int ator = 1; ator <= m; ator++){
        for (size_t i = 0; i < atuacoes[ator].size(); i++){
            for (size_t j = i+1; j < atuacoes[ator].size(); j++){
                grafo[atuacoes[ator][i]][atuacoes[ator][j]] = ator;
                grafo[atuacoes[ator][j]][atuacoes[ator][i]] = ator;
            }
            
        }
        
    }
    
    
    int q; cin >> q;
    while(q--){
        vector<int> ehDestino(n+1, -1);
        int u, v; cin >> u >> v;
        vector<int>& fontes = atuacoes[u];
        for(auto x : atuacoes[v]){
            ehDestino[x] = 1;
        }

        bfs(u, v, grafo, ehDestino, fontes);
        

    }
    return 0;
}