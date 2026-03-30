#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin >> t){
        vector<int> inicio(t);
        vector<int> chegada(t);
        for (int i = 0; i < t; i++){
            cin >> inicio[i];
        }
        for (int i = 0; i < t; i++){
            cin >> chegada[i];
        }
        int sum = 0;
        int pos = 0;

        for (int i = 0; i < t; i++){
            auto it = find(inicio.begin(), inicio.end(), chegada[i]);
            
            int pos_atual = distance(inicio.begin(), it);
            
            sum += pos_atual;
            
            inicio.erase(it);
        }
        

        cout << sum << endl;
    }
}