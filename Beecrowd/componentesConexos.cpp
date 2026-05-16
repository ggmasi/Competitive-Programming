//https://judge.beecrowd.com/pt/problems/view/1082
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int p = 0;
    while(t--){
        p++;
        cout << "Case #" << p << ":\n";
        int v, e; cin >> v >> e;
        map<char, vector<char>> adj;
        for (int i = 0; i < e; i++){
            char u, w; cin >> u >> w;
            adj[u].push_back(w);
            adj[w].push_back(u);
        }
        
        int cnt = 0;
        vector<int> visitados(v, 0);
        for(int i = 0; i < v; i++){
            if(visitados[i] != 0) continue;
            cnt++;
            set<char> componenteAtual;
            queue<char> fila;
            char caracter = i+97;

            fila.push(caracter);
            
            while(!fila.empty()){
                char idx = fila.front();
                visitados[idx-97] = 1;
                componenteAtual.insert(idx);
                fila.pop();
                for(char c : adj[idx]){
                    if(visitados[c-97] != 0) continue;
                    fila.push(c);
                    // componenteAtual.push_back(c);
                }
            }
            
            for(char c : componenteAtual){
                cout << c << ",";
            }
            cout << endl;
        }
        cout << cnt << " connected components\n\n";
    }
}