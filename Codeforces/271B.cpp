// url: https://codeforces.com/contest/271/problem/B
// Title: Prime Matrix
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<int> primes(1e5+7, 0);

void sieve(int n){
    for (int i = 2; i <= n; i++){
        if(primes[i] == 0){
            if(1LL * i * i <= n){
                for (int j = i*i; j <=n; j+= i){
                    primes[j] = -1;
                }
                
            }
        }
    }
    
}

int find(int v){
    if(primes[v] == 0) return v;
    return primes[v] = find(v+1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    primes[0] = primes[1] = -1;
    sieve(1e5+5);


    int n, m; cin >> n >> m;

    vector<ll> rows(n, 0);
    vector<ll> cols(m, 0);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int temp; cin >> temp;
            int prox = find(temp);
            rows[i] += prox-temp;
            cols[j] += prox-temp;
        }
    }
    
    sort(rows.begin(), rows.end());
    sort(cols.begin(), cols.end());

    cout << min(cols[0], rows[0]) << "\n";


    return 0;
}