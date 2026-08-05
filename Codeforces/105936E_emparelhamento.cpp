//https://codeforces.com/group/YgJmumGtHD/contest/105936/problem/E
#include <bits/stdc++.h>
using namespace std;

int n;
vector<bool> visitado;
vector<vector<int>> adj;

void dfs(int v){
    visitado[v] = true;
    for(int u : adj[v]){
        if(!visitado[u]) dfs(u);
    }
}

int find_comps(){
    visitado.assign(n+1, false);
    int ans = 0;
    for (int v = 1; v <= n; v++){
        if(!visitado[v]){
            dfs(v);
            ans++;
        }
        
    }
    return ans;
}

int main(){
    cin >> n;
    adj.resize(n+1);
    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    

    int numComp = find_comps();

    cout << n-numComp << "\n";

    
    return 0;
}