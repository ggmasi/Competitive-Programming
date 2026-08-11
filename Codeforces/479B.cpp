// url: https://codeforces.com/contest/479/problem/B
// Title: Towers
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; cin >> n >> k;
    vector<pair<int, int>> v(n);
    
    for (int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());
    
    vector<pair<int, int>> acoes;

    int diff = v[n-1].first-v[0].first;
    int idx = -1;
    int idxAtual = 0;
    while(k){
        int maior = v[n-1].second;
        int menor = v[0].second;

        v[n-1].first--;
        v[0].first++;

        sort(v.begin(), v.end());

        acoes.push_back({maior, menor}); 
        if(v[n-1].first-v[0].first < diff){
            diff = v[n-1].first-v[0].first;
            idx = idxAtual;
        }
        idxAtual++;
        k--;
    }

    if(idx == -1){
        cout << diff << " 0\n";
    }else{
        cout << diff << " " << idx+1 << "\n";
        for (int i = 0; i <= idx; i++){
            cout << acoes[i].first+1 << " " << acoes[i].second+1 << "\n";
        }
        
    }

    
    return 0;
}