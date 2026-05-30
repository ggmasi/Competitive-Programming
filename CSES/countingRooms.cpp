//https://cses.fi/problemset/task/1192
#include <bits/stdc++.h>
using namespace std;

int n, m; 

void dfs(vector<vector<char>>& matriz ,int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m || matriz[i][j] != '.') return;
    matriz[i][j] = '*';
    
    dfs(matriz, i+1, j);
    dfs(matriz, i, j+1);
    dfs(matriz, i-1, j);
    dfs(matriz, i, j-1);
}

int main(){
    cin >> n >> m;

    vector<vector<char>> matriz(n, vector<char>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }
    
    int cnt = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(matriz[i][j] == '.'){
                cnt++;
                dfs(matriz, i, j);
            }
        }
        
    }
    
    cout << cnt << endl;
}