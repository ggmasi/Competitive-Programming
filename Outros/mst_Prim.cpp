#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;
const int INF = 1000000000;

struct Edge {
    int w = INF, to = -1;
};

// Estrutura para retornar o custo e as arestas juntos
struct ResultMST {
    int custo;
    vector<pair<int, int>> arestas; // Guarda os pares (u, v) da árvore
};

ResultMST prim(){
    int total_weight = 0;
    vector<bool> selected(n, false);
    vector<Edge> min_e(n);
    vector<pair<int, int>> mst_edges; //armazena a mst
    min_e[0].w = 0;

    for (int i=0; i<n; ++i) {
        int v = -1;
        for (int j = 0; j < n; ++j) {
            if (!selected[j] && (v == -1 || min_e[j].w < min_e[v].w))
                v = j;
        }

        //não há MST
        if (min_e[v].w == INF) {
            return {INF, {}};
        }

        selected[v] = true;
        total_weight += min_e[v].w;

        if(min_e[v].to != -1){
            mst_edges.push_back({v, min_e[v].to});

            /* CASO SEJA NECESSÁRIO ARMAZENAR A MST COMO UM GRAFO
                mst_adj[v].push_back(min_e[v].to);
                mst_adj[min_e[v].to].push_back(v);*/
        }

        for (int to = 0; to < n; ++to) {
            if (adj[v][to] < min_e[to].w)
                min_e[to] = {adj[v][to], v};
        }
    }

    return {total_weight, mst_edges};
}