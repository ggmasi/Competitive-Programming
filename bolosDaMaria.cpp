//https://judge.beecrowd.com/pt/problems/view/1608
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int d, in, b; cin >> d >> in >> b;
        vector<int> ing(in);
        for (int i = 0; i < in; i++){
            cin >> ing[i];
        }
        vector<int> bolos(b, 0);
        for (int i = 0; i < b; i++){
            int temp; cin >> temp;
            for (int j = 0; j < temp; j++){
                int idx, qnt; cin >> idx >> qnt;
                bolos[i] += ing[idx]*qnt;
            }
            if(i > 0){
                bolos[i] = max(d/(bolos[i]), bolos[i-1]);
            }else{
                bolos[i] = d/bolos[i];
            }
        }
        
       
        cout << bolos[b-1] << endl;

    }
}