// url: https://codeforces.com/problemset/problem/123/A
// Title: Prime Permutation
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<pii> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    vector<pii> primes;
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            int cnt = 1;
            if (1LL * i * i <= n) {
                for (int j = i * i; j <= n; j += i){
                    if(is_prime[j])cnt++;
                    is_prime[j] = false;
                }
            }
            primes.push_back({i, cnt});
        }
    }
    return primes;
}

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    string s; cin >> s;
    map<char, int> freq;
    for (int i = 0; i < s.length(); i++){
        freq[s[i]]++;
    }

    string ans = "";
    for (int i = 0; i <= s.length(); i++){
        ans.push_back('!');
    }

    int num = s.length()-1;
    vector<pii> primos = sieve(s.length());
    vector<pair<int, char>> letras;
    for(auto x : freq){
        letras.push_back({x.second, x.first});
    }
    sort(letras.rbegin(), letras.rend());
    int ridx = letras.size()-1;
    for(int i = primos.size()-1; i >= 0; i--){
        pii x = primos[i];
        if(x.second == 1){
            ans[x.first] = letras[ridx].second;
            letras[ridx].first--;
            if(letras[ridx].first == 0) ridx--;
            num--;
        }
        
        if(ridx < 0){
            cout << "NO\n";
            return 0;
        }
    }

    
    if(letras[0].first <= num){
        cout << "NO\n";
        return 0;
    }

    for (int i = 2; i < ans.length(); i++){
        if(ans[i] == '!') ans[i] = letras[0].second;
    }

   

    ans.erase(ans.begin());
    
    ans[0] = letras[ridx].second;


    cout << "YES\n";
    cout << ans << "\n";

    
    return 0;
}