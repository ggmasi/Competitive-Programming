//https://codeforces.com/problemset/problem/20/C
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll INF = 1e18;
using pii = pair<long long, int>;
vector<vector<pii>> adj;

void dijkstra(int start, vector<ll>& distancias, vector<ll>& predecessores){
    int n = adj.size();
    distancias.assign(n, INF);
    predecessores.assign(n, -1);

    distancias[start] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> fila;
    fila.push({0, start});

    while(!fila.empty()){
        int v = fila.top().second;
        ll distV = fila.top().first;
        fila.pop();

        if(distV != distancias[v]) continue;

        for (auto aresta : adj[v]){
            int to = aresta.first;
            int len = aresta.second;

            if(distancias[v] + len < distancias[to]){
                distancias[to] = distancias[v] + len;
                predecessores[to] = v;
                fila.push({distancias[to], to});
            }
        }
        
    }
    
}

vector<int> restore_path(int start, int end, vector<ll> const& pred){
    vector<int> path;

    for (int v = end; v != start; v = pred[v]){
        path.push_back(v);
    }
    path.push_back(0);
    reverse(path.begin(), path.end());
    return path;
    
}

int main(){
    int n, m; cin >> n >> m;
    adj.assign(n, vector<pii>());
    for (int i = 0; i < m; i++){
        int u, v, w; cin >> u >> v >> w;
        u--; v--;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    
    vector<ll> dist;
    vector<ll> pred;

    dijkstra(0, dist, pred);

    if(pred[n-1] == -1){
        cout << -1 << endl;
        return 0;
    } 

    vector<int> path = restore_path(0, n-1, pred);
    for (int i = 0; i < path.size(); i++){
        cout << path[i]+1 << " ";
    }
    

}