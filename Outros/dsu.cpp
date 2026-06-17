#include <bits/stdc++.h>
using namespace std;

/*Algoritmo para encontrar menor caminho que conecta todos os vértices de um grafo*/


struct DSU {
    vector<int> parent, size;
    DSU(int n) : parent(n), size(n, 1) {
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int v) {
        if (v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    }

    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (size[a] < size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
        return true;
    }
};

struct Edge {
    int x, y, w;

    Edge(int X = 0, int Y = 0, int W = 0){
        x = X;
        y = Y;
        w = W;
    }

    bool operator<(const Edge& outra) const {
        return this->w < outra.w;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<Edge> arestas;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        arestas.push_back(Edge(a, b, c));
    }

    sort(arestas.begin(), arestas.end());

    DSU dsu(n); //Folga de segurança para grafos indexados em 1
    int cnt = 0;
    vector<Edge> MST;
    for (auto u : arestas) {
        if (dsu.find(u.x) != dsu.find(u.y)) {
            MST.push_back(u);
            dsu.unite(u.x, u.y);
            cnt += u.w;
        }
    }


    
    return 0;
}