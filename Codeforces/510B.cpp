//https://codeforces.com/contest/510/problem/B
// Fox And Two Dots
#include <bits/stdc++.h>
using namespace std;

int n, m; 
vector<vector<char>> v;
vector<vector<bool>> visitados;

bool dfs(int i, int j, int iPai, int jPai){
    visitados[i][j] = true;

    bool ans = false;
    if(i+1 < n && v[i+1][j] == v[i][j] && i+1 != iPai){
        if(visitados[i+1][j]) return true;
        ans |= dfs(i+1, j, i, j);
    }

    if(j+1 < m && v[i][j+1] == v[i][j] && j+1 != jPai){
        if(visitados[i][j+1]) return true;
        ans |= dfs(i, j+1, i, j);
    }

    if(i-1 >= 0 && v[i-1][j] == v[i][j] && i-1 != iPai){
        if(visitados[i-1][j]) return true;
        ans |= dfs(i-1, j, i, j);
    }

    if(j-1 >= 0 && v[i][j-1] == v[i][j] && j-1 != jPai){
        if(visitados[i][j-1]) return true;
        ans |= dfs(i, j-1, i, j);
    }

    return ans;
}

int main(){
    cin >> n >> m;
    v.resize(n);
    visitados.resize(n);
    for (int i = 0; i < n; i++){
        v[i].resize(m);
        visitados[i].resize(m);
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
            visitados[i][j] = false;
        }
        
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(!visitados[i][j]){
                if(dfs(i, j, i, j)){
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
        
    }
    
    cout << "No\n";
    return 0;

}