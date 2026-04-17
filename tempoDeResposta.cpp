//https://olimpiada.ic.unicamp.br/pratique/ps/2021/f1/tempo/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    
    map<int, int> tempo_total;
    map<int, int> tempo_recebido;
    map<int, bool> esta_esperando;

    int cont = 0;

    for (int i = 0; i < n; i++){
        char a; cin >> a;
        int x; cin >> x;

        if(a == 'R'){
            tempo_recebido[x] = cont;
            esta_esperando[x] = true;
            if(tempo_total.find(x) == tempo_total.end()) tempo_total[x] = 0;

            cont++;
        }else if(a == 'E'){
            tempo_total[x] += (cont - tempo_recebido[x]);
            esta_esperando[x] = false;

            cont++;
        }else{
            cont += x-1;
        }
    }
    
    for (auto const& [id, tempo] : tempo_total){
        if(esta_esperando[id]){
            cout << id << " " << -1 << endl;
        }else{
            cout << id << " " << tempo << endl;
        }
    }
    
    
    
}