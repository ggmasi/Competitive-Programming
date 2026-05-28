//https://cses.fi/problemset/task/1682
#include <bits/stdc++.h>
using namespace std;

int n;
map<int, vector<int>> graph;
map<int, vector<int>> graphReverse;
vector<int> visitados;
vector<int> ordem;


void dfsReversa(int start){
    visitados[start] = 1;
    for(int no : graphReverse[start]){
        if(visitados[no] == 0){
            dfsReversa(no);
        }
    }
    ordem.push_back(start);
    return;
}

void dfs(int start){
    visitados[start] = 1;
    for(int no : graph[start]){
        if(visitados[no] == 0){
            dfs(no);
        }
    }
    return;
}

int main(){
    int m; cin >> n >> m;
    visitados.assign(n, 0);
    for (int i = 0; i < m; i++){
        int u, v; cin >> u >> v;

        graph[u-1].push_back(v-1);
        graphReverse[v-1].push_back(u-1);
    }

   
    
    
    
    for(int i = 0; i < n; i++){
        if(visitados[i] == 0){
            dfsReversa(i);
        }
    }
    
    visitados.assign(n, 0);
    int cnt = 0;
    vector<int> componentes;
    while(!ordem.empty()){
        if(visitados[ordem.back()] == 0){
            cnt++;
            componentes.push_back(ordem.back());
            dfs(ordem.back());
        }
        ordem.pop_back();
    }

    if(cnt == 1){
        cout << "YES\n";
    }else{
        cout << "NO\n" << componentes[0]+1 << " " << componentes[1]+1 << endl;
    }
    
    
    return 0;
}