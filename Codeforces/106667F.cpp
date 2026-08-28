// url: https://codeforces.com/gym/106667/problem/F
// Title: Escaping the Sun
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pid pair<int, double>
#define pdi pair<double, int>
vector<vector<pid>> adj;
const double INF = 1e18;


struct no{
    double x;
    double y;
    double r;
};

void dijkstra(int start, vector<double>& distancias){
    int n = adj.size();
    distancias.assign(n, INF);

    distancias[start] = 0;
    priority_queue<pdi, vector<pdi>, greater<pdi>> fila;
    fila.push({0, start});

    while(!fila.empty()){
        int v = fila.top().second;
        double distV = fila.top().first;
        fila.pop();

        if(distV != distancias[v]) continue;

        for (auto aresta : adj[v]){
            int to = aresta.first;
            double len = aresta.second;

            if(distancias[v] + len < distancias[to]){
                distancias[to] = distancias[v] + len;
                fila.push({distancias[to], to});
            }
        }
        
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    double n; cin >> n;
    double h; cin >> h;

    adj.resize(n+2);

    vector<no> v(n);
    adj[0].push_back({n+1, h});
    for (int i = 0; i < n; i++){
        cin >> v[i].x >> v[i].y >> v[i].r;
        adj[0].push_back({i+1, max(0.0, v[i].y-v[i].r)});
        for (int j = i-1; j >= 0; j--){
            adj[i+1].push_back({j+1, max(0.0, sqrt((v[i].x-v[j].x)*(v[i].x-v[j].x) + (v[i].y-v[j].y)*(v[i].y-v[j].y)) - (v[i].r+v[j].r))});
            adj[j+1].push_back({i+1, max(0.0, sqrt((v[i].x-v[j].x)*(v[i].x-v[j].x) + (v[i].y-v[j].y)*(v[i].y-v[j].y)) - (v[i].r+v[j].r))});
        }
        adj[i+1].push_back({n+1, max(0.0, h-v[i].y-v[i].r)});
    }

    vector<double> dist(n+2, 0.0);

    dijkstra(0, dist);
    
    cout  << fixed << setprecision(7) << dist[n+1] << "\n";

    return 0;
}