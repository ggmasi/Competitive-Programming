// url: https://codeforces.com/contest/577/problem/C
// Title: Vasya and Petya's Game
#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    vector<bool> is_prime(n+1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;

    for (int i = 0; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
            if(1LL * i * i <= n){
                int cont = 1;
                for (int j = (i*i)+i; j <= n; j += i){
                    if(cont == i){
                        cont = 1;
                        continue;
                    }
                    is_prime[j] = false;
                    cont++;
                }
                
            }
        }
    }
    return primes;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;

    vector<int> ans = sieve(n);

    cout << ans.size() << "\n";

    for(auto x : ans){
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}