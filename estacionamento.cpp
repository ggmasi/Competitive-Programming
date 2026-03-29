#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    while (cin >> m){
        vector<int> comprimento(m, 0);
        int sum = 0;
        int t; cin >> t;
        unordered_map<int, pair<int, int>> est;
        while(t--){
            char c; cin >> c;
            int placa, tam; cin >> placa;
            if(c == 'C'){
                cin >> tam;
                for (int i = 0; i <= m-tam; i++){
                    bool flag = false;
                    int j = i;
                    if(comprimento[i] == 0){
                        for (j = i; j < tam+i && j < m; j++){
                            if(comprimento[j] != 0) {
                                flag = true;
                                break;
                            }
                        }
                        if(flag || (j == m && comprimento[j-1] != 0 || j-i != tam)){
                             i = j;
                            continue;
                        }else{
                            sum += 10;
                            est[placa] = make_pair(tam, i);
                            fill(comprimento.begin() + i, comprimento.begin() + i + tam, 1);
                            break;
                        }
                    }
                }
                
            }else{
                int tm = est[placa].first;
                int idx = est[placa].second;
                fill(comprimento.begin() + idx, comprimento.begin() + idx + tm, 0);
            }

        }
        cout << sum << endl;
        
    }
    
}
