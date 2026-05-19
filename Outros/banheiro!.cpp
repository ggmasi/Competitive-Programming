//simulado Fatec
#include <bits/stdc++.h>
using namespace std;

int main(){
    int b; cin >> b;
    int idx = 1;
    while(b != 0){
        cout << "Consulta " << idx << ":\n";

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        cin.ignore();
        char t; cin >> t;
        int n; cin >> n;
        vector<int> consultas(n);
        int maxNum = 0;
        
        for (int i = 0; i < n; i++){
            cin >> consultas[i];
            maxNum = max(maxNum, consultas[i]);
        }
        
        vector<int> vetorTempo(maxNum+1);
        vector<int> vetorBanheiro(maxNum+1);
        vector<char> vetorGenero(maxNum+1);

        int tempoH, tempoM;
        if(t == 'A'){
            tempoH = 3;
            tempoM = 10;
        }else if(t == 'C'){
            tempoH = 5;
            tempoM = 15;
        }else{
            tempoH = 1;
            tempoM = 5;
        }

        for (int i = 1; i <= b; i++){
            min_heap.push({0, i});
        }

        for (int i = 1; i <= maxNum; i++){
            char gen = 'M';
            if(t == 'A'){
                if(i%3 == 1) gen = 'H';
            }else if(t == 'C'){
                if(i%4 == 1) gen = 'H';
            }else{
                if(i%3 == 1 || i%3 == 2) gen = 'H';
            }
            
            

            pair<int, int> atual;
            atual = min_heap.top();
            min_heap.pop();

            vetorTempo[i] = atual.first;
            vetorGenero[i] = gen;
            vetorBanheiro[i] = atual.second;

            int tempo = (gen == 'H') ? tempoH+atual.first : tempoM+atual.first;

            min_heap.push({tempo, atual.second});
        }
        
        
        for(int c : consultas){
            cout << vetorTempo[c] << " " << vetorBanheiro[c] << " " << vetorGenero[c] << endl;
        }
        
        cin >> b;
        idx++;
    }
}