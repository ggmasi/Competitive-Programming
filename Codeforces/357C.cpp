// url: https://codeforces.com/contest/357/problem/C
// Title: Knight Tournament
#include <bits/stdc++.h>
using namespace std;

vector<int> prox;

int getProx(int n){
    if(prox[n] == n) return n;
    return prox[n] = getProx(prox[n]);
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    prox.resize(n+2);
    iota(prox.begin(), prox.end(), 0);
    vector<int> v(n+1, 0);


    // for(auto x : prox){
    //     cout << x << " ";
    // }

    for (int i = 0; i < m; i++){
        int l, r, x; cin >> l >> r >> x;

        int atual = getProx(l);
        while(atual <= r){
            if(atual == x){
                atual++;
            }else{
                v[atual] = x;
                prox[atual] = atual+1;
            }
            atual = getProx(atual);
        }
    }
    
    for(int i = 1; i < n+1; i++){
        cout << v[i] << " ";
    }

    cout << "\n";
    return 0;
}