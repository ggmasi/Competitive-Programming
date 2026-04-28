//https://judge.beecrowd.com/pt/problems/view/2893
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll MOD = 1000007;

int main(){
    ll t; cin >> t;
    while(t--){
        ll k, n; cin >> k >> n;
        if(k >= n){
            cout << n-1 << endl;
            continue;
        }

        vector<ll> v(n);
        ll sum = 0;
        for (ll i = 0; i < k; i++){
            v[i] = i%MOD;
            sum += v[i]%MOD;
        }
        v[k] = sum;
        for (ll i = k+1; i < n; i++){
            v[i] = ((v[i-1]+v[i-1]-v[i-k-1])%MOD + MOD)%MOD;
        }
        
        cout << v[n-1]%MOD << endl;
    }
}