//https://codeforces.com/gym/105904/problem/D
#include <bits/stdc++.h>
using namespace std;

int n, m, p, s;

int solve(int raiz, vector<vector<int>>& pares, vector<int>& caminho){
    for (int i = 0; i < caminho.size(); i++){
        if(pares[raiz][caminho[i]] == 1) return 0;
    }

    int ans = 0;

    if(raiz == 0){
        for (int i = 1; i <= p; i++){
            caminho.push_back(i);
            ans += solve(i, pares, caminho);
            caminho.pop_back();
        }
    }else if(raiz <= p){
        for (int i = p+1; i <= p+s; i++){
            caminho.push_back(i);
            ans += solve(i, pares, caminho);
            caminho.pop_back();
        }
    }else if(raiz > p && raiz <= p+s){
        ans++;
        for (int i = p+s+1; i <= n; i++){
            caminho.push_back(i);
            ans += solve(i, pares, caminho);
            caminho.pop_back();
        }
    }else{
        ans++;
        for (int i = raiz+1; i <= n; i++){
            caminho.push_back(i);
            ans += solve(i, pares, caminho);
            caminho.pop_back();
        }
    }

    return ans;
    
}

int main(){
    cin >> n >> m >> p >> s;

    vector<vector<int>> pares(n+1, vector<int>(n+1, 0));
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        pares[a][b] = 1;
        pares[b][a] = 1;
    }
    
    vector<int> caminho;

    cout << solve(0, pares, caminho) << endl;
    return 0;
}