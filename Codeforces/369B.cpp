//https://codeforces.com/contest/369/problem/B
// Valera And Contest
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, r, sall, sk; cin >> n >> k >> l >> r >> sall >> sk;

    int div = sk/k;
    int resto = sk%k;
    for (int i = 0; i < k; i++){
        if(resto > 0){
            cout << div+1 << " ";
            resto--;
        }else{
            cout << div << " ";            
        }
    }
    
    if(n > k){
        div = (sall-sk)/(n-k);
        resto = (sall-sk)%(n-k);
        for (int i = 0; i < n-k; i++){
            if(resto > 0){
                cout << div+1 << " ";
                resto--;
            }else{
                cout << div << " ";            
            }
        }

    }
}