#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

map<int, map<int, int>> grafo;
map<int, int> custos;
map<int, int> visitado;

int achar_custo_mais_baixo(map<int, int>& copiaCusto){
    int menorCusto = INF;
    int retorno = -1;
    for (auto const& [c, i] : copiaCusto){
        if(i < menorCusto && visitado[c] != 1){
            menorCusto = i;
            retorno = c;
        }
    }
    return retorno;
}

int busca(int origem, int destino, int n_cidades){
    visitado.clear();
    custos.clear();
    for (int i = 1; i <= n_cidades; i++){
        custos[i] = INF;
    }
    custos[origem] = 0;
    int n = achar_custo_mais_baixo(custos);
    while(n != -1){
        int custo_atual = custos[n];
        if(destino == n) break;
        for(auto const& [c, i] : grafo[n]){
            if(custos[c] > custo_atual + i){
                custos[c] = custo_atual + i;
            }
        }
        visitado[n] = 1;
        n = achar_custo_mais_baixo(custos);
    }

    return custos[destino];
}

int main(){

    while (1){
        int nc, t; cin >> nc >> t;
        grafo.clear();
        if(nc == 0 && t == 0){
            return 0;
        }

        for (int i = 0; i < t; i++){
            int origem, destino; 
            int custo;
            cin >> origem >> destino >> custo;

            if(grafo.count(destino) && grafo[destino].count(origem)){
                grafo[origem][destino] = 0;
                grafo[destino][origem] = 0;

            }else{
                grafo[origem][destino] = custo;
            }

        }
        
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            int o, d; cin >> o >> d;
            int res = busca(o, d, nc);
            if(res >= INF){
                cout << "Nao e possivel entregar a carta" << endl;
            }else cout << res << endl;
        }
        cout << endl;
    }
    
    
    

    


    return 0;

}