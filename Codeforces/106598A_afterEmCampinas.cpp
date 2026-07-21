//https://codeforces.com/gym/106598/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    vector<int> preco(n);
    vector<int> musica(n);

    vector<int> proxPos(n);
    proxPos[n-1] = -2;


    for (int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        preco[i] = -a;
        musica[i] = b;
        
    }

    for (int i = n-2; i >= 0; i--){
        if(musica[i] != musica[i+1]){
            proxPos[i] = i+1;
        }else{
            proxPos[i] = proxPos[i+1];
        }
    }
    


    while(q--){
        int a, b; cin >> a >> b;

        auto it = lower_bound(preco.begin(), preco.end(), -a);
        int pos = it-preco.begin();
        
        if(pos >= n){
            cout << -1 << endl;
            continue;
        }

        if(musica[pos] == b){
            pos = proxPos[pos];
        }
        
        if(pos >= n){
            cout << -1 << endl;
        }else{
            cout << pos+1 << endl;
        }
    }
    
}