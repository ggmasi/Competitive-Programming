//https://codeforces.com/contest/80/problem/A
#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n){
    vector<bool> is_prime(n+1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i < n; i++){
        if(is_prime[i]){
            primes.push_back(i);
            if(1LL*i*i <= n){
                for (int j = i*i; j <= n; j+=i){
                    is_prime[j] = false;
                }
                
            }
        }
    }
    
    return is_prime;
}

int main(){
    int n, m; cin >> n >> m;

    vector<bool> crivo = sieve(50);
    if(crivo[n]){
        for (int i = n+1; i < 50; i++){
            if(crivo[i]){
                if(i == m){
                    cout << "YES\n";
                }else{
                    cout << "NO\n"; 
                }
                return 0;
            }
        }
        
    }

    cout << "NO\n";
    return 0;
}