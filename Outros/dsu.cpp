#include <bits/stdc++.h>
using namespace std;

struct DSU {
    int n;
    vector<int> pai;
    vector<int> rank;

    DSU(int N) {
        n = N;
        pai.resize(N);
        iota(pai.begin(), pai.end(), 0);
        rank.assign(N, 0);
    }

    int find(int x) {
        if (pai[x] == x)
            return x;
        return pai[x] = find(pai[x]);
    }

    void join(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b)
            return;

        if (rank[a] > rank[b]) {
            swap(a, b);
        }
        
        pai[a] = b;

        rank[b] += (rank[a] == rank[b]);
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
        arestas.push_back(Edge(a-1, b-1, c));
    }

    sort(arestas.begin(), arestas.end());

    DSU dsu(n);
    int cnt = 0;
    vector<Edge> MST;
    for (auto u : arestas) {
        if (dsu.find(u.x) != dsu.find(u.y)) {
            MST.push_back(u);
            dsu.join(u.x, u.y);
            cnt += u.w;
        }
    }


    cout << cnt << endl;
    return 0;
}