//https://codeforces.com/contest/445/problem/B
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<bool> visitados(51, false);
vector<vector<int>> v(51);
long long int ans = 1;
bool mult = false;

void busca(int x){
    if(visitados[x]) return;
    visitados[x] = true;
    if(mult){
        ans *= 2;
    }
    mult = true;

    for(auto y : v[x]){
        busca(y);
    }
    return;
}

int main(){
    n, m; cin >> n >> m;

    for (int i = 0; i < m; i++){
        int x, y; cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 1; i <= n; i++){
        if(!visitados[i]){
            busca(i);
            mult = false;
        }
    }
    
    cout << ans << "\n";

}