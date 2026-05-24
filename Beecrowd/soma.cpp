#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n+1);
    v[0] = 0;

    for (int i = 1; i <= n; i++){
        cin >> v[i];
        v[i] += v[i-1];
    }

    ll cnt = 0, ptr_ini = 0, ptr_fim = 0;
    for (int i = 0; i <= n; i++){
        while(ptr_ini < i && v[i]-v[ptr_ini] > k){
            ptr_ini++;
        }

        while(ptr_fim < i && v[i]-v[ptr_fim] >= k){
            ptr_fim++;
        }

        cnt += ptr_fim-ptr_ini;
    }
    
    cout << cnt << endl;
}
