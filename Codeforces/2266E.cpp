// url: https://codeforces.com/contest/2266/problem/E
// Title: Prime Destruction
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<int> primos[200005];
ll ans[200005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for (int i = 2; i < 200005; i++){
        if(primos[i].empty()){
            for (int j = i; j < 200005; j += i){
                primos[j].push_back(i);
            }
        }
    }
    

    int t; cin >> t;

    while(t--){
        int n, k; cin >> n >> k;
        int maior = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            maior = max(maior, v[i]);
        }
        
        for (int i = 1; i <= maior; i++){
            if(i <= k) ans[i] = 0;
            else{
                ans[i] = -1;
                for(auto p : primos[i]){
                    ll custo = 1LL + (ll)p*ans[i/p];

                    if(ans[i] == -1 || custo < ans[i]){
                        ans[i] = custo;
                    }
                }
            }
        }
        
        ll res = 0;
        for(int i = 0; i < n; i++){
            res += ans[v[i]];
        }
        cout << res << "\n";
    }


    return 0;
}