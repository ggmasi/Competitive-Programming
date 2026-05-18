//https://judge.beecrowd.com/pt/problems/view/1905
#include <bits/stdc++.h>
using namespace std;

int visitados[5][5];
vector<vector<int>> m(5, vector<int>(5));

int dfs(int x, int y){
    if(x > 4 || x < 0 || y > 4 || y < 0) return 0;
    if(visitados[x][y] || m[x][y] == 1) return 0;
    visitados[x][y] = 1;
    if(x == 4 && y == 4) return 1;

    if(dfs(x+1, y) || dfs(x-1, y) || dfs(x, y+1) || dfs(x, y-1)) return 1;
    return 0;
}


int main(){
    int t; cin >> t;
    while(t--){
        memset(visitados, 0, sizeof(visitados));
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                cin >> m[i][j];
            }
        }

       if(dfs(0, 0)){
        cout << "COPS\n";
       }else{
        cout << "ROBBERS\n";
       }
        
        
    }
}