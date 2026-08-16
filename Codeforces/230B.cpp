// url: https://codeforces.com/contest/230/problem/B
// Title: T-primes
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<bool> is_prime(1e6+7, true);

void sieve(int n){
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++){
        if(is_prime[i]){
            if(1LL*i*i <= n){
                for(int j = i*i; j <= n; j += i){
                    is_prime[j] = false;
                }
            }
        }
    }
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve(1e6+5);

    int n; cin >> n;

    for (int i = 0; i < n; i++){
        ll temp; cin >> temp;

        ll raiz = sqrt(temp);
        if(raiz*raiz == temp && is_prime[raiz]){
            cout << "YES\n";
        }else cout << "NO\n";
    }
    

    
    return 0;
}