// url: https://codeforces.com/gym/106636/problem/B
// Title: House Swapping
#include <bits/stdc++.h>
using namespace std;

vector<int> adj;
vector<bool> visitado;


// int dfs(int v){
    //     if(visitado[v]) return v;
    
    
    //     for (int u : adj[v]){
        //         return dfs(u);
        //     }
        
        //     return 0;
        // }
        
        
vector<pair<int, int>> find_cycle(int n){
    // color.assign(n+1, 0);
    // parent.assign(n+1, -1);
    
    vector<pair<int, int>> ciclos;
    visitado.assign(n+1, false);
    for (int i = 1; i <= n; i++){
        if(visitado[i] == true) continue;
        int noAtual = adj[i];
        int tamanho = 1;
        while(noAtual != i){
            tamanho++;
            visitado[noAtual] = true;
            noAtual = adj[noAtual];
        }
        
        ciclos.push_back({tamanho, i});



        // vector<int> ciclo;
        // ciclo.push_back(cycle_start);
        // for (int v = cycle_end; v != cycle_start; v = parent[v]){
        //     ciclo.push_back(v);
        //     visitado[v] = true;
        // }

            
        
        
        

       
        
    }
    return ciclos;
}


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        adj.clear();
        adj.assign(n+1, 0);
        for (int i = 1; i <= n; i++){
            int temp; cin >> temp;
            adj[i] = temp;
        }
        vector<pair<int, int>> ciclos = find_cycle(n);
        
        // cout << ciclos.size() << "\n";
        // for(auto x : ciclos){
        //     cout << x.first << " " << x.second << "\n";
        // }

        if(ciclos.size() == 1){
            cout << n << " 1 1\n";
        }else{
            sort(ciclos.begin(), ciclos.end());
            int soma = ciclos[0].first+ciclos[1].first;

            if(ciclos.size() > 2){
                soma = min(soma, ciclos[2].first);
            }
            
            cout << soma << " " << ciclos[0].second << " " << ciclos[1].second << "\n";
            


        }




    }
    
    return 0;
}