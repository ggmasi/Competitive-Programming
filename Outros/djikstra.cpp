#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

map<char, map<char, int>> grafo;
map<char, int> custos;
map<char, int> visitado;

char achar_custo_mais_baixo(){
    int menorCusto = INF;
    char retorno = '@';
    for (const auto [c, i] : custos){
        if(i < menorCusto && visitado[c] != 1){
            menorCusto = i;
            retorno = c;
        }
    }
    return retorno;
}

void busca(){
    char n = achar_custo_mais_baixo();
    while(n != '@'){
        for(const auto [c, i] : grafo[n]){
            if(custos[c] > custos[n] + i){
                custos[c] = custos[n] + i;
            }
        }
        visitado[n] = 1;
        n = achar_custo_mais_baixo();
    }
}

int main(){

    int t; cin >> t;
    char maiorNo = 0;
    for (int i = 0; i < t; i++){
        char origem, destino; 
        int custo;
        cin >> origem >> destino >> custo;

        grafo[origem][destino] = custo;

        custos[origem] = INF;
        custos[destino] = INF;

        if(destino > maiorNo) maiorNo = destino;
    }
    
    custos['A'] = 0;

    busca();

    if(custos[maiorNo] == INF){
        cout << "Não é possível sair de A e chegar em " << maiorNo << endl;
        return 0;
    }

    cout << "De A para " << maiorNo << " custa ";
    cout << custos[maiorNo] << endl;
    return 0;

}