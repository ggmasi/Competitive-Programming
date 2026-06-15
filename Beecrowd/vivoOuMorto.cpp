//https://judge.beecrowd.com/pt/problems/view/2301
#include <bits/stdc++.h>
using namespace std;

int main(){
    int p, r; cin >> p >> r;
    int cnt = 1;
    while(p != 0 && r != 0){
        vector<int> posicoes(p);
        for (int i = 0; i < p; i++){
            cin >> posicoes[i];
        }
        
        
        for (int i = 0; i < r; i++){
            int n; cin >> n;
            int k; cin >> k;
            vector<int> filaAtual;
            for (int j = 0; j < posicoes.size(); j++){
                int temp; cin >> temp;
                if(temp == k){
                    filaAtual.push_back(posicoes[j]);
                }
            }
            posicoes = filaAtual;
        }
        int ganhador;
        for (int i = 0; i < p; i++){
            if(posicoes[i] != -1){
                ganhador = posicoes[i];
                break;
            }
        }
        
        cout << "Teste " << cnt << endl;
        cout << ganhador << endl << endl;


        cin >> p >> r;
        cnt++;
    }
}