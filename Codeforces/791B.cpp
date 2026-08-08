//https://codeforces.com/contest/791/problem/B
// Bear And Friendship Condition
#include <bits/stdc++.h>
using namespace std;

int n; 
vector<bool> visitado;
vector<int> componente;
long long int numArestas;
vector<vector<int>> adj;

void dfs(int v){
    visitado[v] = true;
    componente.push_back(v);
    for (int u : adj[v]){
        numArestas++;
        if(!visitado[u]){
            dfs(u);
        }
    }  
}

bool find_comps(){
    visitado.assign(n+1, false);
    bool ans = true;
    for (int v = 1; v <= n; v++){
        if(!visitado[v]){
            componente.clear();
            numArestas = 0;
            dfs(v);
            
            long long int vertices = componente.size();
            if(numArestas != (vertices*(vertices-1))){
                ans = false;
                break;
            }

        }
    }
    return ans;
}

int main(){
    int m;
    cin >> n >> m;
    adj.resize(n+1);
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if(find_comps()){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;

    
}